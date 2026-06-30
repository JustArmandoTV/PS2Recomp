#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D278
// Address: 0x20d278 - 0x20f278
void sub_0020D278_0x20d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D278_0x20d278");
#endif

    switch (ctx->pc) {
        case 0x20d278u: goto label_20d278;
        case 0x20d27cu: goto label_20d27c;
        case 0x20d280u: goto label_20d280;
        case 0x20d284u: goto label_20d284;
        case 0x20d288u: goto label_20d288;
        case 0x20d28cu: goto label_20d28c;
        case 0x20d290u: goto label_20d290;
        case 0x20d294u: goto label_20d294;
        case 0x20d298u: goto label_20d298;
        case 0x20d29cu: goto label_20d29c;
        case 0x20d2a0u: goto label_20d2a0;
        case 0x20d2a4u: goto label_20d2a4;
        case 0x20d2a8u: goto label_20d2a8;
        case 0x20d2acu: goto label_20d2ac;
        case 0x20d2b0u: goto label_20d2b0;
        case 0x20d2b4u: goto label_20d2b4;
        case 0x20d2b8u: goto label_20d2b8;
        case 0x20d2bcu: goto label_20d2bc;
        case 0x20d2c0u: goto label_20d2c0;
        case 0x20d2c4u: goto label_20d2c4;
        case 0x20d2c8u: goto label_20d2c8;
        case 0x20d2ccu: goto label_20d2cc;
        case 0x20d2d0u: goto label_20d2d0;
        case 0x20d2d4u: goto label_20d2d4;
        case 0x20d2d8u: goto label_20d2d8;
        case 0x20d2dcu: goto label_20d2dc;
        case 0x20d2e0u: goto label_20d2e0;
        case 0x20d2e4u: goto label_20d2e4;
        case 0x20d2e8u: goto label_20d2e8;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d2f0u: goto label_20d2f0;
        case 0x20d2f4u: goto label_20d2f4;
        case 0x20d2f8u: goto label_20d2f8;
        case 0x20d2fcu: goto label_20d2fc;
        case 0x20d300u: goto label_20d300;
        case 0x20d304u: goto label_20d304;
        case 0x20d308u: goto label_20d308;
        case 0x20d30cu: goto label_20d30c;
        case 0x20d310u: goto label_20d310;
        case 0x20d314u: goto label_20d314;
        case 0x20d318u: goto label_20d318;
        case 0x20d31cu: goto label_20d31c;
        case 0x20d320u: goto label_20d320;
        case 0x20d324u: goto label_20d324;
        case 0x20d328u: goto label_20d328;
        case 0x20d32cu: goto label_20d32c;
        case 0x20d330u: goto label_20d330;
        case 0x20d334u: goto label_20d334;
        case 0x20d338u: goto label_20d338;
        case 0x20d33cu: goto label_20d33c;
        case 0x20d340u: goto label_20d340;
        case 0x20d344u: goto label_20d344;
        case 0x20d348u: goto label_20d348;
        case 0x20d34cu: goto label_20d34c;
        case 0x20d350u: goto label_20d350;
        case 0x20d354u: goto label_20d354;
        case 0x20d358u: goto label_20d358;
        case 0x20d35cu: goto label_20d35c;
        case 0x20d360u: goto label_20d360;
        case 0x20d364u: goto label_20d364;
        case 0x20d368u: goto label_20d368;
        case 0x20d36cu: goto label_20d36c;
        case 0x20d370u: goto label_20d370;
        case 0x20d374u: goto label_20d374;
        case 0x20d378u: goto label_20d378;
        case 0x20d37cu: goto label_20d37c;
        case 0x20d380u: goto label_20d380;
        case 0x20d384u: goto label_20d384;
        case 0x20d388u: goto label_20d388;
        case 0x20d38cu: goto label_20d38c;
        case 0x20d390u: goto label_20d390;
        case 0x20d394u: goto label_20d394;
        case 0x20d398u: goto label_20d398;
        case 0x20d39cu: goto label_20d39c;
        case 0x20d3a0u: goto label_20d3a0;
        case 0x20d3a4u: goto label_20d3a4;
        case 0x20d3a8u: goto label_20d3a8;
        case 0x20d3acu: goto label_20d3ac;
        case 0x20d3b0u: goto label_20d3b0;
        case 0x20d3b4u: goto label_20d3b4;
        case 0x20d3b8u: goto label_20d3b8;
        case 0x20d3bcu: goto label_20d3bc;
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3c4u: goto label_20d3c4;
        case 0x20d3c8u: goto label_20d3c8;
        case 0x20d3ccu: goto label_20d3cc;
        case 0x20d3d0u: goto label_20d3d0;
        case 0x20d3d4u: goto label_20d3d4;
        case 0x20d3d8u: goto label_20d3d8;
        case 0x20d3dcu: goto label_20d3dc;
        case 0x20d3e0u: goto label_20d3e0;
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d3ecu: goto label_20d3ec;
        case 0x20d3f0u: goto label_20d3f0;
        case 0x20d3f4u: goto label_20d3f4;
        case 0x20d3f8u: goto label_20d3f8;
        case 0x20d3fcu: goto label_20d3fc;
        case 0x20d400u: goto label_20d400;
        case 0x20d404u: goto label_20d404;
        case 0x20d408u: goto label_20d408;
        case 0x20d40cu: goto label_20d40c;
        case 0x20d410u: goto label_20d410;
        case 0x20d414u: goto label_20d414;
        case 0x20d418u: goto label_20d418;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d420u: goto label_20d420;
        case 0x20d424u: goto label_20d424;
        case 0x20d428u: goto label_20d428;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d430u: goto label_20d430;
        case 0x20d434u: goto label_20d434;
        case 0x20d438u: goto label_20d438;
        case 0x20d43cu: goto label_20d43c;
        case 0x20d440u: goto label_20d440;
        case 0x20d444u: goto label_20d444;
        case 0x20d448u: goto label_20d448;
        case 0x20d44cu: goto label_20d44c;
        case 0x20d450u: goto label_20d450;
        case 0x20d454u: goto label_20d454;
        case 0x20d458u: goto label_20d458;
        case 0x20d45cu: goto label_20d45c;
        case 0x20d460u: goto label_20d460;
        case 0x20d464u: goto label_20d464;
        case 0x20d468u: goto label_20d468;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d470u: goto label_20d470;
        case 0x20d474u: goto label_20d474;
        case 0x20d478u: goto label_20d478;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d480u: goto label_20d480;
        case 0x20d484u: goto label_20d484;
        case 0x20d488u: goto label_20d488;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d490u: goto label_20d490;
        case 0x20d494u: goto label_20d494;
        case 0x20d498u: goto label_20d498;
        case 0x20d49cu: goto label_20d49c;
        case 0x20d4a0u: goto label_20d4a0;
        case 0x20d4a4u: goto label_20d4a4;
        case 0x20d4a8u: goto label_20d4a8;
        case 0x20d4acu: goto label_20d4ac;
        case 0x20d4b0u: goto label_20d4b0;
        case 0x20d4b4u: goto label_20d4b4;
        case 0x20d4b8u: goto label_20d4b8;
        case 0x20d4bcu: goto label_20d4bc;
        case 0x20d4c0u: goto label_20d4c0;
        case 0x20d4c4u: goto label_20d4c4;
        case 0x20d4c8u: goto label_20d4c8;
        case 0x20d4ccu: goto label_20d4cc;
        case 0x20d4d0u: goto label_20d4d0;
        case 0x20d4d4u: goto label_20d4d4;
        case 0x20d4d8u: goto label_20d4d8;
        case 0x20d4dcu: goto label_20d4dc;
        case 0x20d4e0u: goto label_20d4e0;
        case 0x20d4e4u: goto label_20d4e4;
        case 0x20d4e8u: goto label_20d4e8;
        case 0x20d4ecu: goto label_20d4ec;
        case 0x20d4f0u: goto label_20d4f0;
        case 0x20d4f4u: goto label_20d4f4;
        case 0x20d4f8u: goto label_20d4f8;
        case 0x20d4fcu: goto label_20d4fc;
        case 0x20d500u: goto label_20d500;
        case 0x20d504u: goto label_20d504;
        case 0x20d508u: goto label_20d508;
        case 0x20d50cu: goto label_20d50c;
        case 0x20d510u: goto label_20d510;
        case 0x20d514u: goto label_20d514;
        case 0x20d518u: goto label_20d518;
        case 0x20d51cu: goto label_20d51c;
        case 0x20d520u: goto label_20d520;
        case 0x20d524u: goto label_20d524;
        case 0x20d528u: goto label_20d528;
        case 0x20d52cu: goto label_20d52c;
        case 0x20d530u: goto label_20d530;
        case 0x20d534u: goto label_20d534;
        case 0x20d538u: goto label_20d538;
        case 0x20d53cu: goto label_20d53c;
        case 0x20d540u: goto label_20d540;
        case 0x20d544u: goto label_20d544;
        case 0x20d548u: goto label_20d548;
        case 0x20d54cu: goto label_20d54c;
        case 0x20d550u: goto label_20d550;
        case 0x20d554u: goto label_20d554;
        case 0x20d558u: goto label_20d558;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d560u: goto label_20d560;
        case 0x20d564u: goto label_20d564;
        case 0x20d568u: goto label_20d568;
        case 0x20d56cu: goto label_20d56c;
        case 0x20d570u: goto label_20d570;
        case 0x20d574u: goto label_20d574;
        case 0x20d578u: goto label_20d578;
        case 0x20d57cu: goto label_20d57c;
        case 0x20d580u: goto label_20d580;
        case 0x20d584u: goto label_20d584;
        case 0x20d588u: goto label_20d588;
        case 0x20d58cu: goto label_20d58c;
        case 0x20d590u: goto label_20d590;
        case 0x20d594u: goto label_20d594;
        case 0x20d598u: goto label_20d598;
        case 0x20d59cu: goto label_20d59c;
        case 0x20d5a0u: goto label_20d5a0;
        case 0x20d5a4u: goto label_20d5a4;
        case 0x20d5a8u: goto label_20d5a8;
        case 0x20d5acu: goto label_20d5ac;
        case 0x20d5b0u: goto label_20d5b0;
        case 0x20d5b4u: goto label_20d5b4;
        case 0x20d5b8u: goto label_20d5b8;
        case 0x20d5bcu: goto label_20d5bc;
        case 0x20d5c0u: goto label_20d5c0;
        case 0x20d5c4u: goto label_20d5c4;
        case 0x20d5c8u: goto label_20d5c8;
        case 0x20d5ccu: goto label_20d5cc;
        case 0x20d5d0u: goto label_20d5d0;
        case 0x20d5d4u: goto label_20d5d4;
        case 0x20d5d8u: goto label_20d5d8;
        case 0x20d5dcu: goto label_20d5dc;
        case 0x20d5e0u: goto label_20d5e0;
        case 0x20d5e4u: goto label_20d5e4;
        case 0x20d5e8u: goto label_20d5e8;
        case 0x20d5ecu: goto label_20d5ec;
        case 0x20d5f0u: goto label_20d5f0;
        case 0x20d5f4u: goto label_20d5f4;
        case 0x20d5f8u: goto label_20d5f8;
        case 0x20d5fcu: goto label_20d5fc;
        case 0x20d600u: goto label_20d600;
        case 0x20d604u: goto label_20d604;
        case 0x20d608u: goto label_20d608;
        case 0x20d60cu: goto label_20d60c;
        case 0x20d610u: goto label_20d610;
        case 0x20d614u: goto label_20d614;
        case 0x20d618u: goto label_20d618;
        case 0x20d61cu: goto label_20d61c;
        case 0x20d620u: goto label_20d620;
        case 0x20d624u: goto label_20d624;
        case 0x20d628u: goto label_20d628;
        case 0x20d62cu: goto label_20d62c;
        case 0x20d630u: goto label_20d630;
        case 0x20d634u: goto label_20d634;
        case 0x20d638u: goto label_20d638;
        case 0x20d63cu: goto label_20d63c;
        case 0x20d640u: goto label_20d640;
        case 0x20d644u: goto label_20d644;
        case 0x20d648u: goto label_20d648;
        case 0x20d64cu: goto label_20d64c;
        case 0x20d650u: goto label_20d650;
        case 0x20d654u: goto label_20d654;
        case 0x20d658u: goto label_20d658;
        case 0x20d65cu: goto label_20d65c;
        case 0x20d660u: goto label_20d660;
        case 0x20d664u: goto label_20d664;
        case 0x20d668u: goto label_20d668;
        case 0x20d66cu: goto label_20d66c;
        case 0x20d670u: goto label_20d670;
        case 0x20d674u: goto label_20d674;
        case 0x20d678u: goto label_20d678;
        case 0x20d67cu: goto label_20d67c;
        case 0x20d680u: goto label_20d680;
        case 0x20d684u: goto label_20d684;
        case 0x20d688u: goto label_20d688;
        case 0x20d68cu: goto label_20d68c;
        case 0x20d690u: goto label_20d690;
        case 0x20d694u: goto label_20d694;
        case 0x20d698u: goto label_20d698;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6a0u: goto label_20d6a0;
        case 0x20d6a4u: goto label_20d6a4;
        case 0x20d6a8u: goto label_20d6a8;
        case 0x20d6acu: goto label_20d6ac;
        case 0x20d6b0u: goto label_20d6b0;
        case 0x20d6b4u: goto label_20d6b4;
        case 0x20d6b8u: goto label_20d6b8;
        case 0x20d6bcu: goto label_20d6bc;
        case 0x20d6c0u: goto label_20d6c0;
        case 0x20d6c4u: goto label_20d6c4;
        case 0x20d6c8u: goto label_20d6c8;
        case 0x20d6ccu: goto label_20d6cc;
        case 0x20d6d0u: goto label_20d6d0;
        case 0x20d6d4u: goto label_20d6d4;
        case 0x20d6d8u: goto label_20d6d8;
        case 0x20d6dcu: goto label_20d6dc;
        case 0x20d6e0u: goto label_20d6e0;
        case 0x20d6e4u: goto label_20d6e4;
        case 0x20d6e8u: goto label_20d6e8;
        case 0x20d6ecu: goto label_20d6ec;
        case 0x20d6f0u: goto label_20d6f0;
        case 0x20d6f4u: goto label_20d6f4;
        case 0x20d6f8u: goto label_20d6f8;
        case 0x20d6fcu: goto label_20d6fc;
        case 0x20d700u: goto label_20d700;
        case 0x20d704u: goto label_20d704;
        case 0x20d708u: goto label_20d708;
        case 0x20d70cu: goto label_20d70c;
        case 0x20d710u: goto label_20d710;
        case 0x20d714u: goto label_20d714;
        case 0x20d718u: goto label_20d718;
        case 0x20d71cu: goto label_20d71c;
        case 0x20d720u: goto label_20d720;
        case 0x20d724u: goto label_20d724;
        case 0x20d728u: goto label_20d728;
        case 0x20d72cu: goto label_20d72c;
        case 0x20d730u: goto label_20d730;
        case 0x20d734u: goto label_20d734;
        case 0x20d738u: goto label_20d738;
        case 0x20d73cu: goto label_20d73c;
        case 0x20d740u: goto label_20d740;
        case 0x20d744u: goto label_20d744;
        case 0x20d748u: goto label_20d748;
        case 0x20d74cu: goto label_20d74c;
        case 0x20d750u: goto label_20d750;
        case 0x20d754u: goto label_20d754;
        case 0x20d758u: goto label_20d758;
        case 0x20d75cu: goto label_20d75c;
        case 0x20d760u: goto label_20d760;
        case 0x20d764u: goto label_20d764;
        case 0x20d768u: goto label_20d768;
        case 0x20d76cu: goto label_20d76c;
        case 0x20d770u: goto label_20d770;
        case 0x20d774u: goto label_20d774;
        case 0x20d778u: goto label_20d778;
        case 0x20d77cu: goto label_20d77c;
        case 0x20d780u: goto label_20d780;
        case 0x20d784u: goto label_20d784;
        case 0x20d788u: goto label_20d788;
        case 0x20d78cu: goto label_20d78c;
        case 0x20d790u: goto label_20d790;
        case 0x20d794u: goto label_20d794;
        case 0x20d798u: goto label_20d798;
        case 0x20d79cu: goto label_20d79c;
        case 0x20d7a0u: goto label_20d7a0;
        case 0x20d7a4u: goto label_20d7a4;
        case 0x20d7a8u: goto label_20d7a8;
        case 0x20d7acu: goto label_20d7ac;
        case 0x20d7b0u: goto label_20d7b0;
        case 0x20d7b4u: goto label_20d7b4;
        case 0x20d7b8u: goto label_20d7b8;
        case 0x20d7bcu: goto label_20d7bc;
        case 0x20d7c0u: goto label_20d7c0;
        case 0x20d7c4u: goto label_20d7c4;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7ccu: goto label_20d7cc;
        case 0x20d7d0u: goto label_20d7d0;
        case 0x20d7d4u: goto label_20d7d4;
        case 0x20d7d8u: goto label_20d7d8;
        case 0x20d7dcu: goto label_20d7dc;
        case 0x20d7e0u: goto label_20d7e0;
        case 0x20d7e4u: goto label_20d7e4;
        case 0x20d7e8u: goto label_20d7e8;
        case 0x20d7ecu: goto label_20d7ec;
        case 0x20d7f0u: goto label_20d7f0;
        case 0x20d7f4u: goto label_20d7f4;
        case 0x20d7f8u: goto label_20d7f8;
        case 0x20d7fcu: goto label_20d7fc;
        case 0x20d800u: goto label_20d800;
        case 0x20d804u: goto label_20d804;
        case 0x20d808u: goto label_20d808;
        case 0x20d80cu: goto label_20d80c;
        case 0x20d810u: goto label_20d810;
        case 0x20d814u: goto label_20d814;
        case 0x20d818u: goto label_20d818;
        case 0x20d81cu: goto label_20d81c;
        case 0x20d820u: goto label_20d820;
        case 0x20d824u: goto label_20d824;
        case 0x20d828u: goto label_20d828;
        case 0x20d82cu: goto label_20d82c;
        case 0x20d830u: goto label_20d830;
        case 0x20d834u: goto label_20d834;
        case 0x20d838u: goto label_20d838;
        case 0x20d83cu: goto label_20d83c;
        case 0x20d840u: goto label_20d840;
        case 0x20d844u: goto label_20d844;
        case 0x20d848u: goto label_20d848;
        case 0x20d84cu: goto label_20d84c;
        case 0x20d850u: goto label_20d850;
        case 0x20d854u: goto label_20d854;
        case 0x20d858u: goto label_20d858;
        case 0x20d85cu: goto label_20d85c;
        case 0x20d860u: goto label_20d860;
        case 0x20d864u: goto label_20d864;
        case 0x20d868u: goto label_20d868;
        case 0x20d86cu: goto label_20d86c;
        case 0x20d870u: goto label_20d870;
        case 0x20d874u: goto label_20d874;
        case 0x20d878u: goto label_20d878;
        case 0x20d87cu: goto label_20d87c;
        case 0x20d880u: goto label_20d880;
        case 0x20d884u: goto label_20d884;
        case 0x20d888u: goto label_20d888;
        case 0x20d88cu: goto label_20d88c;
        case 0x20d890u: goto label_20d890;
        case 0x20d894u: goto label_20d894;
        case 0x20d898u: goto label_20d898;
        case 0x20d89cu: goto label_20d89c;
        case 0x20d8a0u: goto label_20d8a0;
        case 0x20d8a4u: goto label_20d8a4;
        case 0x20d8a8u: goto label_20d8a8;
        case 0x20d8acu: goto label_20d8ac;
        case 0x20d8b0u: goto label_20d8b0;
        case 0x20d8b4u: goto label_20d8b4;
        case 0x20d8b8u: goto label_20d8b8;
        case 0x20d8bcu: goto label_20d8bc;
        case 0x20d8c0u: goto label_20d8c0;
        case 0x20d8c4u: goto label_20d8c4;
        case 0x20d8c8u: goto label_20d8c8;
        case 0x20d8ccu: goto label_20d8cc;
        case 0x20d8d0u: goto label_20d8d0;
        case 0x20d8d4u: goto label_20d8d4;
        case 0x20d8d8u: goto label_20d8d8;
        case 0x20d8dcu: goto label_20d8dc;
        case 0x20d8e0u: goto label_20d8e0;
        case 0x20d8e4u: goto label_20d8e4;
        case 0x20d8e8u: goto label_20d8e8;
        case 0x20d8ecu: goto label_20d8ec;
        case 0x20d8f0u: goto label_20d8f0;
        case 0x20d8f4u: goto label_20d8f4;
        case 0x20d8f8u: goto label_20d8f8;
        case 0x20d8fcu: goto label_20d8fc;
        case 0x20d900u: goto label_20d900;
        case 0x20d904u: goto label_20d904;
        case 0x20d908u: goto label_20d908;
        case 0x20d90cu: goto label_20d90c;
        case 0x20d910u: goto label_20d910;
        case 0x20d914u: goto label_20d914;
        case 0x20d918u: goto label_20d918;
        case 0x20d91cu: goto label_20d91c;
        case 0x20d920u: goto label_20d920;
        case 0x20d924u: goto label_20d924;
        case 0x20d928u: goto label_20d928;
        case 0x20d92cu: goto label_20d92c;
        case 0x20d930u: goto label_20d930;
        case 0x20d934u: goto label_20d934;
        case 0x20d938u: goto label_20d938;
        case 0x20d93cu: goto label_20d93c;
        case 0x20d940u: goto label_20d940;
        case 0x20d944u: goto label_20d944;
        case 0x20d948u: goto label_20d948;
        case 0x20d94cu: goto label_20d94c;
        case 0x20d950u: goto label_20d950;
        case 0x20d954u: goto label_20d954;
        case 0x20d958u: goto label_20d958;
        case 0x20d95cu: goto label_20d95c;
        case 0x20d960u: goto label_20d960;
        case 0x20d964u: goto label_20d964;
        case 0x20d968u: goto label_20d968;
        case 0x20d96cu: goto label_20d96c;
        case 0x20d970u: goto label_20d970;
        case 0x20d974u: goto label_20d974;
        case 0x20d978u: goto label_20d978;
        case 0x20d97cu: goto label_20d97c;
        case 0x20d980u: goto label_20d980;
        case 0x20d984u: goto label_20d984;
        case 0x20d988u: goto label_20d988;
        case 0x20d98cu: goto label_20d98c;
        case 0x20d990u: goto label_20d990;
        case 0x20d994u: goto label_20d994;
        case 0x20d998u: goto label_20d998;
        case 0x20d99cu: goto label_20d99c;
        case 0x20d9a0u: goto label_20d9a0;
        case 0x20d9a4u: goto label_20d9a4;
        case 0x20d9a8u: goto label_20d9a8;
        case 0x20d9acu: goto label_20d9ac;
        case 0x20d9b0u: goto label_20d9b0;
        case 0x20d9b4u: goto label_20d9b4;
        case 0x20d9b8u: goto label_20d9b8;
        case 0x20d9bcu: goto label_20d9bc;
        case 0x20d9c0u: goto label_20d9c0;
        case 0x20d9c4u: goto label_20d9c4;
        case 0x20d9c8u: goto label_20d9c8;
        case 0x20d9ccu: goto label_20d9cc;
        case 0x20d9d0u: goto label_20d9d0;
        case 0x20d9d4u: goto label_20d9d4;
        case 0x20d9d8u: goto label_20d9d8;
        case 0x20d9dcu: goto label_20d9dc;
        case 0x20d9e0u: goto label_20d9e0;
        case 0x20d9e4u: goto label_20d9e4;
        case 0x20d9e8u: goto label_20d9e8;
        case 0x20d9ecu: goto label_20d9ec;
        case 0x20d9f0u: goto label_20d9f0;
        case 0x20d9f4u: goto label_20d9f4;
        case 0x20d9f8u: goto label_20d9f8;
        case 0x20d9fcu: goto label_20d9fc;
        case 0x20da00u: goto label_20da00;
        case 0x20da04u: goto label_20da04;
        case 0x20da08u: goto label_20da08;
        case 0x20da0cu: goto label_20da0c;
        case 0x20da10u: goto label_20da10;
        case 0x20da14u: goto label_20da14;
        case 0x20da18u: goto label_20da18;
        case 0x20da1cu: goto label_20da1c;
        case 0x20da20u: goto label_20da20;
        case 0x20da24u: goto label_20da24;
        case 0x20da28u: goto label_20da28;
        case 0x20da2cu: goto label_20da2c;
        case 0x20da30u: goto label_20da30;
        case 0x20da34u: goto label_20da34;
        case 0x20da38u: goto label_20da38;
        case 0x20da3cu: goto label_20da3c;
        case 0x20da40u: goto label_20da40;
        case 0x20da44u: goto label_20da44;
        case 0x20da48u: goto label_20da48;
        case 0x20da4cu: goto label_20da4c;
        case 0x20da50u: goto label_20da50;
        case 0x20da54u: goto label_20da54;
        case 0x20da58u: goto label_20da58;
        case 0x20da5cu: goto label_20da5c;
        case 0x20da60u: goto label_20da60;
        case 0x20da64u: goto label_20da64;
        case 0x20da68u: goto label_20da68;
        case 0x20da6cu: goto label_20da6c;
        case 0x20da70u: goto label_20da70;
        case 0x20da74u: goto label_20da74;
        case 0x20da78u: goto label_20da78;
        case 0x20da7cu: goto label_20da7c;
        case 0x20da80u: goto label_20da80;
        case 0x20da84u: goto label_20da84;
        case 0x20da88u: goto label_20da88;
        case 0x20da8cu: goto label_20da8c;
        case 0x20da90u: goto label_20da90;
        case 0x20da94u: goto label_20da94;
        case 0x20da98u: goto label_20da98;
        case 0x20da9cu: goto label_20da9c;
        case 0x20daa0u: goto label_20daa0;
        case 0x20daa4u: goto label_20daa4;
        case 0x20daa8u: goto label_20daa8;
        case 0x20daacu: goto label_20daac;
        case 0x20dab0u: goto label_20dab0;
        case 0x20dab4u: goto label_20dab4;
        case 0x20dab8u: goto label_20dab8;
        case 0x20dabcu: goto label_20dabc;
        case 0x20dac0u: goto label_20dac0;
        case 0x20dac4u: goto label_20dac4;
        case 0x20dac8u: goto label_20dac8;
        case 0x20daccu: goto label_20dacc;
        case 0x20dad0u: goto label_20dad0;
        case 0x20dad4u: goto label_20dad4;
        case 0x20dad8u: goto label_20dad8;
        case 0x20dadcu: goto label_20dadc;
        case 0x20dae0u: goto label_20dae0;
        case 0x20dae4u: goto label_20dae4;
        case 0x20dae8u: goto label_20dae8;
        case 0x20daecu: goto label_20daec;
        case 0x20daf0u: goto label_20daf0;
        case 0x20daf4u: goto label_20daf4;
        case 0x20daf8u: goto label_20daf8;
        case 0x20dafcu: goto label_20dafc;
        case 0x20db00u: goto label_20db00;
        case 0x20db04u: goto label_20db04;
        case 0x20db08u: goto label_20db08;
        case 0x20db0cu: goto label_20db0c;
        case 0x20db10u: goto label_20db10;
        case 0x20db14u: goto label_20db14;
        case 0x20db18u: goto label_20db18;
        case 0x20db1cu: goto label_20db1c;
        case 0x20db20u: goto label_20db20;
        case 0x20db24u: goto label_20db24;
        case 0x20db28u: goto label_20db28;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db30u: goto label_20db30;
        case 0x20db34u: goto label_20db34;
        case 0x20db38u: goto label_20db38;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db40u: goto label_20db40;
        case 0x20db44u: goto label_20db44;
        case 0x20db48u: goto label_20db48;
        case 0x20db4cu: goto label_20db4c;
        case 0x20db50u: goto label_20db50;
        case 0x20db54u: goto label_20db54;
        case 0x20db58u: goto label_20db58;
        case 0x20db5cu: goto label_20db5c;
        case 0x20db60u: goto label_20db60;
        case 0x20db64u: goto label_20db64;
        case 0x20db68u: goto label_20db68;
        case 0x20db6cu: goto label_20db6c;
        case 0x20db70u: goto label_20db70;
        case 0x20db74u: goto label_20db74;
        case 0x20db78u: goto label_20db78;
        case 0x20db7cu: goto label_20db7c;
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        case 0x20db90u: goto label_20db90;
        case 0x20db94u: goto label_20db94;
        case 0x20db98u: goto label_20db98;
        case 0x20db9cu: goto label_20db9c;
        case 0x20dba0u: goto label_20dba0;
        case 0x20dba4u: goto label_20dba4;
        case 0x20dba8u: goto label_20dba8;
        case 0x20dbacu: goto label_20dbac;
        case 0x20dbb0u: goto label_20dbb0;
        case 0x20dbb4u: goto label_20dbb4;
        case 0x20dbb8u: goto label_20dbb8;
        case 0x20dbbcu: goto label_20dbbc;
        case 0x20dbc0u: goto label_20dbc0;
        case 0x20dbc4u: goto label_20dbc4;
        case 0x20dbc8u: goto label_20dbc8;
        case 0x20dbccu: goto label_20dbcc;
        case 0x20dbd0u: goto label_20dbd0;
        case 0x20dbd4u: goto label_20dbd4;
        case 0x20dbd8u: goto label_20dbd8;
        case 0x20dbdcu: goto label_20dbdc;
        case 0x20dbe0u: goto label_20dbe0;
        case 0x20dbe4u: goto label_20dbe4;
        case 0x20dbe8u: goto label_20dbe8;
        case 0x20dbecu: goto label_20dbec;
        case 0x20dbf0u: goto label_20dbf0;
        case 0x20dbf4u: goto label_20dbf4;
        case 0x20dbf8u: goto label_20dbf8;
        case 0x20dbfcu: goto label_20dbfc;
        case 0x20dc00u: goto label_20dc00;
        case 0x20dc04u: goto label_20dc04;
        case 0x20dc08u: goto label_20dc08;
        case 0x20dc0cu: goto label_20dc0c;
        case 0x20dc10u: goto label_20dc10;
        case 0x20dc14u: goto label_20dc14;
        case 0x20dc18u: goto label_20dc18;
        case 0x20dc1cu: goto label_20dc1c;
        case 0x20dc20u: goto label_20dc20;
        case 0x20dc24u: goto label_20dc24;
        case 0x20dc28u: goto label_20dc28;
        case 0x20dc2cu: goto label_20dc2c;
        case 0x20dc30u: goto label_20dc30;
        case 0x20dc34u: goto label_20dc34;
        case 0x20dc38u: goto label_20dc38;
        case 0x20dc3cu: goto label_20dc3c;
        case 0x20dc40u: goto label_20dc40;
        case 0x20dc44u: goto label_20dc44;
        case 0x20dc48u: goto label_20dc48;
        case 0x20dc4cu: goto label_20dc4c;
        case 0x20dc50u: goto label_20dc50;
        case 0x20dc54u: goto label_20dc54;
        case 0x20dc58u: goto label_20dc58;
        case 0x20dc5cu: goto label_20dc5c;
        case 0x20dc60u: goto label_20dc60;
        case 0x20dc64u: goto label_20dc64;
        case 0x20dc68u: goto label_20dc68;
        case 0x20dc6cu: goto label_20dc6c;
        case 0x20dc70u: goto label_20dc70;
        case 0x20dc74u: goto label_20dc74;
        case 0x20dc78u: goto label_20dc78;
        case 0x20dc7cu: goto label_20dc7c;
        case 0x20dc80u: goto label_20dc80;
        case 0x20dc84u: goto label_20dc84;
        case 0x20dc88u: goto label_20dc88;
        case 0x20dc8cu: goto label_20dc8c;
        case 0x20dc90u: goto label_20dc90;
        case 0x20dc94u: goto label_20dc94;
        case 0x20dc98u: goto label_20dc98;
        case 0x20dc9cu: goto label_20dc9c;
        case 0x20dca0u: goto label_20dca0;
        case 0x20dca4u: goto label_20dca4;
        case 0x20dca8u: goto label_20dca8;
        case 0x20dcacu: goto label_20dcac;
        case 0x20dcb0u: goto label_20dcb0;
        case 0x20dcb4u: goto label_20dcb4;
        case 0x20dcb8u: goto label_20dcb8;
        case 0x20dcbcu: goto label_20dcbc;
        case 0x20dcc0u: goto label_20dcc0;
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcc8u: goto label_20dcc8;
        case 0x20dcccu: goto label_20dccc;
        case 0x20dcd0u: goto label_20dcd0;
        case 0x20dcd4u: goto label_20dcd4;
        case 0x20dcd8u: goto label_20dcd8;
        case 0x20dcdcu: goto label_20dcdc;
        case 0x20dce0u: goto label_20dce0;
        case 0x20dce4u: goto label_20dce4;
        case 0x20dce8u: goto label_20dce8;
        case 0x20dcecu: goto label_20dcec;
        case 0x20dcf0u: goto label_20dcf0;
        case 0x20dcf4u: goto label_20dcf4;
        case 0x20dcf8u: goto label_20dcf8;
        case 0x20dcfcu: goto label_20dcfc;
        case 0x20dd00u: goto label_20dd00;
        case 0x20dd04u: goto label_20dd04;
        case 0x20dd08u: goto label_20dd08;
        case 0x20dd0cu: goto label_20dd0c;
        case 0x20dd10u: goto label_20dd10;
        case 0x20dd14u: goto label_20dd14;
        case 0x20dd18u: goto label_20dd18;
        case 0x20dd1cu: goto label_20dd1c;
        case 0x20dd20u: goto label_20dd20;
        case 0x20dd24u: goto label_20dd24;
        case 0x20dd28u: goto label_20dd28;
        case 0x20dd2cu: goto label_20dd2c;
        case 0x20dd30u: goto label_20dd30;
        case 0x20dd34u: goto label_20dd34;
        case 0x20dd38u: goto label_20dd38;
        case 0x20dd3cu: goto label_20dd3c;
        case 0x20dd40u: goto label_20dd40;
        case 0x20dd44u: goto label_20dd44;
        case 0x20dd48u: goto label_20dd48;
        case 0x20dd4cu: goto label_20dd4c;
        case 0x20dd50u: goto label_20dd50;
        case 0x20dd54u: goto label_20dd54;
        case 0x20dd58u: goto label_20dd58;
        case 0x20dd5cu: goto label_20dd5c;
        case 0x20dd60u: goto label_20dd60;
        case 0x20dd64u: goto label_20dd64;
        case 0x20dd68u: goto label_20dd68;
        case 0x20dd6cu: goto label_20dd6c;
        case 0x20dd70u: goto label_20dd70;
        case 0x20dd74u: goto label_20dd74;
        case 0x20dd78u: goto label_20dd78;
        case 0x20dd7cu: goto label_20dd7c;
        case 0x20dd80u: goto label_20dd80;
        case 0x20dd84u: goto label_20dd84;
        case 0x20dd88u: goto label_20dd88;
        case 0x20dd8cu: goto label_20dd8c;
        case 0x20dd90u: goto label_20dd90;
        case 0x20dd94u: goto label_20dd94;
        case 0x20dd98u: goto label_20dd98;
        case 0x20dd9cu: goto label_20dd9c;
        case 0x20dda0u: goto label_20dda0;
        case 0x20dda4u: goto label_20dda4;
        case 0x20dda8u: goto label_20dda8;
        case 0x20ddacu: goto label_20ddac;
        case 0x20ddb0u: goto label_20ddb0;
        case 0x20ddb4u: goto label_20ddb4;
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20ddc0u: goto label_20ddc0;
        case 0x20ddc4u: goto label_20ddc4;
        case 0x20ddc8u: goto label_20ddc8;
        case 0x20ddccu: goto label_20ddcc;
        case 0x20ddd0u: goto label_20ddd0;
        case 0x20ddd4u: goto label_20ddd4;
        case 0x20ddd8u: goto label_20ddd8;
        case 0x20dddcu: goto label_20dddc;
        case 0x20dde0u: goto label_20dde0;
        case 0x20dde4u: goto label_20dde4;
        case 0x20dde8u: goto label_20dde8;
        case 0x20ddecu: goto label_20ddec;
        case 0x20ddf0u: goto label_20ddf0;
        case 0x20ddf4u: goto label_20ddf4;
        case 0x20ddf8u: goto label_20ddf8;
        case 0x20ddfcu: goto label_20ddfc;
        case 0x20de00u: goto label_20de00;
        case 0x20de04u: goto label_20de04;
        case 0x20de08u: goto label_20de08;
        case 0x20de0cu: goto label_20de0c;
        case 0x20de10u: goto label_20de10;
        case 0x20de14u: goto label_20de14;
        case 0x20de18u: goto label_20de18;
        case 0x20de1cu: goto label_20de1c;
        case 0x20de20u: goto label_20de20;
        case 0x20de24u: goto label_20de24;
        case 0x20de28u: goto label_20de28;
        case 0x20de2cu: goto label_20de2c;
        case 0x20de30u: goto label_20de30;
        case 0x20de34u: goto label_20de34;
        case 0x20de38u: goto label_20de38;
        case 0x20de3cu: goto label_20de3c;
        case 0x20de40u: goto label_20de40;
        case 0x20de44u: goto label_20de44;
        case 0x20de48u: goto label_20de48;
        case 0x20de4cu: goto label_20de4c;
        case 0x20de50u: goto label_20de50;
        case 0x20de54u: goto label_20de54;
        case 0x20de58u: goto label_20de58;
        case 0x20de5cu: goto label_20de5c;
        case 0x20de60u: goto label_20de60;
        case 0x20de64u: goto label_20de64;
        case 0x20de68u: goto label_20de68;
        case 0x20de6cu: goto label_20de6c;
        case 0x20de70u: goto label_20de70;
        case 0x20de74u: goto label_20de74;
        case 0x20de78u: goto label_20de78;
        case 0x20de7cu: goto label_20de7c;
        case 0x20de80u: goto label_20de80;
        case 0x20de84u: goto label_20de84;
        case 0x20de88u: goto label_20de88;
        case 0x20de8cu: goto label_20de8c;
        case 0x20de90u: goto label_20de90;
        case 0x20de94u: goto label_20de94;
        case 0x20de98u: goto label_20de98;
        case 0x20de9cu: goto label_20de9c;
        case 0x20dea0u: goto label_20dea0;
        case 0x20dea4u: goto label_20dea4;
        case 0x20dea8u: goto label_20dea8;
        case 0x20deacu: goto label_20deac;
        case 0x20deb0u: goto label_20deb0;
        case 0x20deb4u: goto label_20deb4;
        case 0x20deb8u: goto label_20deb8;
        case 0x20debcu: goto label_20debc;
        case 0x20dec0u: goto label_20dec0;
        case 0x20dec4u: goto label_20dec4;
        case 0x20dec8u: goto label_20dec8;
        case 0x20deccu: goto label_20decc;
        case 0x20ded0u: goto label_20ded0;
        case 0x20ded4u: goto label_20ded4;
        case 0x20ded8u: goto label_20ded8;
        case 0x20dedcu: goto label_20dedc;
        case 0x20dee0u: goto label_20dee0;
        case 0x20dee4u: goto label_20dee4;
        case 0x20dee8u: goto label_20dee8;
        case 0x20deecu: goto label_20deec;
        case 0x20def0u: goto label_20def0;
        case 0x20def4u: goto label_20def4;
        case 0x20def8u: goto label_20def8;
        case 0x20defcu: goto label_20defc;
        case 0x20df00u: goto label_20df00;
        case 0x20df04u: goto label_20df04;
        case 0x20df08u: goto label_20df08;
        case 0x20df0cu: goto label_20df0c;
        case 0x20df10u: goto label_20df10;
        case 0x20df14u: goto label_20df14;
        case 0x20df18u: goto label_20df18;
        case 0x20df1cu: goto label_20df1c;
        case 0x20df20u: goto label_20df20;
        case 0x20df24u: goto label_20df24;
        case 0x20df28u: goto label_20df28;
        case 0x20df2cu: goto label_20df2c;
        case 0x20df30u: goto label_20df30;
        case 0x20df34u: goto label_20df34;
        case 0x20df38u: goto label_20df38;
        case 0x20df3cu: goto label_20df3c;
        case 0x20df40u: goto label_20df40;
        case 0x20df44u: goto label_20df44;
        case 0x20df48u: goto label_20df48;
        case 0x20df4cu: goto label_20df4c;
        case 0x20df50u: goto label_20df50;
        case 0x20df54u: goto label_20df54;
        case 0x20df58u: goto label_20df58;
        case 0x20df5cu: goto label_20df5c;
        case 0x20df60u: goto label_20df60;
        case 0x20df64u: goto label_20df64;
        case 0x20df68u: goto label_20df68;
        case 0x20df6cu: goto label_20df6c;
        case 0x20df70u: goto label_20df70;
        case 0x20df74u: goto label_20df74;
        case 0x20df78u: goto label_20df78;
        case 0x20df7cu: goto label_20df7c;
        case 0x20df80u: goto label_20df80;
        case 0x20df84u: goto label_20df84;
        case 0x20df88u: goto label_20df88;
        case 0x20df8cu: goto label_20df8c;
        case 0x20df90u: goto label_20df90;
        case 0x20df94u: goto label_20df94;
        case 0x20df98u: goto label_20df98;
        case 0x20df9cu: goto label_20df9c;
        case 0x20dfa0u: goto label_20dfa0;
        case 0x20dfa4u: goto label_20dfa4;
        case 0x20dfa8u: goto label_20dfa8;
        case 0x20dfacu: goto label_20dfac;
        case 0x20dfb0u: goto label_20dfb0;
        case 0x20dfb4u: goto label_20dfb4;
        case 0x20dfb8u: goto label_20dfb8;
        case 0x20dfbcu: goto label_20dfbc;
        case 0x20dfc0u: goto label_20dfc0;
        case 0x20dfc4u: goto label_20dfc4;
        case 0x20dfc8u: goto label_20dfc8;
        case 0x20dfccu: goto label_20dfcc;
        case 0x20dfd0u: goto label_20dfd0;
        case 0x20dfd4u: goto label_20dfd4;
        case 0x20dfd8u: goto label_20dfd8;
        case 0x20dfdcu: goto label_20dfdc;
        case 0x20dfe0u: goto label_20dfe0;
        case 0x20dfe4u: goto label_20dfe4;
        case 0x20dfe8u: goto label_20dfe8;
        case 0x20dfecu: goto label_20dfec;
        case 0x20dff0u: goto label_20dff0;
        case 0x20dff4u: goto label_20dff4;
        case 0x20dff8u: goto label_20dff8;
        case 0x20dffcu: goto label_20dffc;
        case 0x20e000u: goto label_20e000;
        case 0x20e004u: goto label_20e004;
        case 0x20e008u: goto label_20e008;
        case 0x20e00cu: goto label_20e00c;
        case 0x20e010u: goto label_20e010;
        case 0x20e014u: goto label_20e014;
        case 0x20e018u: goto label_20e018;
        case 0x20e01cu: goto label_20e01c;
        case 0x20e020u: goto label_20e020;
        case 0x20e024u: goto label_20e024;
        case 0x20e028u: goto label_20e028;
        case 0x20e02cu: goto label_20e02c;
        case 0x20e030u: goto label_20e030;
        case 0x20e034u: goto label_20e034;
        case 0x20e038u: goto label_20e038;
        case 0x20e03cu: goto label_20e03c;
        case 0x20e040u: goto label_20e040;
        case 0x20e044u: goto label_20e044;
        case 0x20e048u: goto label_20e048;
        case 0x20e04cu: goto label_20e04c;
        case 0x20e050u: goto label_20e050;
        case 0x20e054u: goto label_20e054;
        case 0x20e058u: goto label_20e058;
        case 0x20e05cu: goto label_20e05c;
        case 0x20e060u: goto label_20e060;
        case 0x20e064u: goto label_20e064;
        case 0x20e068u: goto label_20e068;
        case 0x20e06cu: goto label_20e06c;
        case 0x20e070u: goto label_20e070;
        case 0x20e074u: goto label_20e074;
        case 0x20e078u: goto label_20e078;
        case 0x20e07cu: goto label_20e07c;
        case 0x20e080u: goto label_20e080;
        case 0x20e084u: goto label_20e084;
        case 0x20e088u: goto label_20e088;
        case 0x20e08cu: goto label_20e08c;
        case 0x20e090u: goto label_20e090;
        case 0x20e094u: goto label_20e094;
        case 0x20e098u: goto label_20e098;
        case 0x20e09cu: goto label_20e09c;
        case 0x20e0a0u: goto label_20e0a0;
        case 0x20e0a4u: goto label_20e0a4;
        case 0x20e0a8u: goto label_20e0a8;
        case 0x20e0acu: goto label_20e0ac;
        case 0x20e0b0u: goto label_20e0b0;
        case 0x20e0b4u: goto label_20e0b4;
        case 0x20e0b8u: goto label_20e0b8;
        case 0x20e0bcu: goto label_20e0bc;
        case 0x20e0c0u: goto label_20e0c0;
        case 0x20e0c4u: goto label_20e0c4;
        case 0x20e0c8u: goto label_20e0c8;
        case 0x20e0ccu: goto label_20e0cc;
        case 0x20e0d0u: goto label_20e0d0;
        case 0x20e0d4u: goto label_20e0d4;
        case 0x20e0d8u: goto label_20e0d8;
        case 0x20e0dcu: goto label_20e0dc;
        case 0x20e0e0u: goto label_20e0e0;
        case 0x20e0e4u: goto label_20e0e4;
        case 0x20e0e8u: goto label_20e0e8;
        case 0x20e0ecu: goto label_20e0ec;
        case 0x20e0f0u: goto label_20e0f0;
        case 0x20e0f4u: goto label_20e0f4;
        case 0x20e0f8u: goto label_20e0f8;
        case 0x20e0fcu: goto label_20e0fc;
        case 0x20e100u: goto label_20e100;
        case 0x20e104u: goto label_20e104;
        case 0x20e108u: goto label_20e108;
        case 0x20e10cu: goto label_20e10c;
        case 0x20e110u: goto label_20e110;
        case 0x20e114u: goto label_20e114;
        case 0x20e118u: goto label_20e118;
        case 0x20e11cu: goto label_20e11c;
        case 0x20e120u: goto label_20e120;
        case 0x20e124u: goto label_20e124;
        case 0x20e128u: goto label_20e128;
        case 0x20e12cu: goto label_20e12c;
        case 0x20e130u: goto label_20e130;
        case 0x20e134u: goto label_20e134;
        case 0x20e138u: goto label_20e138;
        case 0x20e13cu: goto label_20e13c;
        case 0x20e140u: goto label_20e140;
        case 0x20e144u: goto label_20e144;
        case 0x20e148u: goto label_20e148;
        case 0x20e14cu: goto label_20e14c;
        case 0x20e150u: goto label_20e150;
        case 0x20e154u: goto label_20e154;
        case 0x20e158u: goto label_20e158;
        case 0x20e15cu: goto label_20e15c;
        case 0x20e160u: goto label_20e160;
        case 0x20e164u: goto label_20e164;
        case 0x20e168u: goto label_20e168;
        case 0x20e16cu: goto label_20e16c;
        case 0x20e170u: goto label_20e170;
        case 0x20e174u: goto label_20e174;
        case 0x20e178u: goto label_20e178;
        case 0x20e17cu: goto label_20e17c;
        case 0x20e180u: goto label_20e180;
        case 0x20e184u: goto label_20e184;
        case 0x20e188u: goto label_20e188;
        case 0x20e18cu: goto label_20e18c;
        case 0x20e190u: goto label_20e190;
        case 0x20e194u: goto label_20e194;
        case 0x20e198u: goto label_20e198;
        case 0x20e19cu: goto label_20e19c;
        case 0x20e1a0u: goto label_20e1a0;
        case 0x20e1a4u: goto label_20e1a4;
        case 0x20e1a8u: goto label_20e1a8;
        case 0x20e1acu: goto label_20e1ac;
        case 0x20e1b0u: goto label_20e1b0;
        case 0x20e1b4u: goto label_20e1b4;
        case 0x20e1b8u: goto label_20e1b8;
        case 0x20e1bcu: goto label_20e1bc;
        case 0x20e1c0u: goto label_20e1c0;
        case 0x20e1c4u: goto label_20e1c4;
        case 0x20e1c8u: goto label_20e1c8;
        case 0x20e1ccu: goto label_20e1cc;
        case 0x20e1d0u: goto label_20e1d0;
        case 0x20e1d4u: goto label_20e1d4;
        case 0x20e1d8u: goto label_20e1d8;
        case 0x20e1dcu: goto label_20e1dc;
        case 0x20e1e0u: goto label_20e1e0;
        case 0x20e1e4u: goto label_20e1e4;
        case 0x20e1e8u: goto label_20e1e8;
        case 0x20e1ecu: goto label_20e1ec;
        case 0x20e1f0u: goto label_20e1f0;
        case 0x20e1f4u: goto label_20e1f4;
        case 0x20e1f8u: goto label_20e1f8;
        case 0x20e1fcu: goto label_20e1fc;
        case 0x20e200u: goto label_20e200;
        case 0x20e204u: goto label_20e204;
        case 0x20e208u: goto label_20e208;
        case 0x20e20cu: goto label_20e20c;
        case 0x20e210u: goto label_20e210;
        case 0x20e214u: goto label_20e214;
        case 0x20e218u: goto label_20e218;
        case 0x20e21cu: goto label_20e21c;
        case 0x20e220u: goto label_20e220;
        case 0x20e224u: goto label_20e224;
        case 0x20e228u: goto label_20e228;
        case 0x20e22cu: goto label_20e22c;
        case 0x20e230u: goto label_20e230;
        case 0x20e234u: goto label_20e234;
        case 0x20e238u: goto label_20e238;
        case 0x20e23cu: goto label_20e23c;
        case 0x20e240u: goto label_20e240;
        case 0x20e244u: goto label_20e244;
        case 0x20e248u: goto label_20e248;
        case 0x20e24cu: goto label_20e24c;
        case 0x20e250u: goto label_20e250;
        case 0x20e254u: goto label_20e254;
        case 0x20e258u: goto label_20e258;
        case 0x20e25cu: goto label_20e25c;
        case 0x20e260u: goto label_20e260;
        case 0x20e264u: goto label_20e264;
        case 0x20e268u: goto label_20e268;
        case 0x20e26cu: goto label_20e26c;
        case 0x20e270u: goto label_20e270;
        case 0x20e274u: goto label_20e274;
        case 0x20e278u: goto label_20e278;
        case 0x20e27cu: goto label_20e27c;
        case 0x20e280u: goto label_20e280;
        case 0x20e284u: goto label_20e284;
        case 0x20e288u: goto label_20e288;
        case 0x20e28cu: goto label_20e28c;
        case 0x20e290u: goto label_20e290;
        case 0x20e294u: goto label_20e294;
        case 0x20e298u: goto label_20e298;
        case 0x20e29cu: goto label_20e29c;
        case 0x20e2a0u: goto label_20e2a0;
        case 0x20e2a4u: goto label_20e2a4;
        case 0x20e2a8u: goto label_20e2a8;
        case 0x20e2acu: goto label_20e2ac;
        case 0x20e2b0u: goto label_20e2b0;
        case 0x20e2b4u: goto label_20e2b4;
        case 0x20e2b8u: goto label_20e2b8;
        case 0x20e2bcu: goto label_20e2bc;
        case 0x20e2c0u: goto label_20e2c0;
        case 0x20e2c4u: goto label_20e2c4;
        case 0x20e2c8u: goto label_20e2c8;
        case 0x20e2ccu: goto label_20e2cc;
        case 0x20e2d0u: goto label_20e2d0;
        case 0x20e2d4u: goto label_20e2d4;
        case 0x20e2d8u: goto label_20e2d8;
        case 0x20e2dcu: goto label_20e2dc;
        case 0x20e2e0u: goto label_20e2e0;
        case 0x20e2e4u: goto label_20e2e4;
        case 0x20e2e8u: goto label_20e2e8;
        case 0x20e2ecu: goto label_20e2ec;
        case 0x20e2f0u: goto label_20e2f0;
        case 0x20e2f4u: goto label_20e2f4;
        case 0x20e2f8u: goto label_20e2f8;
        case 0x20e2fcu: goto label_20e2fc;
        case 0x20e300u: goto label_20e300;
        case 0x20e304u: goto label_20e304;
        case 0x20e308u: goto label_20e308;
        case 0x20e30cu: goto label_20e30c;
        case 0x20e310u: goto label_20e310;
        case 0x20e314u: goto label_20e314;
        case 0x20e318u: goto label_20e318;
        case 0x20e31cu: goto label_20e31c;
        case 0x20e320u: goto label_20e320;
        case 0x20e324u: goto label_20e324;
        case 0x20e328u: goto label_20e328;
        case 0x20e32cu: goto label_20e32c;
        case 0x20e330u: goto label_20e330;
        case 0x20e334u: goto label_20e334;
        case 0x20e338u: goto label_20e338;
        case 0x20e33cu: goto label_20e33c;
        case 0x20e340u: goto label_20e340;
        case 0x20e344u: goto label_20e344;
        case 0x20e348u: goto label_20e348;
        case 0x20e34cu: goto label_20e34c;
        case 0x20e350u: goto label_20e350;
        case 0x20e354u: goto label_20e354;
        case 0x20e358u: goto label_20e358;
        case 0x20e35cu: goto label_20e35c;
        case 0x20e360u: goto label_20e360;
        case 0x20e364u: goto label_20e364;
        case 0x20e368u: goto label_20e368;
        case 0x20e36cu: goto label_20e36c;
        case 0x20e370u: goto label_20e370;
        case 0x20e374u: goto label_20e374;
        case 0x20e378u: goto label_20e378;
        case 0x20e37cu: goto label_20e37c;
        case 0x20e380u: goto label_20e380;
        case 0x20e384u: goto label_20e384;
        case 0x20e388u: goto label_20e388;
        case 0x20e38cu: goto label_20e38c;
        case 0x20e390u: goto label_20e390;
        case 0x20e394u: goto label_20e394;
        case 0x20e398u: goto label_20e398;
        case 0x20e39cu: goto label_20e39c;
        case 0x20e3a0u: goto label_20e3a0;
        case 0x20e3a4u: goto label_20e3a4;
        case 0x20e3a8u: goto label_20e3a8;
        case 0x20e3acu: goto label_20e3ac;
        case 0x20e3b0u: goto label_20e3b0;
        case 0x20e3b4u: goto label_20e3b4;
        case 0x20e3b8u: goto label_20e3b8;
        case 0x20e3bcu: goto label_20e3bc;
        case 0x20e3c0u: goto label_20e3c0;
        case 0x20e3c4u: goto label_20e3c4;
        case 0x20e3c8u: goto label_20e3c8;
        case 0x20e3ccu: goto label_20e3cc;
        case 0x20e3d0u: goto label_20e3d0;
        case 0x20e3d4u: goto label_20e3d4;
        case 0x20e3d8u: goto label_20e3d8;
        case 0x20e3dcu: goto label_20e3dc;
        case 0x20e3e0u: goto label_20e3e0;
        case 0x20e3e4u: goto label_20e3e4;
        case 0x20e3e8u: goto label_20e3e8;
        case 0x20e3ecu: goto label_20e3ec;
        case 0x20e3f0u: goto label_20e3f0;
        case 0x20e3f4u: goto label_20e3f4;
        case 0x20e3f8u: goto label_20e3f8;
        case 0x20e3fcu: goto label_20e3fc;
        case 0x20e400u: goto label_20e400;
        case 0x20e404u: goto label_20e404;
        case 0x20e408u: goto label_20e408;
        case 0x20e40cu: goto label_20e40c;
        case 0x20e410u: goto label_20e410;
        case 0x20e414u: goto label_20e414;
        case 0x20e418u: goto label_20e418;
        case 0x20e41cu: goto label_20e41c;
        case 0x20e420u: goto label_20e420;
        case 0x20e424u: goto label_20e424;
        case 0x20e428u: goto label_20e428;
        case 0x20e42cu: goto label_20e42c;
        case 0x20e430u: goto label_20e430;
        case 0x20e434u: goto label_20e434;
        case 0x20e438u: goto label_20e438;
        case 0x20e43cu: goto label_20e43c;
        case 0x20e440u: goto label_20e440;
        case 0x20e444u: goto label_20e444;
        case 0x20e448u: goto label_20e448;
        case 0x20e44cu: goto label_20e44c;
        case 0x20e450u: goto label_20e450;
        case 0x20e454u: goto label_20e454;
        case 0x20e458u: goto label_20e458;
        case 0x20e45cu: goto label_20e45c;
        case 0x20e460u: goto label_20e460;
        case 0x20e464u: goto label_20e464;
        case 0x20e468u: goto label_20e468;
        case 0x20e46cu: goto label_20e46c;
        case 0x20e470u: goto label_20e470;
        case 0x20e474u: goto label_20e474;
        case 0x20e478u: goto label_20e478;
        case 0x20e47cu: goto label_20e47c;
        case 0x20e480u: goto label_20e480;
        case 0x20e484u: goto label_20e484;
        case 0x20e488u: goto label_20e488;
        case 0x20e48cu: goto label_20e48c;
        case 0x20e490u: goto label_20e490;
        case 0x20e494u: goto label_20e494;
        case 0x20e498u: goto label_20e498;
        case 0x20e49cu: goto label_20e49c;
        case 0x20e4a0u: goto label_20e4a0;
        case 0x20e4a4u: goto label_20e4a4;
        case 0x20e4a8u: goto label_20e4a8;
        case 0x20e4acu: goto label_20e4ac;
        case 0x20e4b0u: goto label_20e4b0;
        case 0x20e4b4u: goto label_20e4b4;
        case 0x20e4b8u: goto label_20e4b8;
        case 0x20e4bcu: goto label_20e4bc;
        case 0x20e4c0u: goto label_20e4c0;
        case 0x20e4c4u: goto label_20e4c4;
        case 0x20e4c8u: goto label_20e4c8;
        case 0x20e4ccu: goto label_20e4cc;
        case 0x20e4d0u: goto label_20e4d0;
        case 0x20e4d4u: goto label_20e4d4;
        case 0x20e4d8u: goto label_20e4d8;
        case 0x20e4dcu: goto label_20e4dc;
        case 0x20e4e0u: goto label_20e4e0;
        case 0x20e4e4u: goto label_20e4e4;
        case 0x20e4e8u: goto label_20e4e8;
        case 0x20e4ecu: goto label_20e4ec;
        case 0x20e4f0u: goto label_20e4f0;
        case 0x20e4f4u: goto label_20e4f4;
        case 0x20e4f8u: goto label_20e4f8;
        case 0x20e4fcu: goto label_20e4fc;
        case 0x20e500u: goto label_20e500;
        case 0x20e504u: goto label_20e504;
        case 0x20e508u: goto label_20e508;
        case 0x20e50cu: goto label_20e50c;
        case 0x20e510u: goto label_20e510;
        case 0x20e514u: goto label_20e514;
        case 0x20e518u: goto label_20e518;
        case 0x20e51cu: goto label_20e51c;
        case 0x20e520u: goto label_20e520;
        case 0x20e524u: goto label_20e524;
        case 0x20e528u: goto label_20e528;
        case 0x20e52cu: goto label_20e52c;
        case 0x20e530u: goto label_20e530;
        case 0x20e534u: goto label_20e534;
        case 0x20e538u: goto label_20e538;
        case 0x20e53cu: goto label_20e53c;
        case 0x20e540u: goto label_20e540;
        case 0x20e544u: goto label_20e544;
        case 0x20e548u: goto label_20e548;
        case 0x20e54cu: goto label_20e54c;
        case 0x20e550u: goto label_20e550;
        case 0x20e554u: goto label_20e554;
        case 0x20e558u: goto label_20e558;
        case 0x20e55cu: goto label_20e55c;
        case 0x20e560u: goto label_20e560;
        case 0x20e564u: goto label_20e564;
        case 0x20e568u: goto label_20e568;
        case 0x20e56cu: goto label_20e56c;
        case 0x20e570u: goto label_20e570;
        case 0x20e574u: goto label_20e574;
        case 0x20e578u: goto label_20e578;
        case 0x20e57cu: goto label_20e57c;
        case 0x20e580u: goto label_20e580;
        case 0x20e584u: goto label_20e584;
        case 0x20e588u: goto label_20e588;
        case 0x20e58cu: goto label_20e58c;
        case 0x20e590u: goto label_20e590;
        case 0x20e594u: goto label_20e594;
        case 0x20e598u: goto label_20e598;
        case 0x20e59cu: goto label_20e59c;
        case 0x20e5a0u: goto label_20e5a0;
        case 0x20e5a4u: goto label_20e5a4;
        case 0x20e5a8u: goto label_20e5a8;
        case 0x20e5acu: goto label_20e5ac;
        case 0x20e5b0u: goto label_20e5b0;
        case 0x20e5b4u: goto label_20e5b4;
        case 0x20e5b8u: goto label_20e5b8;
        case 0x20e5bcu: goto label_20e5bc;
        case 0x20e5c0u: goto label_20e5c0;
        case 0x20e5c4u: goto label_20e5c4;
        case 0x20e5c8u: goto label_20e5c8;
        case 0x20e5ccu: goto label_20e5cc;
        case 0x20e5d0u: goto label_20e5d0;
        case 0x20e5d4u: goto label_20e5d4;
        case 0x20e5d8u: goto label_20e5d8;
        case 0x20e5dcu: goto label_20e5dc;
        case 0x20e5e0u: goto label_20e5e0;
        case 0x20e5e4u: goto label_20e5e4;
        case 0x20e5e8u: goto label_20e5e8;
        case 0x20e5ecu: goto label_20e5ec;
        case 0x20e5f0u: goto label_20e5f0;
        case 0x20e5f4u: goto label_20e5f4;
        case 0x20e5f8u: goto label_20e5f8;
        case 0x20e5fcu: goto label_20e5fc;
        case 0x20e600u: goto label_20e600;
        case 0x20e604u: goto label_20e604;
        case 0x20e608u: goto label_20e608;
        case 0x20e60cu: goto label_20e60c;
        case 0x20e610u: goto label_20e610;
        case 0x20e614u: goto label_20e614;
        case 0x20e618u: goto label_20e618;
        case 0x20e61cu: goto label_20e61c;
        case 0x20e620u: goto label_20e620;
        case 0x20e624u: goto label_20e624;
        case 0x20e628u: goto label_20e628;
        case 0x20e62cu: goto label_20e62c;
        case 0x20e630u: goto label_20e630;
        case 0x20e634u: goto label_20e634;
        case 0x20e638u: goto label_20e638;
        case 0x20e63cu: goto label_20e63c;
        case 0x20e640u: goto label_20e640;
        case 0x20e644u: goto label_20e644;
        case 0x20e648u: goto label_20e648;
        case 0x20e64cu: goto label_20e64c;
        case 0x20e650u: goto label_20e650;
        case 0x20e654u: goto label_20e654;
        case 0x20e658u: goto label_20e658;
        case 0x20e65cu: goto label_20e65c;
        case 0x20e660u: goto label_20e660;
        case 0x20e664u: goto label_20e664;
        case 0x20e668u: goto label_20e668;
        case 0x20e66cu: goto label_20e66c;
        case 0x20e670u: goto label_20e670;
        case 0x20e674u: goto label_20e674;
        case 0x20e678u: goto label_20e678;
        case 0x20e67cu: goto label_20e67c;
        case 0x20e680u: goto label_20e680;
        case 0x20e684u: goto label_20e684;
        case 0x20e688u: goto label_20e688;
        case 0x20e68cu: goto label_20e68c;
        case 0x20e690u: goto label_20e690;
        case 0x20e694u: goto label_20e694;
        case 0x20e698u: goto label_20e698;
        case 0x20e69cu: goto label_20e69c;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6a4u: goto label_20e6a4;
        case 0x20e6a8u: goto label_20e6a8;
        case 0x20e6acu: goto label_20e6ac;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e6b4u: goto label_20e6b4;
        case 0x20e6b8u: goto label_20e6b8;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6c0u: goto label_20e6c0;
        case 0x20e6c4u: goto label_20e6c4;
        case 0x20e6c8u: goto label_20e6c8;
        case 0x20e6ccu: goto label_20e6cc;
        case 0x20e6d0u: goto label_20e6d0;
        case 0x20e6d4u: goto label_20e6d4;
        case 0x20e6d8u: goto label_20e6d8;
        case 0x20e6dcu: goto label_20e6dc;
        case 0x20e6e0u: goto label_20e6e0;
        case 0x20e6e4u: goto label_20e6e4;
        case 0x20e6e8u: goto label_20e6e8;
        case 0x20e6ecu: goto label_20e6ec;
        case 0x20e6f0u: goto label_20e6f0;
        case 0x20e6f4u: goto label_20e6f4;
        case 0x20e6f8u: goto label_20e6f8;
        case 0x20e6fcu: goto label_20e6fc;
        case 0x20e700u: goto label_20e700;
        case 0x20e704u: goto label_20e704;
        case 0x20e708u: goto label_20e708;
        case 0x20e70cu: goto label_20e70c;
        case 0x20e710u: goto label_20e710;
        case 0x20e714u: goto label_20e714;
        case 0x20e718u: goto label_20e718;
        case 0x20e71cu: goto label_20e71c;
        case 0x20e720u: goto label_20e720;
        case 0x20e724u: goto label_20e724;
        case 0x20e728u: goto label_20e728;
        case 0x20e72cu: goto label_20e72c;
        case 0x20e730u: goto label_20e730;
        case 0x20e734u: goto label_20e734;
        case 0x20e738u: goto label_20e738;
        case 0x20e73cu: goto label_20e73c;
        case 0x20e740u: goto label_20e740;
        case 0x20e744u: goto label_20e744;
        case 0x20e748u: goto label_20e748;
        case 0x20e74cu: goto label_20e74c;
        case 0x20e750u: goto label_20e750;
        case 0x20e754u: goto label_20e754;
        case 0x20e758u: goto label_20e758;
        case 0x20e75cu: goto label_20e75c;
        case 0x20e760u: goto label_20e760;
        case 0x20e764u: goto label_20e764;
        case 0x20e768u: goto label_20e768;
        case 0x20e76cu: goto label_20e76c;
        case 0x20e770u: goto label_20e770;
        case 0x20e774u: goto label_20e774;
        case 0x20e778u: goto label_20e778;
        case 0x20e77cu: goto label_20e77c;
        case 0x20e780u: goto label_20e780;
        case 0x20e784u: goto label_20e784;
        case 0x20e788u: goto label_20e788;
        case 0x20e78cu: goto label_20e78c;
        case 0x20e790u: goto label_20e790;
        case 0x20e794u: goto label_20e794;
        case 0x20e798u: goto label_20e798;
        case 0x20e79cu: goto label_20e79c;
        case 0x20e7a0u: goto label_20e7a0;
        case 0x20e7a4u: goto label_20e7a4;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7acu: goto label_20e7ac;
        case 0x20e7b0u: goto label_20e7b0;
        case 0x20e7b4u: goto label_20e7b4;
        case 0x20e7b8u: goto label_20e7b8;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7c4u: goto label_20e7c4;
        case 0x20e7c8u: goto label_20e7c8;
        case 0x20e7ccu: goto label_20e7cc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e7d8u: goto label_20e7d8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e0u: goto label_20e7e0;
        case 0x20e7e4u: goto label_20e7e4;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7ecu: goto label_20e7ec;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e7f4u: goto label_20e7f4;
        case 0x20e7f8u: goto label_20e7f8;
        case 0x20e7fcu: goto label_20e7fc;
        case 0x20e800u: goto label_20e800;
        case 0x20e804u: goto label_20e804;
        case 0x20e808u: goto label_20e808;
        case 0x20e80cu: goto label_20e80c;
        case 0x20e810u: goto label_20e810;
        case 0x20e814u: goto label_20e814;
        case 0x20e818u: goto label_20e818;
        case 0x20e81cu: goto label_20e81c;
        case 0x20e820u: goto label_20e820;
        case 0x20e824u: goto label_20e824;
        case 0x20e828u: goto label_20e828;
        case 0x20e82cu: goto label_20e82c;
        case 0x20e830u: goto label_20e830;
        case 0x20e834u: goto label_20e834;
        case 0x20e838u: goto label_20e838;
        case 0x20e83cu: goto label_20e83c;
        case 0x20e840u: goto label_20e840;
        case 0x20e844u: goto label_20e844;
        case 0x20e848u: goto label_20e848;
        case 0x20e84cu: goto label_20e84c;
        case 0x20e850u: goto label_20e850;
        case 0x20e854u: goto label_20e854;
        case 0x20e858u: goto label_20e858;
        case 0x20e85cu: goto label_20e85c;
        case 0x20e860u: goto label_20e860;
        case 0x20e864u: goto label_20e864;
        case 0x20e868u: goto label_20e868;
        case 0x20e86cu: goto label_20e86c;
        case 0x20e870u: goto label_20e870;
        case 0x20e874u: goto label_20e874;
        case 0x20e878u: goto label_20e878;
        case 0x20e87cu: goto label_20e87c;
        case 0x20e880u: goto label_20e880;
        case 0x20e884u: goto label_20e884;
        case 0x20e888u: goto label_20e888;
        case 0x20e88cu: goto label_20e88c;
        case 0x20e890u: goto label_20e890;
        case 0x20e894u: goto label_20e894;
        case 0x20e898u: goto label_20e898;
        case 0x20e89cu: goto label_20e89c;
        case 0x20e8a0u: goto label_20e8a0;
        case 0x20e8a4u: goto label_20e8a4;
        case 0x20e8a8u: goto label_20e8a8;
        case 0x20e8acu: goto label_20e8ac;
        case 0x20e8b0u: goto label_20e8b0;
        case 0x20e8b4u: goto label_20e8b4;
        case 0x20e8b8u: goto label_20e8b8;
        case 0x20e8bcu: goto label_20e8bc;
        case 0x20e8c0u: goto label_20e8c0;
        case 0x20e8c4u: goto label_20e8c4;
        case 0x20e8c8u: goto label_20e8c8;
        case 0x20e8ccu: goto label_20e8cc;
        case 0x20e8d0u: goto label_20e8d0;
        case 0x20e8d4u: goto label_20e8d4;
        case 0x20e8d8u: goto label_20e8d8;
        case 0x20e8dcu: goto label_20e8dc;
        case 0x20e8e0u: goto label_20e8e0;
        case 0x20e8e4u: goto label_20e8e4;
        case 0x20e8e8u: goto label_20e8e8;
        case 0x20e8ecu: goto label_20e8ec;
        case 0x20e8f0u: goto label_20e8f0;
        case 0x20e8f4u: goto label_20e8f4;
        case 0x20e8f8u: goto label_20e8f8;
        case 0x20e8fcu: goto label_20e8fc;
        case 0x20e900u: goto label_20e900;
        case 0x20e904u: goto label_20e904;
        case 0x20e908u: goto label_20e908;
        case 0x20e90cu: goto label_20e90c;
        case 0x20e910u: goto label_20e910;
        case 0x20e914u: goto label_20e914;
        case 0x20e918u: goto label_20e918;
        case 0x20e91cu: goto label_20e91c;
        case 0x20e920u: goto label_20e920;
        case 0x20e924u: goto label_20e924;
        case 0x20e928u: goto label_20e928;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e930u: goto label_20e930;
        case 0x20e934u: goto label_20e934;
        case 0x20e938u: goto label_20e938;
        case 0x20e93cu: goto label_20e93c;
        case 0x20e940u: goto label_20e940;
        case 0x20e944u: goto label_20e944;
        case 0x20e948u: goto label_20e948;
        case 0x20e94cu: goto label_20e94c;
        case 0x20e950u: goto label_20e950;
        case 0x20e954u: goto label_20e954;
        case 0x20e958u: goto label_20e958;
        case 0x20e95cu: goto label_20e95c;
        case 0x20e960u: goto label_20e960;
        case 0x20e964u: goto label_20e964;
        case 0x20e968u: goto label_20e968;
        case 0x20e96cu: goto label_20e96c;
        case 0x20e970u: goto label_20e970;
        case 0x20e974u: goto label_20e974;
        case 0x20e978u: goto label_20e978;
        case 0x20e97cu: goto label_20e97c;
        case 0x20e980u: goto label_20e980;
        case 0x20e984u: goto label_20e984;
        case 0x20e988u: goto label_20e988;
        case 0x20e98cu: goto label_20e98c;
        case 0x20e990u: goto label_20e990;
        case 0x20e994u: goto label_20e994;
        case 0x20e998u: goto label_20e998;
        case 0x20e99cu: goto label_20e99c;
        case 0x20e9a0u: goto label_20e9a0;
        case 0x20e9a4u: goto label_20e9a4;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20e9acu: goto label_20e9ac;
        case 0x20e9b0u: goto label_20e9b0;
        case 0x20e9b4u: goto label_20e9b4;
        case 0x20e9b8u: goto label_20e9b8;
        case 0x20e9bcu: goto label_20e9bc;
        case 0x20e9c0u: goto label_20e9c0;
        case 0x20e9c4u: goto label_20e9c4;
        case 0x20e9c8u: goto label_20e9c8;
        case 0x20e9ccu: goto label_20e9cc;
        case 0x20e9d0u: goto label_20e9d0;
        case 0x20e9d4u: goto label_20e9d4;
        case 0x20e9d8u: goto label_20e9d8;
        case 0x20e9dcu: goto label_20e9dc;
        case 0x20e9e0u: goto label_20e9e0;
        case 0x20e9e4u: goto label_20e9e4;
        case 0x20e9e8u: goto label_20e9e8;
        case 0x20e9ecu: goto label_20e9ec;
        case 0x20e9f0u: goto label_20e9f0;
        case 0x20e9f4u: goto label_20e9f4;
        case 0x20e9f8u: goto label_20e9f8;
        case 0x20e9fcu: goto label_20e9fc;
        case 0x20ea00u: goto label_20ea00;
        case 0x20ea04u: goto label_20ea04;
        case 0x20ea08u: goto label_20ea08;
        case 0x20ea0cu: goto label_20ea0c;
        case 0x20ea10u: goto label_20ea10;
        case 0x20ea14u: goto label_20ea14;
        case 0x20ea18u: goto label_20ea18;
        case 0x20ea1cu: goto label_20ea1c;
        case 0x20ea20u: goto label_20ea20;
        case 0x20ea24u: goto label_20ea24;
        case 0x20ea28u: goto label_20ea28;
        case 0x20ea2cu: goto label_20ea2c;
        case 0x20ea30u: goto label_20ea30;
        case 0x20ea34u: goto label_20ea34;
        case 0x20ea38u: goto label_20ea38;
        case 0x20ea3cu: goto label_20ea3c;
        case 0x20ea40u: goto label_20ea40;
        case 0x20ea44u: goto label_20ea44;
        case 0x20ea48u: goto label_20ea48;
        case 0x20ea4cu: goto label_20ea4c;
        case 0x20ea50u: goto label_20ea50;
        case 0x20ea54u: goto label_20ea54;
        case 0x20ea58u: goto label_20ea58;
        case 0x20ea5cu: goto label_20ea5c;
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea64u: goto label_20ea64;
        case 0x20ea68u: goto label_20ea68;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea74u: goto label_20ea74;
        case 0x20ea78u: goto label_20ea78;
        case 0x20ea7cu: goto label_20ea7c;
        case 0x20ea80u: goto label_20ea80;
        case 0x20ea84u: goto label_20ea84;
        case 0x20ea88u: goto label_20ea88;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20ea90u: goto label_20ea90;
        case 0x20ea94u: goto label_20ea94;
        case 0x20ea98u: goto label_20ea98;
        case 0x20ea9cu: goto label_20ea9c;
        case 0x20eaa0u: goto label_20eaa0;
        case 0x20eaa4u: goto label_20eaa4;
        case 0x20eaa8u: goto label_20eaa8;
        case 0x20eaacu: goto label_20eaac;
        case 0x20eab0u: goto label_20eab0;
        case 0x20eab4u: goto label_20eab4;
        case 0x20eab8u: goto label_20eab8;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eac0u: goto label_20eac0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eac8u: goto label_20eac8;
        case 0x20eaccu: goto label_20eacc;
        case 0x20ead0u: goto label_20ead0;
        case 0x20ead4u: goto label_20ead4;
        case 0x20ead8u: goto label_20ead8;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eae0u: goto label_20eae0;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eae8u: goto label_20eae8;
        case 0x20eaecu: goto label_20eaec;
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eaf4u: goto label_20eaf4;
        case 0x20eaf8u: goto label_20eaf8;
        case 0x20eafcu: goto label_20eafc;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb04u: goto label_20eb04;
        case 0x20eb08u: goto label_20eb08;
        case 0x20eb0cu: goto label_20eb0c;
        case 0x20eb10u: goto label_20eb10;
        case 0x20eb14u: goto label_20eb14;
        case 0x20eb18u: goto label_20eb18;
        case 0x20eb1cu: goto label_20eb1c;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb24u: goto label_20eb24;
        case 0x20eb28u: goto label_20eb28;
        case 0x20eb2cu: goto label_20eb2c;
        case 0x20eb30u: goto label_20eb30;
        case 0x20eb34u: goto label_20eb34;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb3cu: goto label_20eb3c;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb44u: goto label_20eb44;
        case 0x20eb48u: goto label_20eb48;
        case 0x20eb4cu: goto label_20eb4c;
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb54u: goto label_20eb54;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb5cu: goto label_20eb5c;
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        case 0x20ecd0u: goto label_20ecd0;
        case 0x20ecd4u: goto label_20ecd4;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ece4u: goto label_20ece4;
        case 0x20ece8u: goto label_20ece8;
        case 0x20ececu: goto label_20ecec;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ecf8u: goto label_20ecf8;
        case 0x20ecfcu: goto label_20ecfc;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed04u: goto label_20ed04;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed0cu: goto label_20ed0c;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed14u: goto label_20ed14;
        case 0x20ed18u: goto label_20ed18;
        case 0x20ed1cu: goto label_20ed1c;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed24u: goto label_20ed24;
        case 0x20ed28u: goto label_20ed28;
        case 0x20ed2cu: goto label_20ed2c;
        case 0x20ed30u: goto label_20ed30;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed38u: goto label_20ed38;
        case 0x20ed3cu: goto label_20ed3c;
        case 0x20ed40u: goto label_20ed40;
        case 0x20ed44u: goto label_20ed44;
        case 0x20ed48u: goto label_20ed48;
        case 0x20ed4cu: goto label_20ed4c;
        case 0x20ed50u: goto label_20ed50;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed5cu: goto label_20ed5c;
        case 0x20ed60u: goto label_20ed60;
        case 0x20ed64u: goto label_20ed64;
        case 0x20ed68u: goto label_20ed68;
        case 0x20ed6cu: goto label_20ed6c;
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed74u: goto label_20ed74;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed7cu: goto label_20ed7c;
        case 0x20ed80u: goto label_20ed80;
        case 0x20ed84u: goto label_20ed84;
        case 0x20ed88u: goto label_20ed88;
        case 0x20ed8cu: goto label_20ed8c;
        case 0x20ed90u: goto label_20ed90;
        case 0x20ed94u: goto label_20ed94;
        case 0x20ed98u: goto label_20ed98;
        case 0x20ed9cu: goto label_20ed9c;
        case 0x20eda0u: goto label_20eda0;
        case 0x20eda4u: goto label_20eda4;
        case 0x20eda8u: goto label_20eda8;
        case 0x20edacu: goto label_20edac;
        case 0x20edb0u: goto label_20edb0;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edbcu: goto label_20edbc;
        case 0x20edc0u: goto label_20edc0;
        case 0x20edc4u: goto label_20edc4;
        case 0x20edc8u: goto label_20edc8;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd0u: goto label_20edd0;
        case 0x20edd4u: goto label_20edd4;
        case 0x20edd8u: goto label_20edd8;
        case 0x20eddcu: goto label_20eddc;
        case 0x20ede0u: goto label_20ede0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ede8u: goto label_20ede8;
        case 0x20edecu: goto label_20edec;
        case 0x20edf0u: goto label_20edf0;
        case 0x20edf4u: goto label_20edf4;
        case 0x20edf8u: goto label_20edf8;
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee00u: goto label_20ee00;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee08u: goto label_20ee08;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee10u: goto label_20ee10;
        case 0x20ee14u: goto label_20ee14;
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee1cu: goto label_20ee1c;
        case 0x20ee20u: goto label_20ee20;
        case 0x20ee24u: goto label_20ee24;
        case 0x20ee28u: goto label_20ee28;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee38u: goto label_20ee38;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee40u: goto label_20ee40;
        case 0x20ee44u: goto label_20ee44;
        case 0x20ee48u: goto label_20ee48;
        case 0x20ee4cu: goto label_20ee4c;
        case 0x20ee50u: goto label_20ee50;
        case 0x20ee54u: goto label_20ee54;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20ee60u: goto label_20ee60;
        case 0x20ee64u: goto label_20ee64;
        case 0x20ee68u: goto label_20ee68;
        case 0x20ee6cu: goto label_20ee6c;
        case 0x20ee70u: goto label_20ee70;
        case 0x20ee74u: goto label_20ee74;
        case 0x20ee78u: goto label_20ee78;
        case 0x20ee7cu: goto label_20ee7c;
        case 0x20ee80u: goto label_20ee80;
        case 0x20ee84u: goto label_20ee84;
        case 0x20ee88u: goto label_20ee88;
        case 0x20ee8cu: goto label_20ee8c;
        case 0x20ee90u: goto label_20ee90;
        case 0x20ee94u: goto label_20ee94;
        case 0x20ee98u: goto label_20ee98;
        case 0x20ee9cu: goto label_20ee9c;
        case 0x20eea0u: goto label_20eea0;
        case 0x20eea4u: goto label_20eea4;
        case 0x20eea8u: goto label_20eea8;
        case 0x20eeacu: goto label_20eeac;
        case 0x20eeb0u: goto label_20eeb0;
        case 0x20eeb4u: goto label_20eeb4;
        case 0x20eeb8u: goto label_20eeb8;
        case 0x20eebcu: goto label_20eebc;
        case 0x20eec0u: goto label_20eec0;
        case 0x20eec4u: goto label_20eec4;
        case 0x20eec8u: goto label_20eec8;
        case 0x20eeccu: goto label_20eecc;
        case 0x20eed0u: goto label_20eed0;
        case 0x20eed4u: goto label_20eed4;
        case 0x20eed8u: goto label_20eed8;
        case 0x20eedcu: goto label_20eedc;
        case 0x20eee0u: goto label_20eee0;
        case 0x20eee4u: goto label_20eee4;
        case 0x20eee8u: goto label_20eee8;
        case 0x20eeecu: goto label_20eeec;
        case 0x20eef0u: goto label_20eef0;
        case 0x20eef4u: goto label_20eef4;
        case 0x20eef8u: goto label_20eef8;
        case 0x20eefcu: goto label_20eefc;
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef04u: goto label_20ef04;
        case 0x20ef08u: goto label_20ef08;
        case 0x20ef0cu: goto label_20ef0c;
        case 0x20ef10u: goto label_20ef10;
        case 0x20ef14u: goto label_20ef14;
        case 0x20ef18u: goto label_20ef18;
        case 0x20ef1cu: goto label_20ef1c;
        case 0x20ef20u: goto label_20ef20;
        case 0x20ef24u: goto label_20ef24;
        case 0x20ef28u: goto label_20ef28;
        case 0x20ef2cu: goto label_20ef2c;
        case 0x20ef30u: goto label_20ef30;
        case 0x20ef34u: goto label_20ef34;
        case 0x20ef38u: goto label_20ef38;
        case 0x20ef3cu: goto label_20ef3c;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef44u: goto label_20ef44;
        case 0x20ef48u: goto label_20ef48;
        case 0x20ef4cu: goto label_20ef4c;
        case 0x20ef50u: goto label_20ef50;
        case 0x20ef54u: goto label_20ef54;
        case 0x20ef58u: goto label_20ef58;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20ef60u: goto label_20ef60;
        case 0x20ef64u: goto label_20ef64;
        case 0x20ef68u: goto label_20ef68;
        case 0x20ef6cu: goto label_20ef6c;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef74u: goto label_20ef74;
        case 0x20ef78u: goto label_20ef78;
        case 0x20ef7cu: goto label_20ef7c;
        case 0x20ef80u: goto label_20ef80;
        case 0x20ef84u: goto label_20ef84;
        case 0x20ef88u: goto label_20ef88;
        case 0x20ef8cu: goto label_20ef8c;
        case 0x20ef90u: goto label_20ef90;
        case 0x20ef94u: goto label_20ef94;
        case 0x20ef98u: goto label_20ef98;
        case 0x20ef9cu: goto label_20ef9c;
        case 0x20efa0u: goto label_20efa0;
        case 0x20efa4u: goto label_20efa4;
        case 0x20efa8u: goto label_20efa8;
        case 0x20efacu: goto label_20efac;
        case 0x20efb0u: goto label_20efb0;
        case 0x20efb4u: goto label_20efb4;
        case 0x20efb8u: goto label_20efb8;
        case 0x20efbcu: goto label_20efbc;
        case 0x20efc0u: goto label_20efc0;
        case 0x20efc4u: goto label_20efc4;
        case 0x20efc8u: goto label_20efc8;
        case 0x20efccu: goto label_20efcc;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd4u: goto label_20efd4;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efdcu: goto label_20efdc;
        case 0x20efe0u: goto label_20efe0;
        case 0x20efe4u: goto label_20efe4;
        case 0x20efe8u: goto label_20efe8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff0u: goto label_20eff0;
        case 0x20eff4u: goto label_20eff4;
        case 0x20eff8u: goto label_20eff8;
        case 0x20effcu: goto label_20effc;
        case 0x20f000u: goto label_20f000;
        case 0x20f004u: goto label_20f004;
        case 0x20f008u: goto label_20f008;
        case 0x20f00cu: goto label_20f00c;
        case 0x20f010u: goto label_20f010;
        case 0x20f014u: goto label_20f014;
        case 0x20f018u: goto label_20f018;
        case 0x20f01cu: goto label_20f01c;
        case 0x20f020u: goto label_20f020;
        case 0x20f024u: goto label_20f024;
        case 0x20f028u: goto label_20f028;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f030u: goto label_20f030;
        case 0x20f034u: goto label_20f034;
        case 0x20f038u: goto label_20f038;
        case 0x20f03cu: goto label_20f03c;
        case 0x20f040u: goto label_20f040;
        case 0x20f044u: goto label_20f044;
        case 0x20f048u: goto label_20f048;
        case 0x20f04cu: goto label_20f04c;
        case 0x20f050u: goto label_20f050;
        case 0x20f054u: goto label_20f054;
        case 0x20f058u: goto label_20f058;
        case 0x20f05cu: goto label_20f05c;
        case 0x20f060u: goto label_20f060;
        case 0x20f064u: goto label_20f064;
        case 0x20f068u: goto label_20f068;
        case 0x20f06cu: goto label_20f06c;
        case 0x20f070u: goto label_20f070;
        case 0x20f074u: goto label_20f074;
        case 0x20f078u: goto label_20f078;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f080u: goto label_20f080;
        case 0x20f084u: goto label_20f084;
        case 0x20f088u: goto label_20f088;
        case 0x20f08cu: goto label_20f08c;
        case 0x20f090u: goto label_20f090;
        case 0x20f094u: goto label_20f094;
        case 0x20f098u: goto label_20f098;
        case 0x20f09cu: goto label_20f09c;
        case 0x20f0a0u: goto label_20f0a0;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0a8u: goto label_20f0a8;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0b4u: goto label_20f0b4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c0u: goto label_20f0c0;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0d0u: goto label_20f0d0;
        case 0x20f0d4u: goto label_20f0d4;
        case 0x20f0d8u: goto label_20f0d8;
        case 0x20f0dcu: goto label_20f0dc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0e8u: goto label_20f0e8;
        case 0x20f0ecu: goto label_20f0ec;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0f4u: goto label_20f0f4;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f100u: goto label_20f100;
        case 0x20f104u: goto label_20f104;
        case 0x20f108u: goto label_20f108;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f110u: goto label_20f110;
        case 0x20f114u: goto label_20f114;
        case 0x20f118u: goto label_20f118;
        case 0x20f11cu: goto label_20f11c;
        case 0x20f120u: goto label_20f120;
        case 0x20f124u: goto label_20f124;
        case 0x20f128u: goto label_20f128;
        case 0x20f12cu: goto label_20f12c;
        case 0x20f130u: goto label_20f130;
        case 0x20f134u: goto label_20f134;
        case 0x20f138u: goto label_20f138;
        case 0x20f13cu: goto label_20f13c;
        case 0x20f140u: goto label_20f140;
        case 0x20f144u: goto label_20f144;
        case 0x20f148u: goto label_20f148;
        case 0x20f14cu: goto label_20f14c;
        case 0x20f150u: goto label_20f150;
        case 0x20f154u: goto label_20f154;
        case 0x20f158u: goto label_20f158;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f160u: goto label_20f160;
        case 0x20f164u: goto label_20f164;
        case 0x20f168u: goto label_20f168;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f170u: goto label_20f170;
        case 0x20f174u: goto label_20f174;
        case 0x20f178u: goto label_20f178;
        case 0x20f17cu: goto label_20f17c;
        case 0x20f180u: goto label_20f180;
        case 0x20f184u: goto label_20f184;
        case 0x20f188u: goto label_20f188;
        case 0x20f18cu: goto label_20f18c;
        case 0x20f190u: goto label_20f190;
        case 0x20f194u: goto label_20f194;
        case 0x20f198u: goto label_20f198;
        case 0x20f19cu: goto label_20f19c;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1a4u: goto label_20f1a4;
        case 0x20f1a8u: goto label_20f1a8;
        case 0x20f1acu: goto label_20f1ac;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1b4u: goto label_20f1b4;
        case 0x20f1b8u: goto label_20f1b8;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        default: break;
    }

    ctx->pc = 0x20d278u;

label_20d278:
    // 0x20d278: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
label_20d27c:
    // 0x20d27c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x20d27cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d280:
    // 0x20d280: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_20d284:
    // 0x20d284: 0x7fb20550  sq          $s2, 0x550($sp)
    ctx->pc = 0x20d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 18));
label_20d288:
    // 0x20d288: 0x7fb60510  sq          $s6, 0x510($sp)
    ctx->pc = 0x20d288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 22));
label_20d28c:
    // 0x20d28c: 0x24c30060  addiu       $v1, $a2, 0x60
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_20d290:
    // 0x20d290: 0x7fb00570  sq          $s0, 0x570($sp)
    ctx->pc = 0x20d290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 16));
label_20d294:
    // 0x20d294: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x20d294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20d298:
    // 0x20d298: 0x7fb10560  sq          $s1, 0x560($sp)
    ctx->pc = 0x20d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 17));
label_20d29c:
    // 0x20d29c: 0x1c0902d  daddu       $s2, $t6, $zero
    ctx->pc = 0x20d29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_20d2a0:
    // 0x20d2a0: 0x7fb30540  sq          $s3, 0x540($sp)
    ctx->pc = 0x20d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 19));
label_20d2a4:
    // 0x20d2a4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x20d2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d2a8:
    // 0x20d2a8: 0x7fb40530  sq          $s4, 0x530($sp)
    ctx->pc = 0x20d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 20));
label_20d2ac:
    // 0x20d2ac: 0x7fb50520  sq          $s5, 0x520($sp)
    ctx->pc = 0x20d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 21));
label_20d2b0:
    // 0x20d2b0: 0x7fb70500  sq          $s7, 0x500($sp)
    ctx->pc = 0x20d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 23));
label_20d2b4:
    // 0x20d2b4: 0x7fbe04f0  sq          $fp, 0x4F0($sp)
    ctx->pc = 0x20d2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 30));
label_20d2b8:
    // 0x20d2b8: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x20d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
label_20d2bc:
    // 0x20d2bc: 0xe7b50588  swc1        $f21, 0x588($sp)
    ctx->pc = 0x20d2bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_20d2c0:
    // 0x20d2c0: 0xe7b40580  swc1        $f20, 0x580($sp)
    ctx->pc = 0x20d2c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_20d2c4:
    // 0x20d2c4: 0xafa40468  sw          $a0, 0x468($sp)
    ctx->pc = 0x20d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 4));
label_20d2c8:
    // 0x20d2c8: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x20d2c8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20d2cc:
    // 0x20d2cc: 0x78c80010  lq          $t0, 0x10($a2)
    ctx->pc = 0x20d2ccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_20d2d0:
    // 0x20d2d0: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x20d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_20d2d4:
    // 0x20d2d4: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x20d2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
label_20d2d8:
    // 0x20d2d8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x20d2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_20d2dc:
    // 0x20d2dc: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
label_20d2e0:
    if (ctx->pc == 0x20D2E0u) {
        ctx->pc = 0x20D2E0u;
            // 0x20d2e0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x20D2E4u;
        goto label_20d2e4;
    }
    ctx->pc = 0x20D2DCu;
    {
        const bool branch_taken_0x20d2dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x20D2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2DCu;
            // 0x20d2e0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2dc) {
            ctx->pc = 0x20D2C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d2c8;
        }
    }
    ctx->pc = 0x20D2E4u;
label_20d2e4:
    // 0x20d2e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20d2e8:
    // 0x20d2e8: 0x1c52821  addu        $a1, $t6, $a1
    ctx->pc = 0x20d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_20d2ec:
    // 0x20d2ec: 0x8fab0468  lw          $t3, 0x468($sp)
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20d2f0:
    // 0x20d2f0: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x20d2f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20d2f4:
    // 0x20d2f4: 0x78870030  lq          $a3, 0x30($a0)
    ctx->pc = 0x20d2f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_20d2f8:
    // 0x20d2f8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x20d2f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d2fc:
    // 0x20d2fc: 0xafa50444  sw          $a1, 0x444($sp)
    ctx->pc = 0x20d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 5));
label_20d300:
    // 0x20d300: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x20d300u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20d304:
    // 0x20d304: 0xafab0448  sw          $t3, 0x448($sp)
    ctx->pc = 0x20d304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 11));
label_20d308:
    // 0x20d308: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x20d308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_20d30c:
    // 0x20d30c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x20d30cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_20d310:
    // 0x20d310: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x20d310u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_20d314:
    // 0x20d314: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x20d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_20d318:
    // 0x20d318: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x20d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_20d31c:
    // 0x20d31c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x20d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_20d320:
    // 0x20d320: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x20d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
label_20d324:
    // 0x20d324: 0x8fa9004c  lw          $t1, 0x4C($sp)
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20d328:
    // 0x20d328: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x20d328u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_20d32c:
    // 0x20d32c: 0x78c70030  lq          $a3, 0x30($a2)
    ctx->pc = 0x20d32cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_20d330:
    // 0x20d330: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x20d330u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20d334:
    // 0x20d334: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x20d334u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_20d338:
    // 0x20d338: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20d33c:
    // 0x20d33c: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x20d33cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_20d340:
    // 0x20d340: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x20d340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_20d344:
    // 0x20d344: 0x244b0010  addiu       $t3, $v0, 0x10
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20d348:
    // 0x20d348: 0x8fa80054  lw          $t0, 0x54($sp)
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_20d34c:
    // 0x20d34c: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x20d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_20d350:
    // 0x20d350: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x20d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_20d354:
    // 0x20d354: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x20d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_20d358:
    // 0x20d358: 0x7fa700d0  sq          $a3, 0xD0($sp)
    ctx->pc = 0x20d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 7));
label_20d35c:
    // 0x20d35c: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x20d35cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
label_20d360:
    // 0x20d360: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x20d360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
label_20d364:
    // 0x20d364: 0xa4480006  sh          $t0, 0x6($v0)
    ctx->pc = 0x20d364u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 8));
label_20d368:
    // 0x20d368: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x20d368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_20d36c:
    // 0x20d36c: 0xac4a000c  sw          $t2, 0xC($v0)
    ctx->pc = 0x20d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 10));
label_20d370:
    // 0x20d370: 0xa04d0001  sb          $t5, 0x1($v0)
    ctx->pc = 0x20d370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 13));
label_20d374:
    // 0x20d374: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x20d374u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
label_20d378:
    // 0x20d378: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x20d378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_20d37c:
    // 0x20d37c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_20d380:
    // 0x20d380: 0xd8940030  lqc2        $vf20, 0x30($a0)
    ctx->pc = 0x20d380u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_20d384:
    // 0x20d384: 0xd8930040  lqc2        $vf19, 0x40($a0)
    ctx->pc = 0x20d384u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_20d388:
    // 0x20d388: 0xd8900050  lqc2        $vf16, 0x50($a0)
    ctx->pc = 0x20d388u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_20d38c:
    // 0x20d38c: 0xd8910060  lqc2        $vf17, 0x60($a0)
    ctx->pc = 0x20d38cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_20d390:
    // 0x20d390: 0xd8920070  lqc2        $vf18, 0x70($a0)
    ctx->pc = 0x20d390u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
label_20d394:
    // 0x20d394: 0xd8590030  lqc2        $vf25, 0x30($v0)
    ctx->pc = 0x20d394u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20d398:
    // 0x20d398: 0xd8580040  lqc2        $vf24, 0x40($v0)
    ctx->pc = 0x20d398u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_20d39c:
    // 0x20d39c: 0xd8550050  lqc2        $vf21, 0x50($v0)
    ctx->pc = 0x20d39cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_20d3a0:
    // 0x20d3a0: 0xd8560060  lqc2        $vf22, 0x60($v0)
    ctx->pc = 0x20d3a0u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
label_20d3a4:
    // 0x20d3a4: 0xd8570070  lqc2        $vf23, 0x70($v0)
    ctx->pc = 0x20d3a4u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
label_20d3a8:
    // 0x20d3a8: 0x8fa20444  lw          $v0, 0x444($sp)
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
label_20d3ac:
    // 0x20d3ac: 0x1c2182b  sltu        $v1, $t6, $v0
    ctx->pc = 0x20d3acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20d3b0:
    // 0x20d3b0: 0x106007a3  beqz        $v1, . + 4 + (0x7A3 << 2)
label_20d3b4:
    if (ctx->pc == 0x20D3B4u) {
        ctx->pc = 0x20D3B4u;
            // 0x20d3b4: 0x7bb00570  lq          $s0, 0x570($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->pc = 0x20D3B8u;
        goto label_20d3b8;
    }
    ctx->pc = 0x20D3B0u;
    {
        const bool branch_taken_0x20d3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D3B0u;
            // 0x20d3b4: 0x7bb00570  lq          $s0, 0x570($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3b0) {
            ctx->pc = 0x20F240u;
            goto label_20f240;
        }
    }
    ctx->pc = 0x20D3B8u;
label_20d3b8:
    // 0x20d3b8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x20d3b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_20d3bc:
    // 0x20d3bc: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x20d3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
label_20d3c0:
    // 0x20d3c0: 0x1040079a  beqz        $v0, . + 4 + (0x79A << 2)
label_20d3c4:
    if (ctx->pc == 0x20D3C4u) {
        ctx->pc = 0x20D3C4u;
            // 0x20d3c4: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x20D3C8u;
        goto label_20d3c8;
    }
    ctx->pc = 0x20D3C0u;
    {
        const bool branch_taken_0x20d3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D3C0u;
            // 0x20d3c4: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3c0) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20D3C8u;
label_20d3c8:
    // 0x20d3c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20d3cc:
    // 0x20d3cc: 0x2442e680  addiu       $v0, $v0, -0x1980
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
label_20d3d0:
    // 0x20d3d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d3d4:
    // 0x20d3d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d3d8:
    // 0x20d3d8: 0x800008  jr          $a0
label_20d3dc:
    if (ctx->pc == 0x20D3DCu) {
        ctx->pc = 0x20D3E0u;
        goto label_20d3e0;
    }
    ctx->pc = 0x20D3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D3E0u: goto label_20d3e0;
            case 0x20D3F4u: goto label_20d3f4;
            case 0x20D43Cu: goto label_20d43c;
            case 0x20D4FCu: goto label_20d4fc;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D790u: goto label_20d790;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D820u: goto label_20d820;
            case 0x20D864u: goto label_20d864;
            case 0x20D900u: goto label_20d900;
            case 0x20DA68u: goto label_20da68;
            case 0x20DB00u: goto label_20db00;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DE94u: goto label_20de94;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E8A4u: goto label_20e8a4;
            case 0x20EC0Cu: goto label_20ec0c;
            case 0x20ED38u: goto label_20ed38;
            case 0x20EDD8u: goto label_20edd8;
            case 0x20EF80u: goto label_20ef80;
            case 0x20F22Cu: goto label_20f22c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D3E0u;
label_20d3e0:
    // 0x20d3e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20d3e4:
    // 0x20d3e4: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x20d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
label_20d3e8:
    // 0x20d3e8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x20d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_20d3ec:
    // 0x20d3ec: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_20d3f0:
    if (ctx->pc == 0x20D3F0u) {
        ctx->pc = 0x20D3F0u;
            // 0x20d3f0: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x20D3F4u;
        goto label_20d3f4;
    }
    ctx->pc = 0x20D3ECu;
    {
        const bool branch_taken_0x20d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D3ECu;
            // 0x20d3f0: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3ec) {
            ctx->pc = 0x20D3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d3b8;
        }
    }
    ctx->pc = 0x20D3F4u;
label_20d3f4:
    // 0x20d3f4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20d3f8:
    // 0x20d3f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d3fc:
    // 0x20d3fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20d3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20d400:
    // 0x20d400: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x20d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_20d404:
    // 0x20d404: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x20d404u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_20d408:
    // 0x20d408: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x20d408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20d40c:
    // 0x20d40c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x20d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_20d410:
    // 0x20d410: 0x60f809  jalr        $v1
label_20d414:
    if (ctx->pc == 0x20D414u) {
        ctx->pc = 0x20D414u;
            // 0x20d414: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x20D418u;
        goto label_20d418;
    }
    ctx->pc = 0x20D410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D418u);
        ctx->pc = 0x20D414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D410u;
            // 0x20d414: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D418u; }
            if (ctx->pc != 0x20D418u) { return; }
        }
        }
    }
    ctx->pc = 0x20D418u;
label_20d418:
    // 0x20d418: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20d41c:
    // 0x20d41c: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x20d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_20d420:
    // 0x20d420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20d424:
    // 0x20d424: 0x34423500  ori         $v0, $v0, 0x3500
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13568);
label_20d428:
    // 0x20d428: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20d42c:
    // 0x20d42c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d430:
    // 0x20d430: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x20d430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
label_20d434:
    // 0x20d434: 0x1000077d  b           . + 4 + (0x77D << 2)
label_20d438:
    if (ctx->pc == 0x20D438u) {
        ctx->pc = 0x20D438u;
            // 0x20d438: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x20D43Cu;
        goto label_20d43c;
    }
    ctx->pc = 0x20D434u;
    {
        const bool branch_taken_0x20d434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D434u;
            // 0x20d438: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d434) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20D43Cu;
label_20d43c:
    // 0x20d43c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x20d43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d440:
    // 0x20d440: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20d444:
    // 0x20d444: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x20d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20d448:
    // 0x20d448: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20d44c:
    // 0x20d44c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x20d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20d450:
    // 0x20d450: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x20d450u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_20d454:
    // 0x20d454: 0xd8ad0010  lqc2        $vf13, 0x10($a1)
    ctx->pc = 0x20d454u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_20d458:
    // 0x20d458: 0xd8ae0020  lqc2        $vf14, 0x20($a1)
    ctx->pc = 0x20d458u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_20d45c:
    // 0x20d45c: 0x26480090  addiu       $t0, $s2, 0x90
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_20d460:
    // 0x20d460: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20d464:
    // 0x20d464: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x20d464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_20d468:
    // 0x20d468: 0xafb20464  sw          $s2, 0x464($sp)
    ctx->pc = 0x20d468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 18));
label_20d46c:
    // 0x20d46c: 0x0  nop
    ctx->pc = 0x20d46cu;
    // NOP
label_20d470:
    // 0x20d470: 0xd86f0000  lqc2        $vf15, 0x0($v1)
    ctx->pc = 0x20d470u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20d474:
    // 0x20d474: 0x4bef61bc  vmulax.xyzw $ACC, $vf12, $vf15x
    ctx->pc = 0x20d474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d478:
    // 0x20d478: 0x4bef68bd  vmadday.xyzw $ACC, $vf13, $vf15y
    ctx->pc = 0x20d478u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d47c:
    // 0x20d47c: 0x4bef73ca  vmaddz.xyzw $vf15, $vf14, $vf15z
    ctx->pc = 0x20d47cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d480:
    // 0x20d480: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20d480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20d484:
    // 0x20d484: 0xf84f0000  sqc2        $vf15, 0x0($v0)
    ctx->pc = 0x20d484u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[15]));
label_20d488:
    // 0x20d488: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_20d48c:
    // 0x20d48c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_20d490:
    if (ctx->pc == 0x20D490u) {
        ctx->pc = 0x20D490u;
            // 0x20d490: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x20D494u;
        goto label_20d494;
    }
    ctx->pc = 0x20D48Cu;
    {
        const bool branch_taken_0x20d48c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x20D490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D48Cu;
            // 0x20d490: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d48c) {
            ctx->pc = 0x20D470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d470;
        }
    }
    ctx->pc = 0x20D494u;
label_20d494:
    // 0x20d494: 0xd8a20030  lqc2        $vf2, 0x30($a1)
    ctx->pc = 0x20d494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_20d498:
    // 0x20d498: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x20d498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20d49c:
    // 0x20d49c: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x20d49cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d4a0:
    // 0x20d4a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20d4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20d4a4:
    // 0x20d4a4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x20d4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d4a8:
    // 0x20d4a8: 0x8fa20464  lw          $v0, 0x464($sp)
    ctx->pc = 0x20d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
label_20d4ac:
    // 0x20d4ac: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x20d4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_20d4b0:
    // 0x20d4b0: 0x8ce4003c  lw          $a0, 0x3C($a3)
    ctx->pc = 0x20d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
label_20d4b4:
    // 0x20d4b4: 0xd88c0000  lqc2        $vf12, 0x0($a0)
    ctx->pc = 0x20d4b4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20d4b8:
    // 0x20d4b8: 0xd88d0010  lqc2        $vf13, 0x10($a0)
    ctx->pc = 0x20d4b8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_20d4bc:
    // 0x20d4bc: 0xd88e0020  lqc2        $vf14, 0x20($a0)
    ctx->pc = 0x20d4bcu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_20d4c0:
    // 0x20d4c0: 0xd84f0000  lqc2        $vf15, 0x0($v0)
    ctx->pc = 0x20d4c0u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d4c4:
    // 0x20d4c4: 0x4bef61bc  vmulax.xyzw $ACC, $vf12, $vf15x
    ctx->pc = 0x20d4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d4c8:
    // 0x20d4c8: 0x4bef68bd  vmadday.xyzw $ACC, $vf13, $vf15y
    ctx->pc = 0x20d4c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d4cc:
    // 0x20d4cc: 0x4bef73ca  vmaddz.xyzw $vf15, $vf14, $vf15z
    ctx->pc = 0x20d4ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d4d0:
    // 0x20d4d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20d4d4:
    // 0x20d4d4: 0xf86f0000  sqc2        $vf15, 0x0($v1)
    ctx->pc = 0x20d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[15]));
label_20d4d8:
    // 0x20d4d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x20d4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_20d4dc:
    // 0x20d4dc: 0x1cc0fff8  bgtz        $a2, . + 4 + (-0x8 << 2)
label_20d4e0:
    if (ctx->pc == 0x20D4E0u) {
        ctx->pc = 0x20D4E0u;
            // 0x20d4e0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x20D4E4u;
        goto label_20d4e4;
    }
    ctx->pc = 0x20D4DCu;
    {
        const bool branch_taken_0x20d4dc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x20D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4DCu;
            // 0x20d4e0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4dc) {
            ctx->pc = 0x20D4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d4c0;
        }
    }
    ctx->pc = 0x20D4E4u;
label_20d4e4:
    // 0x20d4e4: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x20d4e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_20d4e8:
    // 0x20d4e8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x20d4e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20d4ec:
    // 0x20d4ec: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x20d4ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20d4f0:
    // 0x20d4f0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x20d4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d4f4:
    // 0x20d4f4: 0x1000074d  b           . + 4 + (0x74D << 2)
label_20d4f8:
    if (ctx->pc == 0x20D4F8u) {
        ctx->pc = 0x20D4F8u;
            // 0x20d4f8: 0xfba100d0  sqc2        $vf1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->pc = 0x20D4FCu;
        goto label_20d4fc;
    }
    ctx->pc = 0x20D4F4u;
    {
        const bool branch_taken_0x20d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4F4u;
            // 0x20d4f8: 0xfba100d0  sqc2        $vf1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4f4) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20D4FCu;
label_20d4fc:
    // 0x20d4fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20d500:
    // 0x20d500: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x20d500u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_20d504:
    // 0x20d504: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x20d504u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20d508:
    // 0x20d508: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x20d508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d50c:
    // 0x20d50c: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x20d50cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20d510:
    // 0x20d510: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x20d510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20d514:
    // 0x20d514: 0x4be321bc  vmulax.xyzw $ACC, $vf4, $vf3x
    ctx->pc = 0x20d514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d518:
    // 0x20d518: 0x4be310bd  vmadday.xyzw $ACC, $vf2, $vf3y
    ctx->pc = 0x20d518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d51c:
    // 0x20d51c: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x20d51cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d520:
    // 0x20d520: 0x4be028cb  vmaddw.xyzw $vf3, $vf5, $vf0w
    ctx->pc = 0x20d520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d524:
    // 0x20d524: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x20d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_20d528:
    // 0x20d528: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x20d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
label_20d52c:
    // 0x20d52c: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x20d52cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_20d530:
    // 0x20d530: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x20d530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20d534:
    // 0x20d534: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x20d534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_20d538:
    // 0x20d538: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x20d538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d53c:
    // 0x20d53c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x20d53cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20d540:
    // 0x20d540: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x20d540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20d544:
    // 0x20d544: 0x4be221bc  vmulax.xyzw $ACC, $vf4, $vf2x
    ctx->pc = 0x20d544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d548:
    // 0x20d548: 0x4be218bd  vmadday.xyzw $ACC, $vf3, $vf2y
    ctx->pc = 0x20d548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d54c:
    // 0x20d54c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x20d54cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d550:
    // 0x20d550: 0x4be0288b  vmaddw.xyzw $vf2, $vf5, $vf0w
    ctx->pc = 0x20d550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d554:
    // 0x20d554: 0x10000735  b           . + 4 + (0x735 << 2)
label_20d558:
    if (ctx->pc == 0x20D558u) {
        ctx->pc = 0x20D558u;
            // 0x20d558: 0xfba200d0  sqc2        $vf2, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->pc = 0x20D55Cu;
        goto label_20d55c;
    }
    ctx->pc = 0x20D554u;
    {
        const bool branch_taken_0x20d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D554u;
            // 0x20d558: 0xfba200d0  sqc2        $vf2, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d554) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20D55Cu;
label_20d55c:
    // 0x20d55c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x20d55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d560:
    // 0x20d560: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20d564:
    // 0x20d564: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20d568:
    // 0x20d568: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x20d568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20d56c:
    // 0x20d56c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20d570:
    // 0x20d570: 0xd84c0000  lqc2        $vf12, 0x0($v0)
    ctx->pc = 0x20d570u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d574:
    // 0x20d574: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x20d574u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20d578:
    // 0x20d578: 0xd84e0020  lqc2        $vf14, 0x20($v0)
    ctx->pc = 0x20d578u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20d57c:
    // 0x20d57c: 0x26480070  addiu       $t0, $s2, 0x70
    ctx->pc = 0x20d57cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_20d580:
    // 0x20d580: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x20d580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20d584:
    // 0x20d584: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x20d584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_20d588:
    // 0x20d588: 0xafb20460  sw          $s2, 0x460($sp)
    ctx->pc = 0x20d588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 18));
label_20d58c:
    // 0x20d58c: 0x0  nop
    ctx->pc = 0x20d58cu;
    // NOP
label_20d590:
    // 0x20d590: 0xd88f0000  lqc2        $vf15, 0x0($a0)
    ctx->pc = 0x20d590u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20d594:
    // 0x20d594: 0x4bef61bc  vmulax.xyzw $ACC, $vf12, $vf15x
    ctx->pc = 0x20d594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d598:
    // 0x20d598: 0x4bef68bd  vmadday.xyzw $ACC, $vf13, $vf15y
    ctx->pc = 0x20d598u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d59c:
    // 0x20d59c: 0x4bef73ca  vmaddz.xyzw $vf15, $vf14, $vf15z
    ctx->pc = 0x20d59cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d5a0:
    // 0x20d5a0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_20d5a4:
    // 0x20d5a4: 0xf86f0000  sqc2        $vf15, 0x0($v1)
    ctx->pc = 0x20d5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[15]));
label_20d5a8:
    // 0x20d5a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_20d5ac:
    // 0x20d5ac: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
label_20d5b0:
    if (ctx->pc == 0x20D5B0u) {
        ctx->pc = 0x20D5B0u;
            // 0x20d5b0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x20D5B4u;
        goto label_20d5b4;
    }
    ctx->pc = 0x20D5ACu;
    {
        const bool branch_taken_0x20d5ac = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x20D5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D5ACu;
            // 0x20d5b0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5ac) {
            ctx->pc = 0x20D590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d590;
        }
    }
    ctx->pc = 0x20D5B4u;
label_20d5b4:
    // 0x20d5b4: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x20d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
label_20d5b8:
    // 0x20d5b8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x20d5b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20d5bc:
    // 0x20d5bc: 0x8fa60460  lw          $a2, 0x460($sp)
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_20d5c0:
    // 0x20d5c0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20d5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20d5c4:
    // 0x20d5c4: 0xd84c0000  lqc2        $vf12, 0x0($v0)
    ctx->pc = 0x20d5c4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d5c8:
    // 0x20d5c8: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x20d5c8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20d5cc:
    // 0x20d5cc: 0xd84e0020  lqc2        $vf14, 0x20($v0)
    ctx->pc = 0x20d5ccu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20d5d0:
    // 0x20d5d0: 0xd8cf0000  lqc2        $vf15, 0x0($a2)
    ctx->pc = 0x20d5d0u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20d5d4:
    // 0x20d5d4: 0x4bef61bc  vmulax.xyzw $ACC, $vf12, $vf15x
    ctx->pc = 0x20d5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d5d8:
    // 0x20d5d8: 0x4bef68bd  vmadday.xyzw $ACC, $vf13, $vf15y
    ctx->pc = 0x20d5d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d5dc:
    // 0x20d5dc: 0x4bef73ca  vmaddz.xyzw $vf15, $vf14, $vf15z
    ctx->pc = 0x20d5dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d5e0:
    // 0x20d5e0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x20d5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_20d5e4:
    // 0x20d5e4: 0xf86f0000  sqc2        $vf15, 0x0($v1)
    ctx->pc = 0x20d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[15]));
label_20d5e8:
    // 0x20d5e8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20d5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_20d5ec:
    // 0x20d5ec: 0x1ce0fff8  bgtz        $a3, . + 4 + (-0x8 << 2)
label_20d5f0:
    if (ctx->pc == 0x20D5F0u) {
        ctx->pc = 0x20D5F0u;
            // 0x20d5f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x20D5F4u;
        goto label_20d5f4;
    }
    ctx->pc = 0x20D5ECu;
    {
        const bool branch_taken_0x20d5ec = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x20D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D5ECu;
            // 0x20d5f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5ec) {
            ctx->pc = 0x20D5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d5d0;
        }
    }
    ctx->pc = 0x20D5F4u;
label_20d5f4:
    // 0x20d5f4: 0x1000070d  b           . + 4 + (0x70D << 2)
label_20d5f8:
    if (ctx->pc == 0x20D5F8u) {
        ctx->pc = 0x20D5F8u;
            // 0x20d5f8: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D5FCu;
        goto label_20d5fc;
    }
    ctx->pc = 0x20D5F4u;
    {
        const bool branch_taken_0x20d5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D5F4u;
            // 0x20d5f8: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5f4) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20D5FCu;
label_20d5fc:
    // 0x20d5fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20d600:
    // 0x20d600: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x20d600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20d604:
    // 0x20d604: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x20d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
label_20d608:
    // 0x20d608: 0x26460002  addiu       $a2, $s2, 0x2
    ctx->pc = 0x20d608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_20d60c:
    // 0x20d60c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x20d60cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d610:
    // 0x20d610: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20d614:
    // 0x20d614: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x20d614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20d618:
    // 0x20d618: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x20d618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20d61c:
    // 0x20d61c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d620:
    // 0x20d620: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x20d620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d624:
    // 0x20d624: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x20d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d628:
    // 0x20d628: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x20d628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_20d62c:
    // 0x20d62c: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x20d62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_20d630:
    // 0x20d630: 0xd91b0000  lqc2        $vf27, 0x0($t0)
    ctx->pc = 0x20d630u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_20d634:
    // 0x20d634: 0xd8fc0000  lqc2        $vf28, 0x0($a3)
    ctx->pc = 0x20d634u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_20d638:
    // 0x20d638: 0x4bd3dfac  vsub.xyz    $vf30, $vf27, $vf19
    ctx->pc = 0x20d638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_20d63c:
    // 0x20d63c: 0x4bd8e7ec  vsub.xyz    $vf31, $vf28, $vf24
    ctx->pc = 0x20d63cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_20d640:
    // 0x20d640: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x20d640u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d644:
    // 0x20d644: 0x4bddf2fe  vopmula.xyz $ACC, $vf30, $vf29
    ctx->pc = 0x20d644u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[29]);
label_20d648:
    // 0x20d648: 0x4bdeefae  vopmsub.xyz $vf30, $vf29, $vf30
    ctx->pc = 0x20d648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[30]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d64c:
    // 0x20d64c: 0x4bdfeafe  vopmula.xyz $ACC, $vf29, $vf31
    ctx->pc = 0x20d64cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[31]);
label_20d650:
    // 0x20d650: 0x4bddffee  vopmsub.xyz $vf31, $vf31, $vf29
    ctx->pc = 0x20d650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[29]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d654:
    // 0x20d654: 0x4bdde86a  vmul.xyz    $vf1, $vf29, $vf29
    ctx->pc = 0x20d654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d658:
    // 0x20d658: 0x4bde81bc  vmulax.xyz  $ACC, $vf16, $vf30x
    ctx->pc = 0x20d658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d65c:
    // 0x20d65c: 0x4bde88bd  vmadday.xyz $ACC, $vf17, $vf30y
    ctx->pc = 0x20d65cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d660:
    // 0x20d660: 0x4bde978a  vmaddz.xyz  $vf30, $vf18, $vf30z
    ctx->pc = 0x20d660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d664:
    // 0x20d664: 0x4bdfa9bc  vmulax.xyz  $ACC, $vf21, $vf31x
    ctx->pc = 0x20d664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20d668:
    // 0x20d668: 0x4bdfb0bd  vmadday.xyz $ACC, $vf22, $vf31y
    ctx->pc = 0x20d668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d66c:
    // 0x20d66c: 0x4bdfbfca  vmaddz.xyz  $vf31, $vf23, $vf31z
    ctx->pc = 0x20d66cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d670:
    // 0x20d670: 0x4bf4f0ea  vmul.xyzw   $vf3, $vf30, $vf20
    ctx->pc = 0x20d670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20d674:
    // 0x20d674: 0x4bf9f92a  vmul.xyzw   $vf4, $vf31, $vf25
    ctx->pc = 0x20d674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20d678:
    // 0x20d678: 0x4bd409bf  vmulaw.xyz  $ACC, $vf1, $vf20w
    ctx->pc = 0x20d678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
label_20d67c:
    // 0x20d67c: 0x4bd908bf  vmaddaw.xyz $ACC, $vf1, $vf25w
    ctx->pc = 0x20d67cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20d680:
    // 0x20d680: 0x4bc3f2bd  vmadda.xyz  $ACC, $vf30, $vf3
    ctx->pc = 0x20d680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[3]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
label_20d684:
    // 0x20d684: 0x4bc4f969  vmadd.xyz   $vf5, $vf31, $vf4
    ctx->pc = 0x20d684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d688:
    // 0x20d688: 0x4bdbe06c  vsub.xyz    $vf1, $vf28, $vf27
    ctx->pc = 0x20d688u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d68c:
    // 0x20d68c: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x20d68cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_20d690:
    // 0x20d690: 0x48ab3000  qmtc2.ni    $t3, $vf6
    ctx->pc = 0x20d690u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_20d694:
    // 0x20d694: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x20d694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20d698:
    // 0x20d698: 0x4bdd086a  vmul.xyz    $vf1, $vf1, $vf29
    ctx->pc = 0x20d698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d69c:
    // 0x20d69c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x20d69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20d6a0:
    // 0x20d6a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x20d6a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d6a4:
    // 0x20d6a4: 0x4a2007ac  vsub.w      $vf30, $vf0, $vf0
    ctx->pc = 0x20d6a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_20d6a8:
    // 0x20d6a8: 0x4a0533bc  vdiv        $Q, $vf6x, $vf5x
    ctx->pc = 0x20d6a8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_20d6ac:
    // 0x20d6ac: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x20d6acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d6b0:
    // 0x20d6b0: 0x4a25f7c0  vaddx.w     $vf31, $vf30, $vf5x
    ctx->pc = 0x20d6b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_20d6b4:
    // 0x20d6b4: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x20d6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d6b8:
    // 0x20d6b8: 0x4a210758  vmulx.w     $vf29, $vf0, $vf1x
    ctx->pc = 0x20d6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_20d6bc:
    // 0x20d6bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x20d6bcu;
    // VWAITQ (Q already resolved in this runtime)
label_20d6c0:
    // 0x20d6c0: 0x4a20f7a0  vaddq.w     $vf30, $vf30, $Q
    ctx->pc = 0x20d6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_20d6c4:
    // 0x20d6c4: 0xf89f0020  sqc2        $vf31, 0x20($a0)
    ctx->pc = 0x20d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[31]));
label_20d6c8:
    // 0x20d6c8: 0xf89d0000  sqc2        $vf29, 0x0($a0)
    ctx->pc = 0x20d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[29]));
label_20d6cc:
    // 0x20d6cc: 0xf89e0010  sqc2        $vf30, 0x10($a0)
    ctx->pc = 0x20d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[30]));
label_20d6d0:
    // 0x20d6d0: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x20d6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
label_20d6d4:
    // 0x20d6d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20d6d8:
    // 0x20d6d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_20d6dc:
    // 0x20d6dc: 0x4a1ffd0  bgez        $a1, . + 4 + (-0x30 << 2)
label_20d6e0:
    if (ctx->pc == 0x20D6E0u) {
        ctx->pc = 0x20D6E0u;
            // 0x20d6e0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x20D6E4u;
        goto label_20d6e4;
    }
    ctx->pc = 0x20D6DCu;
    {
        const bool branch_taken_0x20d6dc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x20D6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6DCu;
            // 0x20d6e0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6dc) {
            ctx->pc = 0x20D620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d620;
        }
    }
    ctx->pc = 0x20D6E4u;
label_20d6e4:
    // 0x20d6e4: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20d6e8:
    // 0x20d6e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20d6e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20d6ec:
    // 0x20d6ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20d6f0:
    // 0x20d6f0: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20d6f4:
    // 0x20d6f4: 0x10000467  b           . + 4 + (0x467 << 2)
label_20d6f8:
    if (ctx->pc == 0x20D6F8u) {
        ctx->pc = 0x20D6F8u;
            // 0x20d6f8: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x20D6FCu;
        goto label_20d6fc;
    }
    ctx->pc = 0x20D6F4u;
    {
        const bool branch_taken_0x20d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6F4u;
            // 0x20d6f8: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6f4) {
            ctx->pc = 0x20E894u;
            goto label_20e894;
        }
    }
    ctx->pc = 0x20D6FCu;
label_20d6fc:
    // 0x20d6fc: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x20d6fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d700:
    // 0x20d700: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d704:
    // 0x20d704: 0xdba600d0  lqc2        $vf6, 0xD0($sp)
    ctx->pc = 0x20d704u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20d708:
    // 0x20d708: 0x4be6286c  vsub.xyzw   $vf1, $vf5, $vf6
    ctx->pc = 0x20d708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d70c:
    // 0x20d70c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20d70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d710:
    // 0x20d710: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x20d710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20d714:
    // 0x20d714: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x20d714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20d718:
    // 0x20d718: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x20d718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20d71c:
    // 0x20d71c: 0x4b0310ca  vmaddz.x    $vf3, $vf2, $vf3z
    ctx->pc = 0x20d71cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d720:
    // 0x20d720: 0x4a6303be  vrsqrt      $Q, $vf0w, $vf3x
    ctx->pc = 0x20d720u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_20d724:
    // 0x20d724: 0x4a0003bf  vwaitq
    ctx->pc = 0x20d724u;
    // VWAITQ (Q already resolved in this runtime)
label_20d728:
    // 0x20d728: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x20d728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20d72c:
    // 0x20d72c: 0x4b00191c  vmulq.x     $vf4, $vf3, $Q
    ctx->pc = 0x20d72cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20d730:
    // 0x20d730: 0x4a0002ff  vnop
    ctx->pc = 0x20d730u;
    // NOP operation, no action needed for VU0
label_20d734:
    // 0x20d734: 0xfba50100  sqc2        $vf5, 0x100($sp)
    ctx->pc = 0x20d734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[5]));
label_20d738:
    // 0x20d738: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x20d738u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
label_20d73c:
    // 0x20d73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d740:
    // 0x20d740: 0x0  nop
    ctx->pc = 0x20d740u;
    // NOP
label_20d744:
    // 0x20d744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20d744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d748:
    // 0x20d748: 0x0  nop
    ctx->pc = 0x20d748u;
    // NOP
label_20d74c:
    // 0x20d74c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_20d750:
    if (ctx->pc == 0x20D750u) {
        ctx->pc = 0x20D750u;
            // 0x20d750: 0xfba60110  sqc2        $vf6, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->pc = 0x20D754u;
        goto label_20d754;
    }
    ctx->pc = 0x20D74Cu;
    {
        const bool branch_taken_0x20d74c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D74Cu;
            // 0x20d750: 0xfba60110  sqc2        $vf6, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d74c) {
            ctx->pc = 0x20D75Cu;
            goto label_20d75c;
        }
    }
    ctx->pc = 0x20D754u;
label_20d754:
    // 0x20d754: 0x10000006  b           . + 4 + (0x6 << 2)
label_20d758:
    if (ctx->pc == 0x20D758u) {
        ctx->pc = 0x20D758u;
            // 0x20d758: 0xfba10120  sqc2        $vf1, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->pc = 0x20D75Cu;
        goto label_20d75c;
    }
    ctx->pc = 0x20D754u;
    {
        const bool branch_taken_0x20d754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D754u;
            // 0x20d758: 0xfba10120  sqc2        $vf1, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d754) {
            ctx->pc = 0x20D770u;
            goto label_20d770;
        }
    }
    ctx->pc = 0x20D75Cu;
label_20d75c:
    // 0x20d75c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20d760:
    // 0x20d760: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x20d760u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_20d764:
    // 0x20d764: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x20d764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
label_20d768:
    // 0x20d768: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20d768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20d76c:
    // 0x20d76c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x20d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_20d770:
    // 0x20d770: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x20d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20d774:
    // 0x20d774: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20d778:
    // 0x20d778: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20d778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20d77c:
    // 0x20d77c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x20d77cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_20d780:
    // 0x20d780: 0xc083e9a  jal         func_20FA68
label_20d784:
    if (ctx->pc == 0x20D784u) {
        ctx->pc = 0x20D784u;
            // 0x20d784: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x20D788u;
        goto label_20d788;
    }
    ctx->pc = 0x20D780u;
    SET_GPR_U32(ctx, 31, 0x20D788u);
    ctx->pc = 0x20D784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D780u;
            // 0x20d784: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA68u;
    if (runtime->hasFunction(0x20FA68u)) {
        auto targetFn = runtime->lookupFunction(0x20FA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D788u; }
        if (ctx->pc != 0x20D788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FA68_0x20fa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D788u; }
        if (ctx->pc != 0x20D788u) { return; }
    }
    ctx->pc = 0x20D788u;
label_20d788:
    // 0x20d788: 0x1000051a  b           . + 4 + (0x51A << 2)
label_20d78c:
    if (ctx->pc == 0x20D78Cu) {
        ctx->pc = 0x20D78Cu;
            // 0x20d78c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20D790u;
        goto label_20d790;
    }
    ctx->pc = 0x20D788u;
    {
        const bool branch_taken_0x20d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D788u;
            // 0x20d78c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d788) {
            ctx->pc = 0x20EBF4u;
            goto label_20ebf4;
        }
    }
    ctx->pc = 0x20D790u;
label_20d790:
    // 0x20d790: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x20d790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d794:
    // 0x20d794: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20d794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20d798:
    // 0x20d798: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x20d798u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20d79c:
    // 0x20d79c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d7a0:
    // 0x20d7a0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x20d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_20d7a4:
    // 0x20d7a4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20d7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20d7a8:
    // 0x20d7a8: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x20d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
label_20d7ac:
    // 0x20d7ac: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x20d7acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20d7b0:
    // 0x20d7b0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x20d7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_20d7b4:
    // 0x20d7b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20d7b8:
    // 0x20d7b8: 0x3a33821  addu        $a3, $sp, $v1
    ctx->pc = 0x20d7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_20d7bc:
    // 0x20d7bc: 0x78e200a0  lq          $v0, 0xA0($a3)
    ctx->pc = 0x20d7bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 160)));
label_20d7c0:
    // 0x20d7c0: 0xc083d5e  jal         func_20F578
label_20d7c4:
    if (ctx->pc == 0x20D7C4u) {
        ctx->pc = 0x20D7C4u;
            // 0x20d7c4: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->pc = 0x20D7C8u;
        goto label_20d7c8;
    }
    ctx->pc = 0x20D7C0u;
    SET_GPR_U32(ctx, 31, 0x20D7C8u);
    ctx->pc = 0x20D7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D7C0u;
            // 0x20d7c4: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F578u;
    if (runtime->hasFunction(0x20F578u)) {
        auto targetFn = runtime->lookupFunction(0x20F578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7C8u; }
        if (ctx->pc != 0x20D7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F578_0x20f578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7C8u; }
        if (ctx->pc != 0x20D7C8u) { return; }
    }
    ctx->pc = 0x20D7C8u;
label_20d7c8:
    // 0x20d7c8: 0x1000050a  b           . + 4 + (0x50A << 2)
label_20d7cc:
    if (ctx->pc == 0x20D7CCu) {
        ctx->pc = 0x20D7CCu;
            // 0x20d7cc: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20D7D0u;
        goto label_20d7d0;
    }
    ctx->pc = 0x20D7C8u;
    {
        const bool branch_taken_0x20d7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D7C8u;
            // 0x20d7cc: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7c8) {
            ctx->pc = 0x20EBF4u;
            goto label_20ebf4;
        }
    }
    ctx->pc = 0x20D7D0u;
label_20d7d0:
    // 0x20d7d0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x20d7d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d7d4:
    // 0x20d7d4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x20d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_20d7d8:
    // 0x20d7d8: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x20d7d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20d7dc:
    // 0x20d7dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d7e0:
    // 0x20d7e0: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x20d7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_20d7e4:
    // 0x20d7e4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20d7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20d7e8:
    // 0x20d7e8: 0x7fa70140  sq          $a3, 0x140($sp)
    ctx->pc = 0x20d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 7));
label_20d7ec:
    // 0x20d7ec: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x20d7ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20d7f0:
    // 0x20d7f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20d7f4:
    // 0x20d7f4: 0x3a33821  addu        $a3, $sp, $v1
    ctx->pc = 0x20d7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_20d7f8:
    // 0x20d7f8: 0x78e200a0  lq          $v0, 0xA0($a3)
    ctx->pc = 0x20d7f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 160)));
label_20d7fc:
    // 0x20d7fc: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x20d7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_20d800:
    // 0x20d800: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x20d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d804:
    // 0x20d804: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x20d804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_20d808:
    // 0x20d808: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x20d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d80c:
    // 0x20d80c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x20d80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_20d810:
    // 0x20d810: 0xc083ec0  jal         func_20FB00
label_20d814:
    if (ctx->pc == 0x20D814u) {
        ctx->pc = 0x20D814u;
            // 0x20d814: 0xe7a10164  swc1        $f1, 0x164($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->pc = 0x20D818u;
        goto label_20d818;
    }
    ctx->pc = 0x20D810u;
    SET_GPR_U32(ctx, 31, 0x20D818u);
    ctx->pc = 0x20D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D810u;
            // 0x20d814: 0xe7a10164  swc1        $f1, 0x164($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FB00u;
    if (runtime->hasFunction(0x20FB00u)) {
        auto targetFn = runtime->lookupFunction(0x20FB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D818u; }
        if (ctx->pc != 0x20D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FB00_0x20fb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D818u; }
        if (ctx->pc != 0x20D818u) { return; }
    }
    ctx->pc = 0x20D818u;
label_20d818:
    // 0x20d818: 0x100004f6  b           . + 4 + (0x4F6 << 2)
label_20d81c:
    if (ctx->pc == 0x20D81Cu) {
        ctx->pc = 0x20D81Cu;
            // 0x20d81c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20D820u;
        goto label_20d820;
    }
    ctx->pc = 0x20D818u;
    {
        const bool branch_taken_0x20d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D818u;
            // 0x20d81c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d818) {
            ctx->pc = 0x20EBF4u;
            goto label_20ebf4;
        }
    }
    ctx->pc = 0x20D820u;
label_20d820:
    // 0x20d820: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x20d820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d824:
    // 0x20d824: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20d824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20d828:
    // 0x20d828: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x20d828u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20d82c:
    // 0x20d82c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d830:
    // 0x20d830: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x20d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_20d834:
    // 0x20d834: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20d834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20d838:
    // 0x20d838: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x20d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_20d83c:
    // 0x20d83c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x20d83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20d840:
    // 0x20d840: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x20d840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d844:
    // 0x20d844: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x20d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_20d848:
    // 0x20d848: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x20d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d84c:
    // 0x20d84c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x20d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_20d850:
    // 0x20d850: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x20d850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_20d854:
    // 0x20d854: 0xc083da4  jal         func_20F690
label_20d858:
    if (ctx->pc == 0x20D858u) {
        ctx->pc = 0x20D858u;
            // 0x20d858: 0xe7a10134  swc1        $f1, 0x134($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->pc = 0x20D85Cu;
        goto label_20d85c;
    }
    ctx->pc = 0x20D854u;
    SET_GPR_U32(ctx, 31, 0x20D85Cu);
    ctx->pc = 0x20D858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D854u;
            // 0x20d858: 0xe7a10134  swc1        $f1, 0x134($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F690u;
    if (runtime->hasFunction(0x20F690u)) {
        auto targetFn = runtime->lookupFunction(0x20F690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D85Cu; }
        if (ctx->pc != 0x20D85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F690_0x20f690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D85Cu; }
        if (ctx->pc != 0x20D85Cu) { return; }
    }
    ctx->pc = 0x20D85Cu;
label_20d85c:
    // 0x20d85c: 0x100004e5  b           . + 4 + (0x4E5 << 2)
label_20d860:
    if (ctx->pc == 0x20D860u) {
        ctx->pc = 0x20D860u;
            // 0x20d860: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20D864u;
        goto label_20d864;
    }
    ctx->pc = 0x20D85Cu;
    {
        const bool branch_taken_0x20d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D85Cu;
            // 0x20d860: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d85c) {
            ctx->pc = 0x20EBF4u;
            goto label_20ebf4;
        }
    }
    ctx->pc = 0x20D864u;
label_20d864:
    // 0x20d864: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x20d864u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20d868:
    // 0x20d868: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20d86c:
    if (ctx->pc == 0x20D86Cu) {
        ctx->pc = 0x20D86Cu;
            // 0x20d86c: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x20D870u;
        goto label_20d870;
    }
    ctx->pc = 0x20D868u;
    {
        const bool branch_taken_0x20d868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D868u;
            // 0x20d86c: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d868) {
            ctx->pc = 0x20D8CCu;
            goto label_20d8cc;
        }
    }
    ctx->pc = 0x20D870u;
label_20d870:
    // 0x20d870: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x20d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d874:
    // 0x20d874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d878:
    // 0x20d878: 0x0  nop
    ctx->pc = 0x20d878u;
    // NOP
label_20d87c:
    // 0x20d87c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d880:
    // 0x20d880: 0x0  nop
    ctx->pc = 0x20d880u;
    // NOP
label_20d884:
    // 0x20d884: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_20d888:
    if (ctx->pc == 0x20D888u) {
        ctx->pc = 0x20D888u;
            // 0x20d888: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x20D88Cu;
        goto label_20d88c;
    }
    ctx->pc = 0x20D884u;
    {
        const bool branch_taken_0x20d884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D884u;
            // 0x20d888: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d884) {
            ctx->pc = 0x20D8CCu;
            goto label_20d8cc;
        }
    }
    ctx->pc = 0x20D88Cu;
label_20d88c:
    // 0x20d88c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x20d88cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d890:
    // 0x20d890: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x20d890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20d894:
    // 0x20d894: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d898:
    // 0x20d898: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x20d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_20d89c:
    // 0x20d89c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20d89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20d8a0:
    // 0x20d8a0: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x20d8a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20d8a4:
    // 0x20d8a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20d8a8:
    // 0x20d8a8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x20d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20d8ac:
    // 0x20d8ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20d8acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20d8b0:
    // 0x20d8b0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x20d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_20d8b4:
    // 0x20d8b4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x20d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d8b8:
    // 0x20d8b8: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x20d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
label_20d8bc:
    // 0x20d8bc: 0xc083d42  jal         func_20F508
label_20d8c0:
    if (ctx->pc == 0x20D8C0u) {
        ctx->pc = 0x20D8C0u;
            // 0x20d8c0: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->pc = 0x20D8C4u;
        goto label_20d8c4;
    }
    ctx->pc = 0x20D8BCu;
    SET_GPR_U32(ctx, 31, 0x20D8C4u);
    ctx->pc = 0x20D8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8BCu;
            // 0x20d8c0: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F508u;
    if (runtime->hasFunction(0x20F508u)) {
        auto targetFn = runtime->lookupFunction(0x20F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8C4u; }
        if (ctx->pc != 0x20D8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F508_0x20f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8C4u; }
        if (ctx->pc != 0x20D8C4u) { return; }
    }
    ctx->pc = 0x20D8C4u;
label_20d8c4:
    // 0x20d8c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_20d8c8:
    if (ctx->pc == 0x20D8C8u) {
        ctx->pc = 0x20D8C8u;
            // 0x20d8c8: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20D8CCu;
        goto label_20d8cc;
    }
    ctx->pc = 0x20D8C4u;
    {
        const bool branch_taken_0x20d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8C4u;
            // 0x20d8c8: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8c4) {
            ctx->pc = 0x20D8ECu;
            goto label_20d8ec;
        }
    }
    ctx->pc = 0x20D8CCu;
label_20d8cc:
    // 0x20d8cc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x20d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20d8d0:
    // 0x20d8d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d8d4:
    // 0x20d8d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20d8d8:
    // 0x20d8d8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20d8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_20d8dc:
    // 0x20d8dc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x20d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20d8e0:
    // 0x20d8e0: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x20d8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
label_20d8e4:
    // 0x20d8e4: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20d8e8:
    // 0x20d8e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20d8ec:
    // 0x20d8ec: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x20d8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_20d8f0:
    // 0x20d8f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20d8f4:
    // 0x20d8f4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20d8f8:
    // 0x20d8f8: 0x100003e7  b           . + 4 + (0x3E7 << 2)
label_20d8fc:
    if (ctx->pc == 0x20D8FCu) {
        ctx->pc = 0x20D8FCu;
            // 0x20d8fc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x20D900u;
        goto label_20d900;
    }
    ctx->pc = 0x20D8F8u;
    {
        const bool branch_taken_0x20d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8F8u;
            // 0x20d8fc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8f8) {
            ctx->pc = 0x20E898u;
            goto label_20e898;
        }
    }
    ctx->pc = 0x20D900u;
label_20d900:
    // 0x20d900: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x20d900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20d904:
    // 0x20d904: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x20d904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20d908:
    // 0x20d908: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x20d908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_20d90c:
    // 0x20d90c: 0x86440006  lh          $a0, 0x6($s2)
    ctx->pc = 0x20d90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_20d910:
    // 0x20d910: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20d914:
    // 0x20d914: 0xa2b821  addu        $s7, $a1, $v0
    ctx->pc = 0x20d914u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20d918:
    // 0x20d918: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_20d91c:
    if (ctx->pc == 0x20D91Cu) {
        ctx->pc = 0x20D91Cu;
            // 0x20d91c: 0xa4a021  addu        $s4, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x20D920u;
        goto label_20d920;
    }
    ctx->pc = 0x20D918u;
    {
        const bool branch_taken_0x20d918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D918u;
            // 0x20d91c: 0xa4a021  addu        $s4, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d918) {
            ctx->pc = 0x20DA34u;
            goto label_20da34;
        }
    }
    ctx->pc = 0x20D920u;
label_20d920:
    // 0x20d920: 0x8e55000c  lw          $s5, 0xC($s2)
    ctx->pc = 0x20d920u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20d924:
    // 0x20d924: 0x52a00044  beql        $s5, $zero, . + 4 + (0x44 << 2)
label_20d928:
    if (ctx->pc == 0x20D928u) {
        ctx->pc = 0x20D928u;
            // 0x20d928: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x20D92Cu;
        goto label_20d92c;
    }
    ctx->pc = 0x20D924u;
    {
        const bool branch_taken_0x20d924 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d924) {
            ctx->pc = 0x20D928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D924u;
            // 0x20d928: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DA38u;
            goto label_20da38;
        }
    }
    ctx->pc = 0x20D92Cu;
label_20d92c:
    // 0x20d92c: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x20d92cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_20d930:
    // 0x20d930: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_20d934:
    if (ctx->pc == 0x20D934u) {
        ctx->pc = 0x20D934u;
            // 0x20d934: 0xafa00108  sw          $zero, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
        ctx->pc = 0x20D938u;
        goto label_20d938;
    }
    ctx->pc = 0x20D930u;
    {
        const bool branch_taken_0x20d930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d930) {
            ctx->pc = 0x20D934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D930u;
            // 0x20d934: 0xafa00108  sw          $zero, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D944u;
            goto label_20d944;
        }
    }
    ctx->pc = 0x20D938u;
label_20d938:
    // 0x20d938: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d93c:
    // 0x20d93c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x20d93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_20d940:
    // 0x20d940: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x20d940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_20d944:
    // 0x20d944: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x20d944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20d948:
    // 0x20d948: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x20d948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_20d94c:
    // 0x20d94c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x20d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20d950:
    // 0x20d950: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20d950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d954:
    // 0x20d954: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20d954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d958:
    // 0x20d958: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x20d958u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20d95c:
    // 0x20d95c: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x20d95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20d960:
    // 0x20d960: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20d960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20d964:
    // 0x20d964: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20d964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d968:
    // 0x20d968: 0xc084a66  jal         func_212998
label_20d96c:
    if (ctx->pc == 0x20D96Cu) {
        ctx->pc = 0x20D96Cu;
            // 0x20d96c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->pc = 0x20D970u;
        goto label_20d970;
    }
    ctx->pc = 0x20D968u;
    SET_GPR_U32(ctx, 31, 0x20D970u);
    ctx->pc = 0x20D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D968u;
            // 0x20d96c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212998u;
    if (runtime->hasFunction(0x212998u)) {
        auto targetFn = runtime->lookupFunction(0x212998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D970u; }
        if (ctx->pc != 0x20D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212998_0x212998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D970u; }
        if (ctx->pc != 0x20D970u) { return; }
    }
    ctx->pc = 0x20D970u;
label_20d970:
    // 0x20d970: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x20d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20d974:
    // 0x20d974: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x20d974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_20d978:
    // 0x20d978: 0xafbd0104  sw          $sp, 0x104($sp)
    ctx->pc = 0x20d978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 29));
label_20d97c:
    // 0x20d97c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20d980:
    // 0x20d980: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x20d980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20d984:
    // 0x20d984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d988:
    // 0x20d988: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x20d988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20d98c:
    // 0x20d98c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x20d98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_20d990:
    // 0x20d990: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x20d990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_20d994:
    // 0x20d994: 0xb3a3010f  sdl         $v1, 0x10F($sp)
    ctx->pc = 0x20d994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20d998:
    // 0x20d998: 0xb7a30108  sdr         $v1, 0x108($sp)
    ctx->pc = 0x20d998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20d99c:
    // 0x20d99c: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x20d99cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20d9a0:
    // 0x20d9a0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x20d9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d9a4:
    // 0x20d9a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d9a8:
    // 0x20d9a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20d9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20d9ac:
    // 0x20d9ac: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x20d9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_20d9b0:
    // 0x20d9b0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x20d9b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20d9b4:
    // 0x20d9b4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x20d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d9b8:
    // 0x20d9b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20d9bc:
    // 0x20d9bc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x20d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20d9c0:
    // 0x20d9c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20d9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20d9c4:
    // 0x20d9c4: 0x4bc120aa  vmul.xyz    $vf2, $vf4, $vf1
    ctx->pc = 0x20d9c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20d9c8:
    // 0x20d9c8: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x20d9c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20d9cc:
    // 0x20d9cc: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20d9ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20d9d0:
    // 0x20d9d0: 0x4b02188a  vmaddz.x    $vf2, $vf3, $vf2z
    ctx->pc = 0x20d9d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20d9d4:
    // 0x20d9d4: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x20d9d4u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
label_20d9d8:
    // 0x20d9d8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x20d9d8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20d9dc:
    // 0x20d9dc: 0x0  nop
    ctx->pc = 0x20d9dcu;
    // NOP
label_20d9e0:
    // 0x20d9e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20d9e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20d9e4:
    // 0x20d9e4: 0xc0849c2  jal         func_212708
label_20d9e8:
    if (ctx->pc == 0x20D9E8u) {
        ctx->pc = 0x20D9E8u;
            // 0x20d9e8: 0xe7a10114  swc1        $f1, 0x114($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->pc = 0x20D9ECu;
        goto label_20d9ec;
    }
    ctx->pc = 0x20D9E4u;
    SET_GPR_U32(ctx, 31, 0x20D9ECu);
    ctx->pc = 0x20D9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9E4u;
            // 0x20d9e8: 0xe7a10114  swc1        $f1, 0x114($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x212708u;
    if (runtime->hasFunction(0x212708u)) {
        auto targetFn = runtime->lookupFunction(0x212708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9ECu; }
        if (ctx->pc != 0x20D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212708_0x212708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9ECu; }
        if (ctx->pc != 0x20D9ECu) { return; }
    }
    ctx->pc = 0x20D9ECu;
label_20d9ec:
    // 0x20d9ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20d9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d9f0:
    // 0x20d9f0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x20d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_20d9f4:
    // 0x20d9f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20d9f8:
    // 0x20d9f8: 0xc084a4c  jal         func_212930
label_20d9fc:
    if (ctx->pc == 0x20D9FCu) {
        ctx->pc = 0x20D9FCu;
            // 0x20d9fc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DA00u;
        goto label_20da00;
    }
    ctx->pc = 0x20D9F8u;
    SET_GPR_U32(ctx, 31, 0x20DA00u);
    ctx->pc = 0x20D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9F8u;
            // 0x20d9fc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212930u;
    if (runtime->hasFunction(0x212930u)) {
        auto targetFn = runtime->lookupFunction(0x212930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DA00u; }
        if (ctx->pc != 0x20DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212930_0x212930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DA00u; }
        if (ctx->pc != 0x20DA00u) { return; }
    }
    ctx->pc = 0x20DA00u;
label_20da00:
    // 0x20da00: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x20da00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20da04:
    // 0x20da04: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x20da04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20da08:
    // 0x20da08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20da08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20da0c:
    // 0x20da0c: 0x0  nop
    ctx->pc = 0x20da0cu;
    // NOP
label_20da10:
    // 0x20da10: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_20da14:
    if (ctx->pc == 0x20DA14u) {
        ctx->pc = 0x20DA14u;
            // 0x20da14: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->pc = 0x20DA18u;
        goto label_20da18;
    }
    ctx->pc = 0x20DA10u;
    {
        const bool branch_taken_0x20da10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20da10) {
            ctx->pc = 0x20DA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA10u;
            // 0x20da14: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DA28u;
            goto label_20da28;
        }
    }
    ctx->pc = 0x20DA18u;
label_20da18:
    // 0x20da18: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x20da18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_20da1c:
    // 0x20da1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_20da20:
    if (ctx->pc == 0x20DA20u) {
        ctx->pc = 0x20DA20u;
            // 0x20da20: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20DA24u;
        goto label_20da24;
    }
    ctx->pc = 0x20DA1Cu;
    {
        const bool branch_taken_0x20da1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA1Cu;
            // 0x20da20: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da1c) {
            ctx->pc = 0x20DA54u;
            goto label_20da54;
        }
    }
    ctx->pc = 0x20DA24u;
label_20da24:
    // 0x20da24: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x20da24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_20da28:
    // 0x20da28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20da2c:
    // 0x20da2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_20da30:
    if (ctx->pc == 0x20DA30u) {
        ctx->pc = 0x20DA30u;
            // 0x20da30: 0xa2e20000  sb          $v0, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20DA34u;
        goto label_20da34;
    }
    ctx->pc = 0x20DA2Cu;
    {
        const bool branch_taken_0x20da2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA2Cu;
            // 0x20da30: 0xa2e20000  sb          $v0, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da2c) {
            ctx->pc = 0x20DA50u;
            goto label_20da50;
        }
    }
    ctx->pc = 0x20DA34u;
label_20da34:
    // 0x20da34: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x20da34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20da38:
    // 0x20da38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20da3c:
    // 0x20da3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20da40:
    // 0x20da40: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20da40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_20da44:
    // 0x20da44: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x20da44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20da48:
    // 0x20da48: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x20da48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
label_20da4c:
    // 0x20da4c: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20da50:
    // 0x20da50: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20da54:
    // 0x20da54: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x20da54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20da58:
    // 0x20da58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20da5c:
    // 0x20da5c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20da60:
    // 0x20da60: 0x1000038d  b           . + 4 + (0x38D << 2)
label_20da64:
    if (ctx->pc == 0x20DA64u) {
        ctx->pc = 0x20DA64u;
            // 0x20da64: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x20DA68u;
        goto label_20da68;
    }
    ctx->pc = 0x20DA60u;
    {
        const bool branch_taken_0x20da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA60u;
            // 0x20da64: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da60) {
            ctx->pc = 0x20E898u;
            goto label_20e898;
        }
    }
    ctx->pc = 0x20DA68u;
label_20da68:
    // 0x20da68: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x20da68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20da6c:
    // 0x20da6c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20da6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20da70:
    // 0x20da70: 0x24a5e6f0  addiu       $a1, $a1, -0x1910
    ctx->pc = 0x20da70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960880));
label_20da74:
    // 0x20da74: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x20da74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20da78:
    // 0x20da78: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20da7c:
    // 0x20da7c: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_20da80:
    // 0x20da80: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x20da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_20da84:
    // 0x20da84: 0x90710001  lbu         $s1, 0x1($v1)
    ctx->pc = 0x20da84u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_20da88:
    // 0x20da88: 0x78820060  lq          $v0, 0x60($a0)
    ctx->pc = 0x20da88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_20da8c:
    // 0x20da8c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x20da8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20da90:
    // 0x20da90: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x20da90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_20da94:
    // 0x20da94: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x20da94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_20da98:
    // 0x20da98: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x20da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_20da9c:
    // 0x20da9c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20daa0:
    // 0x20daa0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20daa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20daa4:
    // 0x20daa4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20daa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20daa8:
    // 0x20daa8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x20daa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_20daac:
    // 0x20daac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20daacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20dab0:
    // 0x20dab0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x20dab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_20dab4:
    // 0x20dab4: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x20dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_20dab8:
    // 0x20dab8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x20dab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20dabc:
    // 0x20dabc: 0xc083e78  jal         func_20F9E0
label_20dac0:
    if (ctx->pc == 0x20DAC0u) {
        ctx->pc = 0x20DAC0u;
            // 0x20dac0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->pc = 0x20DAC4u;
        goto label_20dac4;
    }
    ctx->pc = 0x20DABCu;
    SET_GPR_U32(ctx, 31, 0x20DAC4u);
    ctx->pc = 0x20DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DABCu;
            // 0x20dac0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DAC4u; }
        if (ctx->pc != 0x20DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F9E0_0x20f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DAC4u; }
        if (ctx->pc != 0x20DAC4u) { return; }
    }
    ctx->pc = 0x20DAC4u;
label_20dac4:
    // 0x20dac4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x20dac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20dac8:
    // 0x20dac8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20dacc:
    // 0x20dacc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20daccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20dad0:
    // 0x20dad0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20dad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20dad4:
    // 0x20dad4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x20dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_20dad8:
    // 0x20dad8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x20dad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_20dadc:
    // 0x20dadc: 0x4be001bc  vmulax.xyzw $ACC, $vf0, $vf0x
    ctx->pc = 0x20dadcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20dae0:
    // 0x20dae0: 0x4be0084f  vmsubw.xyzw $vf1, $vf1, $vf0w
    ctx->pc = 0x20dae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20dae4:
    // 0x20dae4: 0xc083e78  jal         func_20F9E0
label_20dae8:
    if (ctx->pc == 0x20DAE8u) {
        ctx->pc = 0x20DAE8u;
            // 0x20dae8: 0xfba10110  sqc2        $vf1, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->pc = 0x20DAECu;
        goto label_20daec;
    }
    ctx->pc = 0x20DAE4u;
    SET_GPR_U32(ctx, 31, 0x20DAECu);
    ctx->pc = 0x20DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DAE4u;
            // 0x20dae8: 0xfba10110  sqc2        $vf1, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DAECu; }
        if (ctx->pc != 0x20DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F9E0_0x20f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DAECu; }
        if (ctx->pc != 0x20DAECu) { return; }
    }
    ctx->pc = 0x20DAECu;
label_20daec:
    // 0x20daec: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x20daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20daf0:
    // 0x20daf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20daf4:
    // 0x20daf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20daf8:
    // 0x20daf8: 0x10000441  b           . + 4 + (0x441 << 2)
label_20dafc:
    if (ctx->pc == 0x20DAFCu) {
        ctx->pc = 0x20DAFCu;
            // 0x20dafc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x20DB00u;
        goto label_20db00;
    }
    ctx->pc = 0x20DAF8u;
    {
        const bool branch_taken_0x20daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DAF8u;
            // 0x20dafc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20daf8) {
            ctx->pc = 0x20EC00u;
            goto label_20ec00;
        }
    }
    ctx->pc = 0x20DB00u;
label_20db00:
    // 0x20db00: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x20db00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20db04:
    // 0x20db04: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x20db04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20db08:
    // 0x20db08: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x20db08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20db0c:
    // 0x20db0c: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x20db0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20db10:
    // 0x20db10: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20db14:
    // 0x20db14: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20db14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20db18:
    // 0x20db18: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_20db1c:
    if (ctx->pc == 0x20DB1Cu) {
        ctx->pc = 0x20DB1Cu;
            // 0x20db1c: 0x26570004  addiu       $s7, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x20DB20u;
        goto label_20db20;
    }
    ctx->pc = 0x20DB18u;
    {
        const bool branch_taken_0x20db18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB18u;
            // 0x20db1c: 0x26570004  addiu       $s7, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db18) {
            ctx->pc = 0x20DB9Cu;
            goto label_20db9c;
        }
    }
    ctx->pc = 0x20DB20u;
label_20db20:
    // 0x20db20: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20db24:
    // 0x20db24: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x20db24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20db28:
    // 0x20db28: 0x2453e6f0  addiu       $s3, $v0, -0x1910
    ctx->pc = 0x20db28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
label_20db2c:
    // 0x20db2c: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x20db2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20db30:
    // 0x20db30: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x20db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_20db34:
    // 0x20db34: 0x0  nop
    ctx->pc = 0x20db34u;
    // NOP
label_20db38:
    // 0x20db38: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x20db38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20db3c:
    // 0x20db3c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x20db3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20db40:
    // 0x20db40: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x20db40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_20db44:
    // 0x20db44: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x20db44u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20db48:
    // 0x20db48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20db4c:
    // 0x20db4c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x20db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_20db50:
    // 0x20db50: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x20db50u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_20db54:
    // 0x20db54: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20db54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20db58:
    // 0x20db58: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x20db58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_20db5c:
    // 0x20db5c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x20db5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_20db60:
    // 0x20db60: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20db64:
    // 0x20db64: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x20db64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_20db68:
    // 0x20db68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20db68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20db6c:
    // 0x20db6c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x20db6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_20db70:
    // 0x20db70: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x20db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_20db74:
    // 0x20db74: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x20db74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_20db78:
    // 0x20db78: 0xc083e78  jal         func_20F9E0
label_20db7c:
    if (ctx->pc == 0x20DB7Cu) {
        ctx->pc = 0x20DB7Cu;
            // 0x20db7c: 0x7fa30120  sq          $v1, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
        ctx->pc = 0x20DB80u;
        goto label_20db80;
    }
    ctx->pc = 0x20DB78u;
    SET_GPR_U32(ctx, 31, 0x20DB80u);
    ctx->pc = 0x20DB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB78u;
            // 0x20db7c: 0x7fa30120  sq          $v1, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F9E0u;
    if (runtime->hasFunction(0x20F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x20F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DB80u; }
        if (ctx->pc != 0x20DB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F9E0_0x20f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DB80u; }
        if (ctx->pc != 0x20DB80u) { return; }
    }
    ctx->pc = 0x20DB80u;
label_20db80:
    // 0x20db80: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x20db80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20db84:
    // 0x20db84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20db84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20db88:
    // 0x20db88: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x20db88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20db8c:
    // 0x20db8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20db90:
    // 0x20db90: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20db90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20db94:
    // 0x20db94: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_20db98:
    if (ctx->pc == 0x20DB98u) {
        ctx->pc = 0x20DB98u;
            // 0x20db98: 0xb31821  addu        $v1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->pc = 0x20DB9Cu;
        goto label_20db9c;
    }
    ctx->pc = 0x20DB94u;
    {
        const bool branch_taken_0x20db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB94u;
            // 0x20db98: 0xb31821  addu        $v1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db94) {
            ctx->pc = 0x20DB38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20db38;
        }
    }
    ctx->pc = 0x20DB9Cu;
label_20db9c:
    // 0x20db9c: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x20db9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
label_20dba0:
    // 0x20dba0: 0x10000142  b           . + 4 + (0x142 << 2)
label_20dba4:
    if (ctx->pc == 0x20DBA4u) {
        ctx->pc = 0x20DBA4u;
            // 0x20dba4: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DBA8u;
        goto label_20dba8;
    }
    ctx->pc = 0x20DBA0u;
    {
        const bool branch_taken_0x20dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBA0u;
            // 0x20dba4: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dba0) {
            ctx->pc = 0x20E0ACu;
            goto label_20e0ac;
        }
    }
    ctx->pc = 0x20DBA8u;
label_20dba8:
    // 0x20dba8: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x20dba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20dbac:
    // 0x20dbac: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x20dbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20dbb0:
    // 0x20dbb0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_20dbb4:
    if (ctx->pc == 0x20DBB4u) {
        ctx->pc = 0x20DBB4u;
            // 0x20dbb4: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x20DBB8u;
        goto label_20dbb8;
    }
    ctx->pc = 0x20DBB0u;
    {
        const bool branch_taken_0x20dbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBB0u;
            // 0x20dbb4: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbb0) {
            ctx->pc = 0x20DD30u;
            goto label_20dd30;
        }
    }
    ctx->pc = 0x20DBB8u;
label_20dbb8:
    // 0x20dbb8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x20dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dbbc:
    // 0x20dbbc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20dbc0:
    // 0x20dbc0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x20dbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20dbc4:
    // 0x20dbc4: 0x2442e6f0  addiu       $v0, $v0, -0x1910
    ctx->pc = 0x20dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
label_20dbc8:
    // 0x20dbc8: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x20dbc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20dbcc:
    // 0x20dbcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20dbccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20dbd0:
    // 0x20dbd0: 0x8fab0468  lw          $t3, 0x468($sp)
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20dbd4:
    // 0x20dbd4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x20dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20dbd8:
    // 0x20dbd8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x20dbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20dbdc:
    // 0x20dbdc: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x20dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_20dbe0:
    // 0x20dbe0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x20dbe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20dbe4:
    // 0x20dbe4: 0xe561001c  swc1        $f1, 0x1C($t3)
    ctx->pc = 0x20dbe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
label_20dbe8:
    // 0x20dbe8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x20dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_20dbec:
    // 0x20dbec: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x20dbecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_20dbf0:
    // 0x20dbf0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x20dbf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20dbf4:
    // 0x20dbf4: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x20dbf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_20dbf8:
    // 0x20dbf8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x20dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_20dbfc:
    // 0x20dbfc: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x20dbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
label_20dc00:
    // 0x20dc00: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x20dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20dc04:
    // 0x20dc04: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x20dc04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20dc08:
    // 0x20dc08: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x20dc08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20dc0c:
    // 0x20dc0c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x20dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dc10:
    // 0x20dc10: 0x4bc209aa  vmul.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x20dc10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20dc14:
    // 0x20dc14: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x20dc14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dc18:
    // 0x20dc18: 0x4b06303d  vadday.x    $ACC, $vf6, $vf6y
    ctx->pc = 0x20dc18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20dc1c:
    // 0x20dc1c: 0x4b06198a  vmaddz.x    $vf6, $vf3, $vf6z
    ctx->pc = 0x20dc1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20dc20:
    // 0x20dc20: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x20dc20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_20dc24:
    // 0x20dc24: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x20dc24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
label_20dc28:
    // 0x20dc28: 0xe5600010  swc1        $f0, 0x10($t3)
    ctx->pc = 0x20dc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
label_20dc2c:
    // 0x20dc2c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x20dc2cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
label_20dc30:
    // 0x20dc30: 0x4bc1206e  vopmsub.xyz $vf1, $vf4, $vf1
    ctx->pc = 0x20dc30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20dc34:
    // 0x20dc34: 0x4bc2096a  vmul.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x20dc34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20dc38:
    // 0x20dc38: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x20dc38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dc3c:
    // 0x20dc3c: 0x4b05283d  vadday.x    $ACC, $vf5, $vf5y
    ctx->pc = 0x20dc3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20dc40:
    // 0x20dc40: 0x4b05194a  vmaddz.x    $vf5, $vf3, $vf5z
    ctx->pc = 0x20dc40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20dc44:
    // 0x20dc44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20dc48:
    // 0x20dc48: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dc4c:
    // 0x20dc4c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x20dc4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_20dc50:
    // 0x20dc50: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20dc50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20dc54:
    // 0x20dc54: 0xc0a31ec  jal         func_28C7B0
label_20dc58:
    if (ctx->pc == 0x20DC58u) {
        ctx->pc = 0x20DC58u;
            // 0x20dc58: 0xe5600014  swc1        $f0, 0x14($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20), bits); }
        ctx->pc = 0x20DC5Cu;
        goto label_20dc5c;
    }
    ctx->pc = 0x20DC54u;
    SET_GPR_U32(ctx, 31, 0x20DC5Cu);
    ctx->pc = 0x20DC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC54u;
            // 0x20dc58: 0xe5600014  swc1        $f0, 0x14($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C7B0u;
    if (runtime->hasFunction(0x28C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x28C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC5Cu; }
        if (ctx->pc != 0x20DC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C7B0_0x28c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC5Cu; }
        if (ctx->pc != 0x20DC5Cu) { return; }
    }
    ctx->pc = 0x20DC5Cu;
label_20dc5c:
    // 0x20dc5c: 0x8fa40468  lw          $a0, 0x468($sp)
    ctx->pc = 0x20dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20dc60:
    // 0x20dc60: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x20dc60u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_20dc64:
    // 0x20dc64: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20dc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_20dc68:
    // 0x20dc68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20dc68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20dc6c:
    // 0x20dc6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20dc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20dc70:
    // 0x20dc70: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x20dc70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_20dc74:
    // 0x20dc74: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x20dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20dc78:
    // 0x20dc78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dc7c:
    // 0x20dc7c: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x20dc7cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
label_20dc80:
    // 0x20dc80: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x20dc80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_20dc84:
    // 0x20dc84: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x20dc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20dc88:
    // 0x20dc88: 0x0  nop
    ctx->pc = 0x20dc88u;
    // NOP
label_20dc8c:
    // 0x20dc8c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_20dc90:
    if (ctx->pc == 0x20DC90u) {
        ctx->pc = 0x20DC90u;
            // 0x20dc90: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x20DC94u;
        goto label_20dc94;
    }
    ctx->pc = 0x20DC8Cu;
    {
        const bool branch_taken_0x20dc8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC8Cu;
            // 0x20dc90: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc8c) {
            ctx->pc = 0x20DCC8u;
            goto label_20dcc8;
        }
    }
    ctx->pc = 0x20DC94u;
label_20dc94:
    // 0x20dc94: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x20dc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_20dc98:
    // 0x20dc98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20dc98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20dc9c:
    // 0x20dc9c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x20dc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_20dca0:
    // 0x20dca0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x20dca0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_20dca4:
    // 0x20dca4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x20dca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_20dca8:
    // 0x20dca8: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x20dca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_20dcac:
    // 0x20dcac: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x20dcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20dcb0:
    // 0x20dcb0: 0x0  nop
    ctx->pc = 0x20dcb0u;
    // NOP
label_20dcb4:
    // 0x20dcb4: 0x0  nop
    ctx->pc = 0x20dcb4u;
    // NOP
label_20dcb8:
    // 0x20dcb8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_20dcbc:
    if (ctx->pc == 0x20DCBCu) {
        ctx->pc = 0x20DCBCu;
            // 0x20dcbc: 0x46050840  add.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->pc = 0x20DCC0u;
        goto label_20dcc0;
    }
    ctx->pc = 0x20DCB8u;
    {
        const bool branch_taken_0x20dcb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dcb8) {
            ctx->pc = 0x20DCBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCB8u;
            // 0x20dcbc: 0x46050840  add.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DCA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20dca8;
        }
    }
    ctx->pc = 0x20DCC0u;
label_20dcc0:
    // 0x20dcc0: 0x8fa50468  lw          $a1, 0x468($sp)
    ctx->pc = 0x20dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20dcc4:
    // 0x20dcc4: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x20dcc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_20dcc8:
    // 0x20dcc8: 0x8fa70468  lw          $a3, 0x468($sp)
    ctx->pc = 0x20dcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20dccc:
    // 0x20dccc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20dcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_20dcd0:
    // 0x20dcd0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20dcd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20dcd4:
    // 0x20dcd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20dcd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20dcd8:
    // 0x20dcd8: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x20dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20dcdc:
    // 0x20dcdc: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x20dcdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_20dce0:
    // 0x20dce0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20dce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20dce4:
    // 0x20dce4: 0x0  nop
    ctx->pc = 0x20dce4u;
    // NOP
label_20dce8:
    // 0x20dce8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_20dcec:
    if (ctx->pc == 0x20DCECu) {
        ctx->pc = 0x20DCECu;
            // 0x20dcec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DCF0u;
        goto label_20dcf0;
    }
    ctx->pc = 0x20DCE8u;
    {
        const bool branch_taken_0x20dce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCE8u;
            // 0x20dcec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dce8) {
            ctx->pc = 0x20DD38u;
            goto label_20dd38;
        }
    }
    ctx->pc = 0x20DCF0u;
label_20dcf0:
    // 0x20dcf0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x20dcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_20dcf4:
    // 0x20dcf4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20dcf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20dcf8:
    // 0x20dcf8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20dcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20dcfc:
    // 0x20dcfc: 0x0  nop
    ctx->pc = 0x20dcfcu;
    // NOP
label_20dd00:
    // 0x20dd00: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x20dd00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_20dd04:
    // 0x20dd04: 0x0  nop
    ctx->pc = 0x20dd04u;
    // NOP
label_20dd08:
    // 0x20dd08: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x20dd08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_20dd0c:
    // 0x20dd0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20dd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20dd10:
    // 0x20dd10: 0x0  nop
    ctx->pc = 0x20dd10u;
    // NOP
label_20dd14:
    // 0x20dd14: 0x0  nop
    ctx->pc = 0x20dd14u;
    // NOP
label_20dd18:
    // 0x20dd18: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_20dd1c:
    if (ctx->pc == 0x20DD1Cu) {
        ctx->pc = 0x20DD1Cu;
            // 0x20dd1c: 0x46040841  sub.s       $f1, $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
        ctx->pc = 0x20DD20u;
        goto label_20dd20;
    }
    ctx->pc = 0x20DD18u;
    {
        const bool branch_taken_0x20dd18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dd18) {
            ctx->pc = 0x20DD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD18u;
            // 0x20dd1c: 0x46040841  sub.s       $f1, $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20dd08;
        }
    }
    ctx->pc = 0x20DD20u;
label_20dd20:
    // 0x20dd20: 0x8fa80468  lw          $t0, 0x468($sp)
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20dd24:
    // 0x20dd24: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x20dd24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_20dd28:
    // 0x20dd28: 0x10000003  b           . + 4 + (0x3 << 2)
label_20dd2c:
    if (ctx->pc == 0x20DD2Cu) {
        ctx->pc = 0x20DD2Cu;
            // 0x20dd2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DD30u;
        goto label_20dd30;
    }
    ctx->pc = 0x20DD28u;
    {
        const bool branch_taken_0x20dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD28u;
            // 0x20dd2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd28) {
            ctx->pc = 0x20DD38u;
            goto label_20dd38;
        }
    }
    ctx->pc = 0x20DD30u;
label_20dd30:
    // 0x20dd30: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x20dd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20dd34:
    // 0x20dd34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dd38:
    // 0x20dd38: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20dd3c:
    // 0x20dd3c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_20dd40:
    if (ctx->pc == 0x20DD40u) {
        ctx->pc = 0x20DD40u;
            // 0x20dd40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DD44u;
        goto label_20dd44;
    }
    ctx->pc = 0x20DD3Cu;
    {
        const bool branch_taken_0x20dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD3Cu;
            // 0x20dd40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd3c) {
            ctx->pc = 0x20DE74u;
            goto label_20de74;
        }
    }
    ctx->pc = 0x20DD44u;
label_20dd44:
    // 0x20dd44: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x20dd44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20dd48:
    // 0x20dd48: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x20dd48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_20dd4c:
    // 0x20dd4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20dd50:
    // 0x20dd50: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x20dd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
label_20dd54:
    // 0x20dd54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20dd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20dd58:
    // 0x20dd58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20dd5c:
    // 0x20dd5c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x20dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_20dd60:
    // 0x20dd60: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x20dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_20dd64:
    // 0x20dd64: 0xd8850060  lqc2        $vf5, 0x60($a0)
    ctx->pc = 0x20dd64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_20dd68:
    // 0x20dd68: 0xd8a400a0  lqc2        $vf4, 0xA0($a1)
    ctx->pc = 0x20dd68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 160)));
label_20dd6c:
    // 0x20dd6c: 0x4bc42afe  vopmula.xyz $ACC, $vf5, $vf4
    ctx->pc = 0x20dd6cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]);
label_20dd70:
    // 0x20dd70: 0x4bc5206e  vopmsub.xyz $vf1, $vf4, $vf5
    ctx->pc = 0x20dd70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20dd74:
    // 0x20dd74: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x20dd74u;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
label_20dd78:
    // 0x20dd78: 0x4bc630aa  vmul.xyz    $vf2, $vf6, $vf6
    ctx->pc = 0x20dd78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20dd7c:
    // 0x20dd7c: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x20dd7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dd80:
    // 0x20dd80: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20dd80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20dd84:
    // 0x20dd84: 0x4b02188a  vmaddz.x    $vf2, $vf3, $vf2z
    ctx->pc = 0x20dd84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20dd88:
    // 0x20dd88: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x20dd88u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_20dd8c:
    // 0x20dd8c: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x20dd8cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20dd90:
    // 0x20dd90: 0x0  nop
    ctx->pc = 0x20dd90u;
    // NOP
label_20dd94:
    // 0x20dd94: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20dd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20dd98:
    // 0x20dd98: 0x0  nop
    ctx->pc = 0x20dd98u;
    // NOP
label_20dd9c:
    // 0x20dd9c: 0x45010033  bc1t        . + 4 + (0x33 << 2)
label_20dda0:
    if (ctx->pc == 0x20DDA0u) {
        ctx->pc = 0x20DDA0u;
            // 0x20dda0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20DDA4u;
        goto label_20dda4;
    }
    ctx->pc = 0x20DD9Cu;
    {
        const bool branch_taken_0x20dd9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD9Cu;
            // 0x20dda0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd9c) {
            ctx->pc = 0x20DE6Cu;
            goto label_20de6c;
        }
    }
    ctx->pc = 0x20DDA4u;
label_20dda4:
    // 0x20dda4: 0x4bc428aa  vmul.xyz    $vf2, $vf5, $vf4
    ctx->pc = 0x20dda4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20dda8:
    // 0x20dda8: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w
    ctx->pc = 0x20dda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20ddac:
    // 0x20ddac: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20ddacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20ddb0:
    // 0x20ddb0: 0x4b02088a  vmaddz.x    $vf2, $vf1, $vf2z
    ctx->pc = 0x20ddb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20ddb4:
    // 0x20ddb4: 0x92500005  lbu         $s0, 0x5($s2)
    ctx->pc = 0x20ddb4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_20ddb8:
    // 0x20ddb8: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x20ddb8u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
label_20ddbc:
    // 0x20ddbc: 0xfba604b0  sqc2        $vf6, 0x4B0($sp)
    ctx->pc = 0x20ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[6]));
label_20ddc0:
    // 0x20ddc0: 0x448a6800  mtc1        $t2, $f13
    ctx->pc = 0x20ddc0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20ddc4:
    // 0x20ddc4: 0x46140304  c1          0x140304
    ctx->pc = 0x20ddc4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_20ddc8:
    // 0x20ddc8: 0xc0a31ec  jal         func_28C7B0
label_20ddcc:
    if (ctx->pc == 0x20DDCCu) {
        ctx->pc = 0x20DDCCu;
            // 0x20ddcc: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x20DDD0u;
        goto label_20ddd0;
    }
    ctx->pc = 0x20DDC8u;
    SET_GPR_U32(ctx, 31, 0x20DDD0u);
    ctx->pc = 0x20DDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDC8u;
            // 0x20ddcc: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C7B0u;
    if (runtime->hasFunction(0x28C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x28C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDD0u; }
        if (ctx->pc != 0x20DDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C7B0_0x28c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDD0u; }
        if (ctx->pc != 0x20DDD0u) { return; }
    }
    ctx->pc = 0x20DDD0u;
label_20ddd0:
    // 0x20ddd0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20ddd4:
    // 0x20ddd4: 0x24a5e650  addiu       $a1, $a1, -0x19B0
    ctx->pc = 0x20ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960720));
label_20ddd8:
    // 0x20ddd8: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x20ddd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_20dddc:
    // 0x20dddc: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x20dddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_20dde0:
    // 0x20dde0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_20dde4:
    // 0x20dde4: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x20dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20dde8:
    // 0x20dde8: 0x2484e658  addiu       $a0, $a0, -0x19A8
    ctx->pc = 0x20dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960728));
label_20ddec:
    // 0x20ddec: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x20ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20ddf0:
    // 0x20ddf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ddf4:
    // 0x20ddf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20ddf8:
    // 0x20ddf8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x20ddf8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20ddfc:
    // 0x20ddfc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20de00:
    // 0x20de00: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x20de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20de04:
    // 0x20de04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20de08:
    // 0x20de08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20de0c:
    // 0x20de0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20de0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20de10:
    // 0x20de10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20de14:
    // 0x20de14: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x20de14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_20de18:
    // 0x20de18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20de1c:
    // 0x20de1c: 0x46140016  rsqrt.s     $f0, $f0, $f20
    ctx->pc = 0x20de1cu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
label_20de20:
    // 0x20de20: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x20de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20de24:
    // 0x20de24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20de24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20de28:
    // 0x20de28: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x20de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20de2c:
    // 0x20de2c: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x20de2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_20de30:
    // 0x20de30: 0xdba604b0  lqc2        $vf6, 0x4B0($sp)
    ctx->pc = 0x20de30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_20de34:
    // 0x20de34: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x20de34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_20de38:
    // 0x20de38: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20de38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_20de3c:
    // 0x20de3c: 0x4be13198  vmulx.xyzw  $vf6, $vf6, $vf1x
    ctx->pc = 0x20de3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20de40:
    // 0x20de40: 0x8fa30468  lw          $v1, 0x468($sp)
    ctx->pc = 0x20de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20de44:
    // 0x20de44: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x20de44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_20de48:
    // 0x20de48: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x20de48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_20de4c:
    // 0x20de4c: 0x4be23098  vmulx.xyzw  $vf2, $vf6, $vf2x
    ctx->pc = 0x20de4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20de50:
    // 0x20de50: 0xe4640018  swc1        $f4, 0x18($v1)
    ctx->pc = 0x20de50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_20de54:
    // 0x20de54: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x20de54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_20de58:
    // 0x20de58: 0xe462001c  swc1        $f2, 0x1C($v1)
    ctx->pc = 0x20de58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_20de5c:
    // 0x20de5c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20de60:
    // 0x20de60: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x20de60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_20de64:
    // 0x20de64: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x20de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20de68:
    // 0x20de68: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x20de68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_20de6c:
    // 0x20de6c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20de70:
    // 0x20de70: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x20de70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_20de74:
    // 0x20de74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20de78:
    // 0x20de78: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20de7c:
    // 0x20de7c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_20de80:
    // 0x20de80: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x20de80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_20de84:
    // 0x20de84: 0x108004bf  beqz        $a0, . + 4 + (0x4BF << 2)
label_20de88:
    if (ctx->pc == 0x20DE88u) {
        ctx->pc = 0x20DE88u;
            // 0x20de88: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x20DE8Cu;
        goto label_20de8c;
    }
    ctx->pc = 0x20DE84u;
    {
        const bool branch_taken_0x20de84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE84u;
            // 0x20de88: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de84) {
            ctx->pc = 0x20F184u;
            goto label_20f184;
        }
    }
    ctx->pc = 0x20DE8Cu;
label_20de8c:
    // 0x20de8c: 0x100004e1  b           . + 4 + (0x4E1 << 2)
label_20de90:
    if (ctx->pc == 0x20DE90u) {
        ctx->pc = 0x20DE90u;
            // 0x20de90: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x20DE94u;
        goto label_20de94;
    }
    ctx->pc = 0x20DE8Cu;
    {
        const bool branch_taken_0x20de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE8Cu;
            // 0x20de90: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de8c) {
            ctx->pc = 0x20F214u;
            goto label_20f214;
        }
    }
    ctx->pc = 0x20DE94u;
label_20de94:
    // 0x20de94: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x20de94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20de98:
    // 0x20de98: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20de98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20de9c:
    // 0x20de9c: 0x8fa40468  lw          $a0, 0x468($sp)
    ctx->pc = 0x20de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20dea0:
    // 0x20dea0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x20dea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20dea4:
    // 0x20dea4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20dea8:
    // 0x20dea8: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x20dea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20deac:
    // 0x20deac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20deb0:
    // 0x20deb0: 0x3c0124e6  lui         $at, 0x24E6
    ctx->pc = 0x20deb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9446 << 16));
label_20deb4:
    // 0x20deb4: 0x34219595  ori         $at, $at, 0x9595
    ctx->pc = 0x20deb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38293);
label_20deb8:
    // 0x20deb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20deb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20debc:
    // 0x20debc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20debcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20dec0:
    // 0x20dec0: 0x24900018  addiu       $s0, $a0, 0x18
    ctx->pc = 0x20dec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_20dec4:
    // 0x20dec4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x20dec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20dec8:
    // 0x20dec8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_20decc:
    // 0x20decc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ded0:
    // 0x20ded0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x20ded0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_20ded4:
    // 0x20ded4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x20ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ded8:
    // 0x20ded8: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x20ded8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_20dedc:
    // 0x20dedc: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x20dedcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20dee0:
    // 0x20dee0: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x20dee0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_20dee4:
    // 0x20dee4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20dee8:
    // 0x20dee8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x20dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20deec:
    // 0x20deec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20deecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20def0:
    // 0x20def0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20def4:
    // 0x20def4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x20def4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20def8:
    // 0x20def8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20def8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20defc:
    // 0x20defc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x20defcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_20df00:
    // 0x20df00: 0x4be119e8  vadd.xyzw   $vf7, $vf3, $vf1
    ctx->pc = 0x20df00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_20df04:
    // 0x20df04: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20df04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20df08:
    // 0x20df08: 0x4bc7386a  vmul.xyz    $vf1, $vf7, $vf7
    ctx->pc = 0x20df08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20df0c:
    // 0x20df0c: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x20df0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20df10:
    // 0x20df10: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x20df10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20df14:
    // 0x20df14: 0x4a0103bd  .word       0x4A0103BD                   # vsqrt       $Q, $vf1x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x20df14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_20df18:
    // 0x20df18: 0x4a0003bf  vwaitq
    ctx->pc = 0x20df18u;
    // VWAITQ (Q already resolved in this runtime)
label_20df1c:
    // 0x20df1c: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x20df1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20df20:
    // 0x20df20: 0x4a0002ff  vnop
    ctx->pc = 0x20df20u;
    // NOP operation, no action needed for VU0
label_20df24:
    // 0x20df24: 0x4a0002ff  vnop
    ctx->pc = 0x20df24u;
    // NOP operation, no action needed for VU0
label_20df28:
    // 0x20df28: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x20df28u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_20df2c:
    // 0x20df2c: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x20df2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20df30:
    // 0x20df30: 0x0  nop
    ctx->pc = 0x20df30u;
    // NOP
label_20df34:
    // 0x20df34: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x20df34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20df38:
    // 0x20df38: 0x0  nop
    ctx->pc = 0x20df38u;
    // NOP
label_20df3c:
    // 0x20df3c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_20df40:
    if (ctx->pc == 0x20DF40u) {
        ctx->pc = 0x20DF40u;
            // 0x20df40: 0x4be71b3c  vmove.xyzw  $vf7, $vf3 (Delay Slot)
        ctx->vu0_vf[7] = ctx->vu0_vf[3];
        ctx->pc = 0x20DF44u;
        goto label_20df44;
    }
    ctx->pc = 0x20DF3Cu;
    {
        const bool branch_taken_0x20df3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20df3c) {
            ctx->pc = 0x20DF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DF3Cu;
            // 0x20df40: 0x4be71b3c  vmove.xyzw  $vf7, $vf3 (Delay Slot)
        ctx->vu0_vf[7] = ctx->vu0_vf[3];
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DF70u;
            goto label_20df70;
        }
    }
    ctx->pc = 0x20DF44u;
label_20df44:
    // 0x20df44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20df44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20df48:
    // 0x20df48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20df48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20df4c:
    // 0x20df4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20df4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20df50:
    // 0x20df50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20df50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20df54:
    // 0x20df54: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x20df54u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_20df58:
    // 0x20df58: 0x46011d02  mul.s       $f20, $f3, $f1
    ctx->pc = 0x20df58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_20df5c:
    // 0x20df5c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x20df5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_20df60:
    // 0x20df60: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x20df60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_20df64:
    // 0x20df64: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x20df64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_20df68:
    // 0x20df68: 0x10000003  b           . + 4 + (0x3 << 2)
label_20df6c:
    if (ctx->pc == 0x20DF6Cu) {
        ctx->pc = 0x20DF6Cu;
            // 0x20df6c: 0xfba70100  sqc2        $vf7, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->pc = 0x20DF70u;
        goto label_20df70;
    }
    ctx->pc = 0x20DF68u;
    {
        const bool branch_taken_0x20df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DF68u;
            // 0x20df6c: 0xfba70100  sqc2        $vf7, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df68) {
            ctx->pc = 0x20DF78u;
            goto label_20df78;
        }
    }
    ctx->pc = 0x20DF70u;
label_20df70:
    // 0x20df70: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20df70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20df74:
    // 0x20df74: 0xfba70100  sqc2        $vf7, 0x100($sp)
    ctx->pc = 0x20df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[7]));
label_20df78:
    // 0x20df78: 0x27a20370  addiu       $v0, $sp, 0x370
    ctx->pc = 0x20df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_20df7c:
    // 0x20df7c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x20df7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20df80:
    // 0x20df80: 0x4bc23afe  vopmula.xyz $ACC, $vf7, $vf2
    ctx->pc = 0x20df80u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]);
label_20df84:
    // 0x20df84: 0x4bc710ae  vopmsub.xyz $vf2, $vf2, $vf7
    ctx->pc = 0x20df84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20df88:
    // 0x20df88: 0x4bc712fe  vopmula.xyz $ACC, $vf2, $vf7
    ctx->pc = 0x20df88u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]);
label_20df8c:
    // 0x20df8c: 0x4bc2392e  vopmsub.xyz $vf4, $vf7, $vf2
    ctx->pc = 0x20df8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20df90:
    // 0x20df90: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x20df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
label_20df94:
    // 0x20df94: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x20df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
label_20df98:
    // 0x20df98: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x20df98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_20df9c:
    // 0x20df9c: 0x4bc138ea  vmul.xyz    $vf3, $vf7, $vf1
    ctx->pc = 0x20df9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dfa0:
    // 0x20dfa0: 0x4bc111aa  vmul.xyz    $vf6, $vf2, $vf1
    ctx->pc = 0x20dfa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20dfa4:
    // 0x20dfa4: 0x4bc1216a  vmul.xyz    $vf5, $vf4, $vf1
    ctx->pc = 0x20dfa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20dfa8:
    // 0x20dfa8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x20dfa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dfac:
    // 0x20dfac: 0x4a863180  vaddx.y     $vf6, $vf6, $vf6x
    ctx->pc = 0x20dfacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20dfb0:
    // 0x20dfb0: 0x4a452941  vaddy.z     $vf5, $vf5, $vf5y
    ctx->pc = 0x20dfb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20dfb4:
    // 0x20dfb4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x20dfb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dfb8:
    // 0x20dfb8: 0x4a8630c2  vaddz.y     $vf3, $vf6, $vf6z
    ctx->pc = 0x20dfb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dfbc:
    // 0x20dfbc: 0x4a4528c0  vaddx.z     $vf3, $vf5, $vf5x
    ctx->pc = 0x20dfbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20dfc0:
    // 0x20dfc0: 0xfba30370  sqc2        $vf3, 0x370($sp)
    ctx->pc = 0x20dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[3]));
label_20dfc4:
    // 0x20dfc4: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x20dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20dfc8:
    // 0x20dfc8: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x20dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20dfcc:
    // 0x20dfcc: 0xc0a31ec  jal         func_28C7B0
label_20dfd0:
    if (ctx->pc == 0x20DFD0u) {
        ctx->pc = 0x20DFD0u;
            // 0x20dfd0: 0xfba704c0  sqc2        $vf7, 0x4C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->pc = 0x20DFD4u;
        goto label_20dfd4;
    }
    ctx->pc = 0x20DFCCu;
    SET_GPR_U32(ctx, 31, 0x20DFD4u);
    ctx->pc = 0x20DFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DFCCu;
            // 0x20dfd0: 0xfba704c0  sqc2        $vf7, 0x4C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C7B0u;
    if (runtime->hasFunction(0x28C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x28C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DFD4u; }
        if (ctx->pc != 0x20DFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C7B0_0x28c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DFD4u; }
        if (ctx->pc != 0x20DFD4u) { return; }
    }
    ctx->pc = 0x20DFD4u;
label_20dfd4:
    // 0x20dfd4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x20dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20dfd8:
    // 0x20dfd8: 0xdba704c0  lqc2        $vf7, 0x4C0($sp)
    ctx->pc = 0x20dfd8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_20dfdc:
    // 0x20dfdc: 0x8fa90468  lw          $t1, 0x468($sp)
    ctx->pc = 0x20dfdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20dfe0:
    // 0x20dfe0: 0xf9270000  sqc2        $vf7, 0x0($t1)
    ctx->pc = 0x20dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_20dfe4:
    // 0x20dfe4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x20dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20dfe8:
    // 0x20dfe8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x20dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dfec:
    // 0x20dfec: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x20dfecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_20dff0:
    // 0x20dff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20dff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20dff4:
    // 0x20dff4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20dff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_20dff8:
    // 0x20dff8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20dff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_20dffc:
    // 0x20dffc: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x20dffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_20e000:
    // 0x20e000: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x20e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e004:
    // 0x20e004: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20e008:
    // 0x20e008: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_20e00c:
    // 0x20e00c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20e010:
    // 0x20e010: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x20e010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_20e014:
    // 0x20e014: 0x1000045b  b           . + 4 + (0x45B << 2)
label_20e018:
    if (ctx->pc == 0x20E018u) {
        ctx->pc = 0x20E018u;
            // 0x20e018: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x20E01Cu;
        goto label_20e01c;
    }
    ctx->pc = 0x20E014u;
    {
        const bool branch_taken_0x20e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E014u;
            // 0x20e018: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e014) {
            ctx->pc = 0x20F184u;
            goto label_20f184;
        }
    }
    ctx->pc = 0x20E01Cu;
label_20e01c:
    // 0x20e01c: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x20e01cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20e020:
    // 0x20e020: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x20e020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e024:
    // 0x20e024: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20e028:
    if (ctx->pc == 0x20E028u) {
        ctx->pc = 0x20E028u;
            // 0x20e028: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20E02Cu;
        goto label_20e02c;
    }
    ctx->pc = 0x20E024u;
    {
        const bool branch_taken_0x20e024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E024u;
            // 0x20e028: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e024) {
            ctx->pc = 0x20E088u;
            goto label_20e088;
        }
    }
    ctx->pc = 0x20E02Cu;
label_20e02c:
    // 0x20e02c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x20e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e030:
    // 0x20e030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e034:
    // 0x20e034: 0x0  nop
    ctx->pc = 0x20e034u;
    // NOP
label_20e038:
    // 0x20e038: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20e038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e03c:
    // 0x20e03c: 0x0  nop
    ctx->pc = 0x20e03cu;
    // NOP
label_20e040:
    // 0x20e040: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_20e044:
    if (ctx->pc == 0x20E044u) {
        ctx->pc = 0x20E044u;
            // 0x20e044: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x20E048u;
        goto label_20e048;
    }
    ctx->pc = 0x20E040u;
    {
        const bool branch_taken_0x20e040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e040) {
            ctx->pc = 0x20E044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E040u;
            // 0x20e044: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E08Cu;
            goto label_20e08c;
        }
    }
    ctx->pc = 0x20E048u;
label_20e048:
    // 0x20e048: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x20e048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20e04c:
    // 0x20e04c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20e050:
    // 0x20e050: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e054:
    // 0x20e054: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20e054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20e058:
    // 0x20e058: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e05c:
    // 0x20e05c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20e05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20e060:
    // 0x20e060: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x20e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_20e064:
    // 0x20e064: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x20e064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_20e068:
    // 0x20e068: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e06c:
    // 0x20e06c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x20e06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_20e070:
    // 0x20e070: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x20e070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_20e074:
    // 0x20e074: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x20e074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
label_20e078:
    // 0x20e078: 0xc083d1a  jal         func_20F468
label_20e07c:
    if (ctx->pc == 0x20E07Cu) {
        ctx->pc = 0x20E07Cu;
            // 0x20e07c: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x20E080u;
        goto label_20e080;
    }
    ctx->pc = 0x20E078u;
    SET_GPR_U32(ctx, 31, 0x20E080u);
    ctx->pc = 0x20E07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E078u;
            // 0x20e07c: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F468u;
    if (runtime->hasFunction(0x20F468u)) {
        auto targetFn = runtime->lookupFunction(0x20F468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E080u; }
        if (ctx->pc != 0x20E080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F468_0x20f468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E080u; }
        if (ctx->pc != 0x20E080u) { return; }
    }
    ctx->pc = 0x20E080u;
label_20e080:
    // 0x20e080: 0x10000009  b           . + 4 + (0x9 << 2)
label_20e084:
    if (ctx->pc == 0x20E084u) {
        ctx->pc = 0x20E084u;
            // 0x20e084: 0x92020004  lbu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x20E088u;
        goto label_20e088;
    }
    ctx->pc = 0x20E080u;
    {
        const bool branch_taken_0x20e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E080u;
            // 0x20e084: 0x92020004  lbu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e080) {
            ctx->pc = 0x20E0A8u;
            goto label_20e0a8;
        }
    }
    ctx->pc = 0x20E088u;
label_20e088:
    // 0x20e088: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e08c:
    // 0x20e08c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20e090:
    // 0x20e090: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x20e090u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_20e094:
    // 0x20e094: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20e094u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_20e098:
    // 0x20e098: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20e09c:
    // 0x20e09c: 0xa0450004  sb          $a1, 0x4($v0)
    ctx->pc = 0x20e09cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 5));
label_20e0a0:
    // 0x20e0a0: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20e0a4:
    // 0x20e0a4: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x20e0a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_20e0a8:
    // 0x20e0a8: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x20e0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_20e0ac:
    // 0x20e0ac: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e0b0:
    // 0x20e0b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20e0b4:
    // 0x20e0b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20e0b8:
    // 0x20e0b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e0bc:
    // 0x20e0bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20e0c0:
    // 0x20e0c0: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x20e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_20e0c4:
    // 0x20e0c4: 0x10000459  b           . + 4 + (0x459 << 2)
label_20e0c8:
    if (ctx->pc == 0x20E0C8u) {
        ctx->pc = 0x20E0C8u;
            // 0x20e0c8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x20E0CCu;
        goto label_20e0cc;
    }
    ctx->pc = 0x20E0C4u;
    {
        const bool branch_taken_0x20e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E0C4u;
            // 0x20e0c8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0c4) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20E0CCu;
label_20e0cc:
    // 0x20e0cc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x20e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e0d0:
    // 0x20e0d0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x20e0d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20e0d4:
    // 0x20e0d4: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x20e0d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_20e0d8:
    // 0x20e0d8: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x20e0d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e0dc:
    // 0x20e0dc: 0x86440006  lh          $a0, 0x6($s2)
    ctx->pc = 0x20e0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_20e0e0:
    // 0x20e0e0: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x20e0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20e0e4:
    // 0x20e0e4: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x20e0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_20e0e8:
    // 0x20e0e8: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x20e0e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e0ec:
    // 0x20e0ec: 0x10c000a2  beqz        $a2, . + 4 + (0xA2 << 2)
label_20e0f0:
    if (ctx->pc == 0x20E0F0u) {
        ctx->pc = 0x20E0F0u;
            // 0x20e0f0: 0x44a821  addu        $s5, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x20E0F4u;
        goto label_20e0f4;
    }
    ctx->pc = 0x20E0ECu;
    {
        const bool branch_taken_0x20e0ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E0ECu;
            // 0x20e0f0: 0x44a821  addu        $s5, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0ec) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20E0F4u;
label_20e0f4:
    // 0x20e0f4: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x20e0f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20e0f8:
    // 0x20e0f8: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_20e0fc:
    if (ctx->pc == 0x20E0FCu) {
        ctx->pc = 0x20E0FCu;
            // 0x20e0fc: 0x264a0014  addiu       $t2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x20E100u;
        goto label_20e100;
    }
    ctx->pc = 0x20E0F8u;
    {
        const bool branch_taken_0x20e0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E0F8u;
            // 0x20e0fc: 0x264a0014  addiu       $t2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0f8) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20E100u;
label_20e100:
    // 0x20e100: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x20e100u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20e104:
    // 0x20e104: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20e108:
    // 0x20e108: 0xafaa046c  sw          $t2, 0x46C($sp)
    ctx->pc = 0x20e108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 10));
label_20e10c:
    // 0x20e10c: 0x2442e6f0  addiu       $v0, $v0, -0x1910
    ctx->pc = 0x20e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
label_20e110:
    // 0x20e110: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x20e110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e114:
    // 0x20e114: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x20e114u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_20e118:
    // 0x20e118: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20e118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e11c:
    // 0x20e11c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x20e11cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_20e120:
    // 0x20e120: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20e120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20e124:
    // 0x20e124: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x20e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20e128:
    // 0x20e128: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x20e128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_20e12c:
    // 0x20e12c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x20e12cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_20e130:
    // 0x20e130: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x20e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_20e134:
    // 0x20e134: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x20e134u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e138:
    // 0x20e138: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x20e138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20e13c:
    // 0x20e13c: 0x4bc322fe  vopmula.xyz $ACC, $vf4, $vf3
    ctx->pc = 0x20e13cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]);
label_20e140:
    // 0x20e140: 0x4bc418ee  vopmsub.xyz $vf3, $vf3, $vf4
    ctx->pc = 0x20e140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e144:
    // 0x20e144: 0x4bc119ea  vmul.xyz    $vf7, $vf3, $vf1
    ctx->pc = 0x20e144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_20e148:
    // 0x20e148: 0x4b000143  vaddw.x     $vf5, $vf0, $vf0w
    ctx->pc = 0x20e148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20e14c:
    // 0x20e14c: 0x4b07383d  vadday.x    $ACC, $vf7, $vf7y
    ctx->pc = 0x20e14cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e150:
    // 0x20e150: 0x4b0729ca  vmaddz.x    $vf7, $vf5, $vf7z
    ctx->pc = 0x20e150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e154:
    // 0x20e154: 0x4bc120aa  vmul.xyz    $vf2, $vf4, $vf1
    ctx->pc = 0x20e154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20e158:
    // 0x20e158: 0x4b000183  vaddw.x     $vf6, $vf0, $vf0w
    ctx->pc = 0x20e158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20e15c:
    // 0x20e15c: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20e15cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e160:
    // 0x20e160: 0x4b02308a  vmaddz.x    $vf2, $vf6, $vf2z
    ctx->pc = 0x20e160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e164:
    // 0x20e164: 0x482b1000  qmfc2.ni    $t3, $vf2
    ctx->pc = 0x20e164u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[2]));
label_20e168:
    // 0x20e168: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x20e168u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_20e16c:
    // 0x20e16c: 0x448b6000  mtc1        $t3, $f12
    ctx->pc = 0x20e16cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e170:
    // 0x20e170: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20e170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20e174:
    // 0x20e174: 0xc0a31ec  jal         func_28C7B0
label_20e178:
    if (ctx->pc == 0x20E178u) {
        ctx->pc = 0x20E178u;
            // 0x20e178: 0x7fa60480  sq          $a2, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 6));
        ctx->pc = 0x20E17Cu;
        goto label_20e17c;
    }
    ctx->pc = 0x20E174u;
    SET_GPR_U32(ctx, 31, 0x20E17Cu);
    ctx->pc = 0x20E178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E174u;
            // 0x20e178: 0x7fa60480  sq          $a2, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C7B0u;
    if (runtime->hasFunction(0x28C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x28C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E17Cu; }
        if (ctx->pc != 0x20E17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C7B0_0x28c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E17Cu; }
        if (ctx->pc != 0x20E17Cu) { return; }
    }
    ctx->pc = 0x20E17Cu;
label_20e17c:
    // 0x20e17c: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x20e17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_20e180:
    // 0x20e180: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x20e180u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_20e184:
    // 0x20e184: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x20e184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20e188:
    // 0x20e188: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x20e188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_20e18c:
    // 0x20e18c: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_20e190:
    // 0x20e190: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_20e194:
    if (ctx->pc == 0x20E194u) {
        ctx->pc = 0x20E194u;
            // 0x20e194: 0x7ba60480  lq          $a2, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->pc = 0x20E198u;
        goto label_20e198;
    }
    ctx->pc = 0x20E190u;
    {
        const bool branch_taken_0x20e190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E190u;
            // 0x20e194: 0x7ba60480  lq          $a2, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e190) {
            ctx->pc = 0x20E248u;
            goto label_20e248;
        }
    }
    ctx->pc = 0x20E198u;
label_20e198:
    // 0x20e198: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x20e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e19c:
    // 0x20e19c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20e19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_20e1a0:
    // 0x20e1a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20e1a4:
    // 0x20e1a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20e1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20e1a8:
    // 0x20e1a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e1ac:
    // 0x20e1ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e1b0:
    // 0x20e1b0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x20e1b0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_20e1b4:
    // 0x20e1b4: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x20e1b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_20e1b8:
    // 0x20e1b8: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x20e1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e1bc:
    // 0x20e1bc: 0x0  nop
    ctx->pc = 0x20e1bcu;
    // NOP
label_20e1c0:
    // 0x20e1c0: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_20e1c4:
    if (ctx->pc == 0x20E1C4u) {
        ctx->pc = 0x20E1C4u;
            // 0x20e1c4: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x20E1C8u;
        goto label_20e1c8;
    }
    ctx->pc = 0x20E1C0u;
    {
        const bool branch_taken_0x20e1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e1c0) {
            ctx->pc = 0x20E1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E1C0u;
            // 0x20e1c4: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E208u;
            goto label_20e208;
        }
    }
    ctx->pc = 0x20E1C8u;
label_20e1c8:
    // 0x20e1c8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x20e1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_20e1cc:
    // 0x20e1cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20e1d0:
    // 0x20e1d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20e1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e1d4:
    // 0x20e1d4: 0x0  nop
    ctx->pc = 0x20e1d4u;
    // NOP
label_20e1d8:
    // 0x20e1d8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x20e1d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_20e1dc:
    // 0x20e1dc: 0x0  nop
    ctx->pc = 0x20e1dcu;
    // NOP
label_20e1e0:
    // 0x20e1e0: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x20e1e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_20e1e4:
    // 0x20e1e4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x20e1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e1e8:
    // 0x20e1e8: 0x0  nop
    ctx->pc = 0x20e1e8u;
    // NOP
label_20e1ec:
    // 0x20e1ec: 0x0  nop
    ctx->pc = 0x20e1ecu;
    // NOP
label_20e1f0:
    // 0x20e1f0: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_20e1f4:
    if (ctx->pc == 0x20E1F4u) {
        ctx->pc = 0x20E1F4u;
            // 0x20e1f4: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->pc = 0x20E1F8u;
        goto label_20e1f8;
    }
    ctx->pc = 0x20E1F0u;
    {
        const bool branch_taken_0x20e1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e1f0) {
            ctx->pc = 0x20E1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E1F0u;
            // 0x20e1f4: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E1E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e1e0;
        }
    }
    ctx->pc = 0x20E1F8u;
label_20e1f8:
    // 0x20e1f8: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x20e1f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_20e1fc:
    // 0x20e1fc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_20e200:
    // 0x20e200: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20e204:
    // 0x20e204: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20e204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20e208:
    // 0x20e208: 0x0  nop
    ctx->pc = 0x20e208u;
    // NOP
label_20e20c:
    // 0x20e20c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x20e20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e210:
    // 0x20e210: 0x0  nop
    ctx->pc = 0x20e210u;
    // NOP
label_20e214:
    // 0x20e214: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_20e218:
    if (ctx->pc == 0x20E218u) {
        ctx->pc = 0x20E218u;
            // 0x20e218: 0x92e20000  lbu         $v0, 0x0($s7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x20E21Cu;
        goto label_20e21c;
    }
    ctx->pc = 0x20E214u;
    {
        const bool branch_taken_0x20e214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e214) {
            ctx->pc = 0x20E218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E214u;
            // 0x20e218: 0x92e20000  lbu         $v0, 0x0($s7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E24Cu;
            goto label_20e24c;
        }
    }
    ctx->pc = 0x20E21Cu;
label_20e21c:
    // 0x20e21c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x20e21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_20e220:
    // 0x20e220: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20e220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_20e224:
    // 0x20e224: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20e224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e228:
    // 0x20e228: 0x0  nop
    ctx->pc = 0x20e228u;
    // NOP
label_20e22c:
    // 0x20e22c: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x20e22cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_20e230:
    // 0x20e230: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x20e230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_20e234:
    // 0x20e234: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x20e234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e238:
    // 0x20e238: 0x0  nop
    ctx->pc = 0x20e238u;
    // NOP
label_20e23c:
    // 0x20e23c: 0x0  nop
    ctx->pc = 0x20e23cu;
    // NOP
label_20e240:
    // 0x20e240: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_20e244:
    if (ctx->pc == 0x20E244u) {
        ctx->pc = 0x20E244u;
            // 0x20e244: 0x460118c1  sub.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->pc = 0x20E248u;
        goto label_20e248;
    }
    ctx->pc = 0x20E240u;
    {
        const bool branch_taken_0x20e240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e240) {
            ctx->pc = 0x20E244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E240u;
            // 0x20e244: 0x460118c1  sub.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e230;
        }
    }
    ctx->pc = 0x20E248u;
label_20e248:
    // 0x20e248: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x20e248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_20e24c:
    // 0x20e24c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_20e250:
    if (ctx->pc == 0x20E250u) {
        ctx->pc = 0x20E250u;
            // 0x20e250: 0xe6a30000  swc1        $f3, 0x0($s5) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x20E254u;
        goto label_20e254;
    }
    ctx->pc = 0x20E24Cu;
    {
        const bool branch_taken_0x20e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e24c) {
            ctx->pc = 0x20E250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E24Cu;
            // 0x20e250: 0xe6a30000  swc1        $f3, 0x0($s5) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E254u;
            goto label_20e254;
        }
    }
    ctx->pc = 0x20E254u;
label_20e254:
    // 0x20e254: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x20e254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_20e258:
    // 0x20e258: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20e258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20e25c:
    // 0x20e25c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20e260:
    // 0x20e260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e264:
    // 0x20e264: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x20e264u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_20e268:
    // 0x20e268: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x20e268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e26c:
    // 0x20e26c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e270:
    // 0x20e270: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x20e270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_20e274:
    // 0x20e274: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x20e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_20e278:
    // 0x20e278: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x20e278u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20e27c:
    // 0x20e27c: 0xd85e0000  lqc2        $vf30, 0x0($v0)
    ctx->pc = 0x20e27cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e280:
    // 0x20e280: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x20e280u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_20e284:
    // 0x20e284: 0x4a0046f8  vcallms     0x8D8
    ctx->pc = 0x20e284u;
    {     ctx->vu0_tpc = 0x8D8;     runtime->executeVU0Microprogram(rdram, ctx, 0x8D8); }
label_20e288:
    // 0x20e288: 0xcc400040  pref        0x00, 0x40($v0)
    ctx->pc = 0x20e288u;
    // PREF instruction (ignored)
label_20e28c:
    // 0x20e28c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20e28cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
label_20e290:
    // 0x20e290: 0xfa1e0000  sqc2        $vf30, 0x0($s0)
    ctx->pc = 0x20e290u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[30]));
label_20e294:
    // 0x20e294: 0xfa1f0010  sqc2        $vf31, 0x10($s0)
    ctx->pc = 0x20e294u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[31]));
label_20e298:
    // 0x20e298: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e29c:
    // 0x20e29c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e2a0:
    // 0x20e2a0: 0xafb40104  sw          $s4, 0x104($sp)
    ctx->pc = 0x20e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 20));
label_20e2a4:
    // 0x20e2a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20e2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e2a8:
    // 0x20e2a8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x20e2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_20e2ac:
    // 0x20e2ac: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x20e2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_20e2b0:
    // 0x20e2b0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x20e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_20e2b4:
    // 0x20e2b4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x20e2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_20e2b8:
    // 0x20e2b8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x20e2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_20e2bc:
    // 0x20e2bc: 0xb3a3010f  sdl         $v1, 0x10F($sp)
    ctx->pc = 0x20e2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e2c0:
    // 0x20e2c0: 0xb7a30108  sdr         $v1, 0x108($sp)
    ctx->pc = 0x20e2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e2c4:
    // 0x20e2c4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x20e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e2c8:
    // 0x20e2c8: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x20e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e2cc:
    // 0x20e2cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20e2ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20e2d0:
    // 0x20e2d0: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x20e2d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_20e2d4:
    // 0x20e2d4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x20e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e2d8:
    // 0x20e2d8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x20e2d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_20e2dc:
    // 0x20e2dc: 0xc0849c2  jal         func_212708
label_20e2e0:
    if (ctx->pc == 0x20E2E0u) {
        ctx->pc = 0x20E2E0u;
            // 0x20e2e0: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->pc = 0x20E2E4u;
        goto label_20e2e4;
    }
    ctx->pc = 0x20E2DCu;
    SET_GPR_U32(ctx, 31, 0x20E2E4u);
    ctx->pc = 0x20E2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E2DCu;
            // 0x20e2e0: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x212708u;
    if (runtime->hasFunction(0x212708u)) {
        auto targetFn = runtime->lookupFunction(0x212708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2E4u; }
        if (ctx->pc != 0x20E2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212708_0x212708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2E4u; }
        if (ctx->pc != 0x20E2E4u) { return; }
    }
    ctx->pc = 0x20E2E4u;
label_20e2e4:
    // 0x20e2e4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x20e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e2e8:
    // 0x20e2e8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20e2ec:
    // 0x20e2ec: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x20e2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e2f0:
    // 0x20e2f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20e2f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20e2f4:
    // 0x20e2f4: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x20e2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_20e2f8:
    // 0x20e2f8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e2fc:
    // 0x20e2fc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x20e2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_20e300:
    // 0x20e300: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x20e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20e304:
    // 0x20e304: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x20e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_20e308:
    // 0x20e308: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x20e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e30c:
    // 0x20e30c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x20e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e310:
    // 0x20e310: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20e310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20e314:
    // 0x20e314: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20e314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_20e318:
    // 0x20e318: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x20e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e31c:
    // 0x20e31c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x20e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e320:
    // 0x20e320: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20e320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20e324:
    // 0x20e324: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x20e324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_20e328:
    // 0x20e328: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x20e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e32c:
    // 0x20e32c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x20e32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_20e330:
    // 0x20e330: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x20e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e334:
    // 0x20e334: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x20e334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_20e338:
    // 0x20e338: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x20e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e33c:
    // 0x20e33c: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x20e33cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_20e340:
    // 0x20e340: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20e340u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20e344:
    // 0x20e344: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x20e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e348:
    // 0x20e348: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x20e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e34c:
    // 0x20e34c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20e34cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e350:
    // 0x20e350: 0x0  nop
    ctx->pc = 0x20e350u;
    // NOP
label_20e354:
    // 0x20e354: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_20e358:
    if (ctx->pc == 0x20E358u) {
        ctx->pc = 0x20E358u;
            // 0x20e358: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x20E35Cu;
        goto label_20e35c;
    }
    ctx->pc = 0x20E354u;
    {
        const bool branch_taken_0x20e354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e354) {
            ctx->pc = 0x20E358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E354u;
            // 0x20e358: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E36Cu;
            goto label_20e36c;
        }
    }
    ctx->pc = 0x20E35Cu;
label_20e35c:
    // 0x20e35c: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x20e35cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_20e360:
    // 0x20e360: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_20e364:
    if (ctx->pc == 0x20E364u) {
        ctx->pc = 0x20E364u;
            // 0x20e364: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20E368u;
        goto label_20e368;
    }
    ctx->pc = 0x20E360u;
    {
        const bool branch_taken_0x20e360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E360u;
            // 0x20e364: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e360) {
            ctx->pc = 0x20E3A0u;
            goto label_20e3a0;
        }
    }
    ctx->pc = 0x20E368u;
label_20e368:
    // 0x20e368: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x20e368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_20e36c:
    // 0x20e36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e370:
    // 0x20e370: 0x1000000a  b           . + 4 + (0xA << 2)
label_20e374:
    if (ctx->pc == 0x20E374u) {
        ctx->pc = 0x20E374u;
            // 0x20e374: 0xa2e20000  sb          $v0, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20E378u;
        goto label_20e378;
    }
    ctx->pc = 0x20E370u;
    {
        const bool branch_taken_0x20e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E370u;
            // 0x20e374: 0xa2e20000  sb          $v0, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e370) {
            ctx->pc = 0x20E39Cu;
            goto label_20e39c;
        }
    }
    ctx->pc = 0x20E378u;
label_20e378:
    // 0x20e378: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e37c:
    // 0x20e37c: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x20e37cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_20e380:
    // 0x20e380: 0xafb2046c  sw          $s2, 0x46C($sp)
    ctx->pc = 0x20e380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 18));
label_20e384:
    // 0x20e384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20e384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e388:
    // 0x20e388: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20e38c:
    // 0x20e38c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x20e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20e390:
    // 0x20e390: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20e390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_20e394:
    // 0x20e394: 0xa0450004  sb          $a1, 0x4($v0)
    ctx->pc = 0x20e394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 5));
label_20e398:
    // 0x20e398: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20e398u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20e39c:
    // 0x20e39c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e3a0:
    // 0x20e3a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20e3a4:
    // 0x20e3a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20e3a8:
    // 0x20e3a8: 0x8fb2046c  lw          $s2, 0x46C($sp)
    ctx->pc = 0x20e3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
label_20e3ac:
    // 0x20e3ac: 0x1000013a  b           . + 4 + (0x13A << 2)
label_20e3b0:
    if (ctx->pc == 0x20E3B0u) {
        ctx->pc = 0x20E3B0u;
            // 0x20e3b0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x20E3B4u;
        goto label_20e3b4;
    }
    ctx->pc = 0x20E3ACu;
    {
        const bool branch_taken_0x20e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3ACu;
            // 0x20e3b0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3ac) {
            ctx->pc = 0x20E898u;
            goto label_20e898;
        }
    }
    ctx->pc = 0x20E3B4u;
label_20e3b4:
    // 0x20e3b4: 0xafbd044c  sw          $sp, 0x44C($sp)
    ctx->pc = 0x20e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 29));
label_20e3b8:
    // 0x20e3b8: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x20e3b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e3bc:
    // 0x20e3bc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x20e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e3c0:
    // 0x20e3c0: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x20e3c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20e3c4:
    // 0x20e3c4: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x20e3c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_20e3c8:
    // 0x20e3c8: 0xafaa0450  sw          $t2, 0x450($sp)
    ctx->pc = 0x20e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 10));
label_20e3cc:
    // 0x20e3cc: 0xa39821  addu        $s3, $a1, $v1
    ctx->pc = 0x20e3ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20e3d0:
    // 0x20e3d0: 0x86440006  lh          $a0, 0x6($s2)
    ctx->pc = 0x20e3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_20e3d4:
    // 0x20e3d4: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x20e3d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_20e3d8:
    // 0x20e3d8: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
label_20e3dc:
    if (ctx->pc == 0x20E3DCu) {
        ctx->pc = 0x20E3DCu;
            // 0x20e3dc: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x20E3E0u;
        goto label_20e3e0;
    }
    ctx->pc = 0x20E3D8u;
    {
        const bool branch_taken_0x20e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3D8u;
            // 0x20e3dc: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3d8) {
            ctx->pc = 0x20E864u;
            goto label_20e864;
        }
    }
    ctx->pc = 0x20E3E0u;
label_20e3e0:
    // 0x20e3e0: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x20e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_20e3e4:
    // 0x20e3e4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x20e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20e3e8:
    // 0x20e3e8: 0x3c0124e6  lui         $at, 0x24E6
    ctx->pc = 0x20e3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9446 << 16));
label_20e3ec:
    // 0x20e3ec: 0x34219595  ori         $at, $at, 0x9595
    ctx->pc = 0x20e3ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38293);
label_20e3f0:
    // 0x20e3f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20e3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20e3f4:
    // 0x20e3f4: 0xc0a32e0  jal         func_28CB80
label_20e3f8:
    if (ctx->pc == 0x20E3F8u) {
        ctx->pc = 0x20E3F8u;
            // 0x20e3f8: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x20E3FCu;
        goto label_20e3fc;
    }
    ctx->pc = 0x20E3F4u;
    SET_GPR_U32(ctx, 31, 0x20E3FCu);
    ctx->pc = 0x20E3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3F4u;
            // 0x20e3f8: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3FCu; }
        if (ctx->pc != 0x20E3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3FCu; }
        if (ctx->pc != 0x20E3FCu) { return; }
    }
    ctx->pc = 0x20E3FCu;
label_20e3fc:
    // 0x20e3fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20e400:
    // 0x20e400: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20e400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20e404:
    // 0x20e404: 0x27a203d0  addiu       $v0, $sp, 0x3D0
    ctx->pc = 0x20e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_20e408:
    // 0x20e408: 0x27ab03b0  addiu       $t3, $sp, 0x3B0
    ctx->pc = 0x20e408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_20e40c:
    // 0x20e40c: 0xafa20458  sw          $v0, 0x458($sp)
    ctx->pc = 0x20e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 2));
label_20e410:
    // 0x20e410: 0x27a303e0  addiu       $v1, $sp, 0x3E0
    ctx->pc = 0x20e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_20e414:
    // 0x20e414: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x20e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_20e418:
    // 0x20e418: 0xafa3045c  sw          $v1, 0x45C($sp)
    ctx->pc = 0x20e418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 3));
label_20e41c:
    // 0x20e41c: 0xafab0454  sw          $t3, 0x454($sp)
    ctx->pc = 0x20e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 11));
label_20e420:
    // 0x20e420: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20e420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20e424:
    // 0x20e424: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x20e424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
label_20e428:
    // 0x20e428: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20e428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20e42c:
    // 0x20e42c: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x20e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_20e430:
    // 0x20e430: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x20e430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_20e434:
    // 0x20e434: 0xafbd01a4  sw          $sp, 0x1A4($sp)
    ctx->pc = 0x20e434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 29));
label_20e438:
    // 0x20e438: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x20e438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e43c:
    // 0x20e43c: 0xafa40460  sw          $a0, 0x460($sp)
    ctx->pc = 0x20e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 4));
label_20e440:
    // 0x20e440: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x20e440u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e444:
    // 0x20e444: 0x2448e660  addiu       $t0, $v0, -0x19A0
    ctx->pc = 0x20e444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960736));
label_20e448:
    // 0x20e448: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x20e448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_20e44c:
    // 0x20e44c: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x20e44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_20e450:
    // 0x20e450: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x20e450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_20e454:
    // 0x20e454: 0xb3a501c7  sdl         $a1, 0x1C7($sp)
    ctx->pc = 0x20e454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e458:
    // 0x20e458: 0xb7a501c0  sdr         $a1, 0x1C0($sp)
    ctx->pc = 0x20e458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e45c:
    // 0x20e45c: 0xafa601c8  sw          $a2, 0x1C8($sp)
    ctx->pc = 0x20e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 6));
label_20e460:
    // 0x20e460: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20e460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e464:
    // 0x20e464: 0x2462e670  addiu       $v0, $v1, -0x1990
    ctx->pc = 0x20e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960752));
label_20e468:
    // 0x20e468: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x20e468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_20e46c:
    // 0x20e46c: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x20e46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_20e470:
    // 0x20e470: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x20e470u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_20e474:
    // 0x20e474: 0xb3a901d7  sdl         $t1, 0x1D7($sp)
    ctx->pc = 0x20e474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e478:
    // 0x20e478: 0xb7a901d0  sdr         $t1, 0x1D0($sp)
    ctx->pc = 0x20e478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e47c:
    // 0x20e47c: 0xafaa01d8  sw          $t2, 0x1D8($sp)
    ctx->pc = 0x20e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 10));
label_20e480:
    // 0x20e480: 0xafb20464  sw          $s2, 0x464($sp)
    ctx->pc = 0x20e480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 18));
label_20e484:
    // 0x20e484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20e484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e488:
    // 0x20e488: 0x8fa30460  lw          $v1, 0x460($sp)
    ctx->pc = 0x20e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_20e48c:
    // 0x20e48c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x20e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_20e490:
    // 0x20e490: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x20e490u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e494:
    // 0x20e494: 0x12a000e4  beqz        $s5, . + 4 + (0xE4 << 2)
label_20e498:
    if (ctx->pc == 0x20E498u) {
        ctx->pc = 0x20E498u;
            // 0x20e498: 0x27a201c0  addiu       $v0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x20E49Cu;
        goto label_20e49c;
    }
    ctx->pc = 0x20E494u;
    {
        const bool branch_taken_0x20e494 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E494u;
            // 0x20e498: 0x27a201c0  addiu       $v0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e494) {
            ctx->pc = 0x20E828u;
            goto label_20e828;
        }
    }
    ctx->pc = 0x20E49Cu;
label_20e49c:
    // 0x20e49c: 0x8fa60450  lw          $a2, 0x450($sp)
    ctx->pc = 0x20e49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_20e4a0:
    // 0x20e4a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20e4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e4a4:
    // 0x20e4a4: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x20e4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20e4a8:
    // 0x20e4a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_20e4ac:
    // 0x20e4ac: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x20e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_20e4b0:
    // 0x20e4b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e4b4:
    // 0x20e4b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e4b8:
    // 0x20e4b8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x20e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_20e4bc:
    // 0x20e4bc: 0x8faa0450  lw          $t2, 0x450($sp)
    ctx->pc = 0x20e4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_20e4c0:
    // 0x20e4c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20e4c4:
    // 0x20e4c4: 0x27b00390  addiu       $s0, $sp, 0x390
    ctx->pc = 0x20e4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_20e4c8:
    // 0x20e4c8: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x20e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_20e4cc:
    // 0x20e4cc: 0x4be8133c  vmove.xyzw  $vf8, $vf2
    ctx->pc = 0x20e4ccu;
    ctx->vu0_vf[8] = ctx->vu0_vf[2];
label_20e4d0:
    // 0x20e4d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_20e4d4:
    // 0x20e4d4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x20e4d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e4d8:
    // 0x20e4d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x20e4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e4dc:
    // 0x20e4dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20e4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e4e0:
    // 0x20e4e0: 0x4be119e8  vadd.xyzw   $vf7, $vf3, $vf1
    ctx->pc = 0x20e4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_20e4e4:
    // 0x20e4e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e4e8:
    // 0x20e4e8: 0x4bc7386a  vmul.xyz    $vf1, $vf7, $vf7
    ctx->pc = 0x20e4e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e4ec:
    // 0x20e4ec: 0x27b203a0  addiu       $s2, $sp, 0x3A0
    ctx->pc = 0x20e4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_20e4f0:
    // 0x20e4f0: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x20e4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e4f4:
    // 0x20e4f4: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x20e4f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e4f8:
    // 0x20e4f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e4fc:
    // 0x20e4fc: 0x4a0103bd  .word       0x4A0103BD                   # vsqrt       $Q, $vf1x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x20e4fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_20e500:
    // 0x20e500: 0x4a0003bf  vwaitq
    ctx->pc = 0x20e500u;
    // VWAITQ (Q already resolved in this runtime)
label_20e504:
    // 0x20e504: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x20e504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e508:
    // 0x20e508: 0x4a0002ff  vnop
    ctx->pc = 0x20e508u;
    // NOP operation, no action needed for VU0
label_20e50c:
    // 0x20e50c: 0x4a0002ff  vnop
    ctx->pc = 0x20e50cu;
    // NOP operation, no action needed for VU0
label_20e510:
    // 0x20e510: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x20e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_20e514:
    // 0x20e514: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x20e514u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
label_20e518:
    // 0x20e518: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x20e518u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e51c:
    // 0x20e51c: 0x0  nop
    ctx->pc = 0x20e51cu;
    // NOP
label_20e520:
    // 0x20e520: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x20e520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e524:
    // 0x20e524: 0x0  nop
    ctx->pc = 0x20e524u;
    // NOP
label_20e528:
    // 0x20e528: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_20e52c:
    if (ctx->pc == 0x20E52Cu) {
        ctx->pc = 0x20E52Cu;
            // 0x20e52c: 0x1421021  addu        $v0, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x20E530u;
        goto label_20e530;
    }
    ctx->pc = 0x20E528u;
    {
        const bool branch_taken_0x20e528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E528u;
            // 0x20e52c: 0x1421021  addu        $v0, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e528) {
            ctx->pc = 0x20E550u;
            goto label_20e550;
        }
    }
    ctx->pc = 0x20E530u;
label_20e530:
    // 0x20e530: 0x0  nop
    ctx->pc = 0x20e530u;
    // NOP
label_20e534:
    // 0x20e534: 0x0  nop
    ctx->pc = 0x20e534u;
    // NOP
label_20e538:
    // 0x20e538: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x20e538u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
label_20e53c:
    // 0x20e53c: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x20e53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_20e540:
    // 0x20e540: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x20e540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_20e544:
    // 0x20e544: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x20e544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_20e548:
    // 0x20e548: 0x10000003  b           . + 4 + (0x3 << 2)
label_20e54c:
    if (ctx->pc == 0x20E54Cu) {
        ctx->pc = 0x20E54Cu;
            // 0x20e54c: 0xfba701e0  sqc2        $vf7, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->pc = 0x20E550u;
        goto label_20e550;
    }
    ctx->pc = 0x20E548u;
    {
        const bool branch_taken_0x20e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E548u;
            // 0x20e54c: 0xfba701e0  sqc2        $vf7, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e548) {
            ctx->pc = 0x20E558u;
            goto label_20e558;
        }
    }
    ctx->pc = 0x20E550u;
label_20e550:
    // 0x20e550: 0x4be71b3c  vmove.xyzw  $vf7, $vf3
    ctx->pc = 0x20e550u;
    ctx->vu0_vf[7] = ctx->vu0_vf[3];
label_20e554:
    // 0x20e554: 0xfba701e0  sqc2        $vf7, 0x1E0($sp)
    ctx->pc = 0x20e554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[7]));
label_20e558:
    // 0x20e558: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x20e558u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e55c:
    // 0x20e55c: 0x4bc23afe  vopmula.xyz $ACC, $vf7, $vf2
    ctx->pc = 0x20e55cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]);
label_20e560:
    // 0x20e560: 0x4bc710ae  vopmsub.xyz $vf2, $vf2, $vf7
    ctx->pc = 0x20e560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e564:
    // 0x20e564: 0x4bc712fe  vopmula.xyz $ACC, $vf2, $vf7
    ctx->pc = 0x20e564u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]);
label_20e568:
    // 0x20e568: 0x4bc2392e  vopmsub.xyz $vf4, $vf7, $vf2
    ctx->pc = 0x20e568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e56c:
    // 0x20e56c: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x20e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
label_20e570:
    // 0x20e570: 0xfba40200  sqc2        $vf4, 0x200($sp)
    ctx->pc = 0x20e570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[4]));
label_20e574:
    // 0x20e574: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20e574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e578:
    // 0x20e578: 0x4bc138ea  vmul.xyz    $vf3, $vf7, $vf1
    ctx->pc = 0x20e578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e57c:
    // 0x20e57c: 0x4bc111aa  vmul.xyz    $vf6, $vf2, $vf1
    ctx->pc = 0x20e57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20e580:
    // 0x20e580: 0x4bc1216a  vmul.xyz    $vf5, $vf4, $vf1
    ctx->pc = 0x20e580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20e584:
    // 0x20e584: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x20e584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e588:
    // 0x20e588: 0x4a863180  vaddx.y     $vf6, $vf6, $vf6x
    ctx->pc = 0x20e588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20e58c:
    // 0x20e58c: 0x4a452941  vaddy.z     $vf5, $vf5, $vf5y
    ctx->pc = 0x20e58cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20e590:
    // 0x20e590: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x20e590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e594:
    // 0x20e594: 0x4a8630c2  vaddz.y     $vf3, $vf6, $vf6z
    ctx->pc = 0x20e594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e598:
    // 0x20e598: 0x4a4528c0  vaddx.z     $vf3, $vf5, $vf5x
    ctx->pc = 0x20e598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e59c:
    // 0x20e59c: 0x8fa20454  lw          $v0, 0x454($sp)
    ctx->pc = 0x20e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1108)));
label_20e5a0:
    // 0x20e5a0: 0xfba303b0  sqc2        $vf3, 0x3B0($sp)
    ctx->pc = 0x20e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[3]));
label_20e5a4:
    // 0x20e5a4: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x20e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20e5a8:
    // 0x20e5a8: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x20e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20e5ac:
    // 0x20e5ac: 0x7fa50470  sq          $a1, 0x470($sp)
    ctx->pc = 0x20e5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 5));
label_20e5b0:
    // 0x20e5b0: 0x7fa60480  sq          $a2, 0x480($sp)
    ctx->pc = 0x20e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 6));
label_20e5b4:
    // 0x20e5b4: 0x7fa70490  sq          $a3, 0x490($sp)
    ctx->pc = 0x20e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 7));
label_20e5b8:
    // 0x20e5b8: 0x7fa904a0  sq          $t1, 0x4A0($sp)
    ctx->pc = 0x20e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 9));
label_20e5bc:
    // 0x20e5bc: 0xfba704c0  sqc2        $vf7, 0x4C0($sp)
    ctx->pc = 0x20e5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[7]));
label_20e5c0:
    // 0x20e5c0: 0xc0a31ec  jal         func_28C7B0
label_20e5c4:
    if (ctx->pc == 0x20E5C4u) {
        ctx->pc = 0x20E5C4u;
            // 0x20e5c4: 0xfba804d0  sqc2        $vf8, 0x4D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->pc = 0x20E5C8u;
        goto label_20e5c8;
    }
    ctx->pc = 0x20E5C0u;
    SET_GPR_U32(ctx, 31, 0x20E5C8u);
    ctx->pc = 0x20E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5C0u;
            // 0x20e5c4: 0xfba804d0  sqc2        $vf8, 0x4D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C7B0u;
    if (runtime->hasFunction(0x28C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x28C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E5C8u; }
        if (ctx->pc != 0x20E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C7B0_0x28c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E5C8u; }
        if (ctx->pc != 0x20E5C8u) { return; }
    }
    ctx->pc = 0x20E5C8u;
label_20e5c8:
    // 0x20e5c8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x20e5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_20e5cc:
    // 0x20e5cc: 0x27b303c0  addiu       $s3, $sp, 0x3C0
    ctx->pc = 0x20e5ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_20e5d0:
    // 0x20e5d0: 0xdba704c0  lqc2        $vf7, 0x4C0($sp)
    ctx->pc = 0x20e5d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_20e5d4:
    // 0x20e5d4: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x20e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_20e5d8:
    // 0x20e5d8: 0x7ba70490  lq          $a3, 0x490($sp)
    ctx->pc = 0x20e5d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_20e5dc:
    // 0x20e5dc: 0x7ba50470  lq          $a1, 0x470($sp)
    ctx->pc = 0x20e5dcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_20e5e0:
    // 0x20e5e0: 0xf41821  addu        $v1, $a3, $s4
    ctx->pc = 0x20e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_20e5e4:
    // 0x20e5e4: 0xdba804d0  lqc2        $vf8, 0x4D0($sp)
    ctx->pc = 0x20e5e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_20e5e8:
    // 0x20e5e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e5ec:
    // 0x20e5ec: 0xb42021  addu        $a0, $a1, $s4
    ctx->pc = 0x20e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_20e5f0:
    // 0x20e5f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e5f4:
    // 0x20e5f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e5f8:
    // 0x20e5f8: 0x7ba60480  lq          $a2, 0x480($sp)
    ctx->pc = 0x20e5f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_20e5fc:
    // 0x20e5fc: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x20e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_20e600:
    // 0x20e600: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20e600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20e604:
    // 0x20e604: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_20e608:
    // 0x20e608: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x20e608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e60c:
    // 0x20e60c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x20e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_20e610:
    // 0x20e610: 0x7ba904a0  lq          $t1, 0x4A0($sp)
    ctx->pc = 0x20e610u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_20e614:
    // 0x20e614: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20e614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e618:
    // 0x20e618: 0x4be111e8  vadd.xyzw   $vf7, $vf2, $vf1
    ctx->pc = 0x20e618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_20e61c:
    // 0x20e61c: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x20e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_20e620:
    // 0x20e620: 0x4bc7386a  vmul.xyz    $vf1, $vf7, $vf7
    ctx->pc = 0x20e620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e624:
    // 0x20e624: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x20e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_20e628:
    // 0x20e628: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x20e628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e62c:
    // 0x20e62c: 0x4b01404a  vmaddz.x    $vf1, $vf8, $vf1z
    ctx->pc = 0x20e62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e630:
    // 0x20e630: 0x24a40170  addiu       $a0, $a1, 0x170
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
label_20e634:
    // 0x20e634: 0x4a0103bd  .word       0x4A0103BD                   # vsqrt       $Q, $vf1x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x20e634u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_20e638:
    // 0x20e638: 0x4a0003bf  vwaitq
    ctx->pc = 0x20e638u;
    // VWAITQ (Q already resolved in this runtime)
label_20e63c:
    // 0x20e63c: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x20e63cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e640:
    // 0x20e640: 0x4a0002ff  vnop
    ctx->pc = 0x20e640u;
    // NOP operation, no action needed for VU0
label_20e644:
    // 0x20e644: 0x4a0002ff  vnop
    ctx->pc = 0x20e644u;
    // NOP operation, no action needed for VU0
label_20e648:
    // 0x20e648: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20e648u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_20e64c:
    // 0x20e64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e650:
    // 0x20e650: 0x0  nop
    ctx->pc = 0x20e650u;
    // NOP
label_20e654:
    // 0x20e654: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x20e654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e658:
    // 0x20e658: 0x0  nop
    ctx->pc = 0x20e658u;
    // NOP
label_20e65c:
    // 0x20e65c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_20e660:
    if (ctx->pc == 0x20E660u) {
        ctx->pc = 0x20E660u;
            // 0x20e660: 0x4be7133c  vmove.xyzw  $vf7, $vf2 (Delay Slot)
        ctx->vu0_vf[7] = ctx->vu0_vf[2];
        ctx->pc = 0x20E664u;
        goto label_20e664;
    }
    ctx->pc = 0x20E65Cu;
    {
        const bool branch_taken_0x20e65c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e65c) {
            ctx->pc = 0x20E660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20E65Cu;
            // 0x20e660: 0x4be7133c  vmove.xyzw  $vf7, $vf2 (Delay Slot)
        ctx->vu0_vf[7] = ctx->vu0_vf[2];
        ctx->in_delay_slot = false;
            ctx->pc = 0x20E684u;
            goto label_20e684;
        }
    }
    ctx->pc = 0x20E664u;
label_20e664:
    // 0x20e664: 0x0  nop
    ctx->pc = 0x20e664u;
    // NOP
label_20e668:
    // 0x20e668: 0x0  nop
    ctx->pc = 0x20e668u;
    // NOP
label_20e66c:
    // 0x20e66c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x20e66cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
label_20e670:
    // 0x20e670: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20e670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_20e674:
    // 0x20e674: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x20e674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_20e678:
    // 0x20e678: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x20e678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_20e67c:
    // 0x20e67c: 0x10000002  b           . + 4 + (0x2 << 2)
label_20e680:
    if (ctx->pc == 0x20E680u) {
        ctx->pc = 0x20E680u;
            // 0x20e680: 0xfba701e0  sqc2        $vf7, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->pc = 0x20E684u;
        goto label_20e684;
    }
    ctx->pc = 0x20E67Cu;
    {
        const bool branch_taken_0x20e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E67Cu;
            // 0x20e680: 0xfba701e0  sqc2        $vf7, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e67c) {
            ctx->pc = 0x20E688u;
            goto label_20e688;
        }
    }
    ctx->pc = 0x20E684u;
label_20e684:
    // 0x20e684: 0xfba701e0  sqc2        $vf7, 0x1E0($sp)
    ctx->pc = 0x20e684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[7]));
label_20e688:
    // 0x20e688: 0x27b201e0  addiu       $s2, $sp, 0x1E0
    ctx->pc = 0x20e688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_20e68c:
    // 0x20e68c: 0x8fa70458  lw          $a3, 0x458($sp)
    ctx->pc = 0x20e68cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_20e690:
    // 0x20e690: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x20e690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e694:
    // 0x20e694: 0x4bc23afe  vopmula.xyz $ACC, $vf7, $vf2
    ctx->pc = 0x20e694u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]);
label_20e698:
    // 0x20e698: 0x4bc710ae  vopmsub.xyz $vf2, $vf2, $vf7
    ctx->pc = 0x20e698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e69c:
    // 0x20e69c: 0x4bc712fe  vopmula.xyz $ACC, $vf2, $vf7
    ctx->pc = 0x20e69cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]);
label_20e6a0:
    // 0x20e6a0: 0x4bc2392e  vopmsub.xyz $vf4, $vf7, $vf2
    ctx->pc = 0x20e6a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e6a4:
    // 0x20e6a4: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x20e6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
label_20e6a8:
    // 0x20e6a8: 0xfba40200  sqc2        $vf4, 0x200($sp)
    ctx->pc = 0x20e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[4]));
label_20e6ac:
    // 0x20e6ac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x20e6acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20e6b0:
    // 0x20e6b0: 0x4bc138ea  vmul.xyz    $vf3, $vf7, $vf1
    ctx->pc = 0x20e6b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e6b4:
    // 0x20e6b4: 0x4bc111aa  vmul.xyz    $vf6, $vf2, $vf1
    ctx->pc = 0x20e6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20e6b8:
    // 0x20e6b8: 0x4bc1216a  vmul.xyz    $vf5, $vf4, $vf1
    ctx->pc = 0x20e6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20e6bc:
    // 0x20e6bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x20e6bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e6c0:
    // 0x20e6c0: 0x4a863180  vaddx.y     $vf6, $vf6, $vf6x
    ctx->pc = 0x20e6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20e6c4:
    // 0x20e6c4: 0x4a452941  vaddy.z     $vf5, $vf5, $vf5y
    ctx->pc = 0x20e6c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20e6c8:
    // 0x20e6c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x20e6c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e6cc:
    // 0x20e6cc: 0x4a8630c2  vaddz.y     $vf3, $vf6, $vf6z
    ctx->pc = 0x20e6ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e6d0:
    // 0x20e6d0: 0x4a4528c0  vaddx.z     $vf3, $vf5, $vf5x
    ctx->pc = 0x20e6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e6d4:
    // 0x20e6d4: 0xfba303d0  sqc2        $vf3, 0x3D0($sp)
    ctx->pc = 0x20e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[3]));
label_20e6d8:
    // 0x20e6d8: 0xc4ec0004  lwc1        $f12, 0x4($a3)
    ctx->pc = 0x20e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20e6dc:
    // 0x20e6dc: 0xc4ed0008  lwc1        $f13, 0x8($a3)
    ctx->pc = 0x20e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20e6e0:
    // 0x20e6e0: 0x7fa60480  sq          $a2, 0x480($sp)
    ctx->pc = 0x20e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 6));
label_20e6e4:
    // 0x20e6e4: 0x7fa904a0  sq          $t1, 0x4A0($sp)
    ctx->pc = 0x20e6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 9));
label_20e6e8:
    // 0x20e6e8: 0xc0a31ec  jal         func_28C7B0
label_20e6ec:
    if (ctx->pc == 0x20E6ECu) {
        ctx->pc = 0x20E6ECu;
            // 0x20e6ec: 0xfba704c0  sqc2        $vf7, 0x4C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->pc = 0x20E6F0u;
        goto label_20e6f0;
    }
    ctx->pc = 0x20E6E8u;
    SET_GPR_U32(ctx, 31, 0x20E6F0u);
    ctx->pc = 0x20E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E6E8u;
            // 0x20e6ec: 0xfba704c0  sqc2        $vf7, 0x4C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C7B0u;
    if (runtime->hasFunction(0x28C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x28C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6F0u; }
        if (ctx->pc != 0x20E6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C7B0_0x28c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6F0u; }
        if (ctx->pc != 0x20E6F0u) { return; }
    }
    ctx->pc = 0x20E6F0u;
label_20e6f0:
    // 0x20e6f0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x20e6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_20e6f4:
    // 0x20e6f4: 0xdba704c0  lqc2        $vf7, 0x4C0($sp)
    ctx->pc = 0x20e6f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_20e6f8:
    // 0x20e6f8: 0x7ba60480  lq          $a2, 0x480($sp)
    ctx->pc = 0x20e6f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_20e6fc:
    // 0x20e6fc: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x20e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_20e700:
    // 0x20e700: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x20e700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_20e704:
    // 0x20e704: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20e708:
    if (ctx->pc == 0x20E708u) {
        ctx->pc = 0x20E708u;
            // 0x20e708: 0x7ba904a0  lq          $t1, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->pc = 0x20E70Cu;
        goto label_20e70c;
    }
    ctx->pc = 0x20E704u;
    {
        const bool branch_taken_0x20e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E704u;
            // 0x20e708: 0x7ba904a0  lq          $t1, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e704) {
            ctx->pc = 0x20E71Cu;
            goto label_20e71c;
        }
    }
    ctx->pc = 0x20E70Cu;
label_20e70c:
    // 0x20e70c: 0xc7a003a0  lwc1        $f0, 0x3A0($sp)
    ctx->pc = 0x20e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e710:
    // 0x20e710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e714:
    // 0x20e714: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x20e714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20e718:
    // 0x20e718: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x20e718u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_20e71c:
    // 0x20e71c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x20e71cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e720:
    // 0x20e720: 0xe7b403e0  swc1        $f20, 0x3E0($sp)
    ctx->pc = 0x20e720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
label_20e724:
    // 0x20e724: 0x8faa045c  lw          $t2, 0x45C($sp)
    ctx->pc = 0x20e724u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
label_20e728:
    // 0x20e728: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x20e728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_20e72c:
    // 0x20e72c: 0xd8de0000  lqc2        $vf30, 0x0($a2)
    ctx->pc = 0x20e72cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20e730:
    // 0x20e730: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x20e730u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_20e734:
    // 0x20e734: 0x4a0046f8  vcallms     0x8D8
    ctx->pc = 0x20e734u;
    {     ctx->vu0_tpc = 0x8D8;     runtime->executeVU0Microprogram(rdram, ctx, 0x8D8); }
label_20e738:
    // 0x20e738: 0xccc00040  pref        0x00, 0x40($a2)
    ctx->pc = 0x20e738u;
    // PREF instruction (ignored)
label_20e73c:
    // 0x20e73c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20e73cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
label_20e740:
    // 0x20e740: 0xfa1e0000  sqc2        $vf30, 0x0($s0)
    ctx->pc = 0x20e740u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[30]));
label_20e744:
    // 0x20e744: 0xfa1f0010  sqc2        $vf31, 0x10($s0)
    ctx->pc = 0x20e744u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[31]));
label_20e748:
    // 0x20e748: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e74c:
    // 0x20e74c: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x20e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_20e750:
    // 0x20e750: 0x8fab044c  lw          $t3, 0x44C($sp)
    ctx->pc = 0x20e750u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1100)));
label_20e754:
    // 0x20e754: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20e754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20e758:
    // 0x20e758: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x20e758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_20e75c:
    // 0x20e75c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20e75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e760:
    // 0x20e760: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x20e760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_20e764:
    // 0x20e764: 0x8d62004c  lw          $v0, 0x4C($t3)
    ctx->pc = 0x20e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 76)));
label_20e768:
    // 0x20e768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20e768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e76c:
    // 0x20e76c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x20e76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_20e770:
    // 0x20e770: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x20e770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_20e774:
    // 0x20e774: 0xb3a201af  sdl         $v0, 0x1AF($sp)
    ctx->pc = 0x20e774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e778:
    // 0x20e778: 0xb7a201a8  sdr         $v0, 0x1A8($sp)
    ctx->pc = 0x20e778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20e77c:
    // 0x20e77c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e780:
    // 0x20e780: 0xc7a103c0  lwc1        $f1, 0x3C0($sp)
    ctx->pc = 0x20e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e784:
    // 0x20e784: 0xc7a203a0  lwc1        $f2, 0x3A0($sp)
    ctx->pc = 0x20e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20e788:
    // 0x20e788: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20e788u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20e78c:
    // 0x20e78c: 0xe7a101b0  swc1        $f1, 0x1B0($sp)
    ctx->pc = 0x20e78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_20e790:
    // 0x20e790: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e794:
    // 0x20e794: 0x7fa904a0  sq          $t1, 0x4A0($sp)
    ctx->pc = 0x20e794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 9));
label_20e798:
    // 0x20e798: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20e798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_20e79c:
    // 0x20e79c: 0xc0849c2  jal         func_212708
label_20e7a0:
    if (ctx->pc == 0x20E7A0u) {
        ctx->pc = 0x20E7A0u;
            // 0x20e7a0: 0xe7a001b4  swc1        $f0, 0x1B4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
        ctx->pc = 0x20E7A4u;
        goto label_20e7a4;
    }
    ctx->pc = 0x20E79Cu;
    SET_GPR_U32(ctx, 31, 0x20E7A4u);
    ctx->pc = 0x20E7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E79Cu;
            // 0x20e7a0: 0xe7a001b4  swc1        $f0, 0x1B4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x212708u;
    if (runtime->hasFunction(0x212708u)) {
        auto targetFn = runtime->lookupFunction(0x212708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7A4u; }
        if (ctx->pc != 0x20E7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212708_0x212708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7A4u; }
        if (ctx->pc != 0x20E7A4u) { return; }
    }
    ctx->pc = 0x20E7A4u;
label_20e7a4:
    // 0x20e7a4: 0x8fab044c  lw          $t3, 0x44C($sp)
    ctx->pc = 0x20e7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1100)));
label_20e7a8:
    // 0x20e7a8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20e7ac:
    // 0x20e7ac: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x20e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e7b0:
    // 0x20e7b0: 0xc5610008  lwc1        $f1, 0x8($t3)
    ctx->pc = 0x20e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e7b4:
    // 0x20e7b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20e7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20e7b8:
    // 0x20e7b8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x20e7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_20e7bc:
    // 0x20e7bc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e7c0:
    // 0x20e7c0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20e7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_20e7c4:
    // 0x20e7c4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x20e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_20e7c8:
    // 0x20e7c8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x20e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20e7cc:
    // 0x20e7cc: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x20e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e7d0:
    // 0x20e7d0: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x20e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e7d4:
    // 0x20e7d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20e7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20e7d8:
    // 0x20e7d8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20e7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_20e7dc:
    // 0x20e7dc: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x20e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e7e0:
    // 0x20e7e0: 0xc7a101ec  lwc1        $f1, 0x1EC($sp)
    ctx->pc = 0x20e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e7e4:
    // 0x20e7e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20e7e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20e7e8:
    // 0x20e7e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x20e7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_20e7ec:
    // 0x20e7ec: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x20e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e7f0:
    // 0x20e7f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_20e7f4:
    // 0x20e7f4: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x20e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e7f8:
    // 0x20e7f8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x20e7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_20e7fc:
    // 0x20e7fc: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x20e7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e800:
    // 0x20e800: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x20e800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_20e804:
    // 0x20e804: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20e804u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20e808:
    // 0x20e808: 0xc7a103c0  lwc1        $f1, 0x3C0($sp)
    ctx->pc = 0x20e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e80c:
    // 0x20e80c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20e80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e810:
    // 0x20e810: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20e810u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e814:
    // 0x20e814: 0x0  nop
    ctx->pc = 0x20e814u;
    // NOP
label_20e818:
    // 0x20e818: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_20e81c:
    if (ctx->pc == 0x20E81Cu) {
        ctx->pc = 0x20E81Cu;
            // 0x20e81c: 0x7ba904a0  lq          $t1, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->pc = 0x20E820u;
        goto label_20e820;
    }
    ctx->pc = 0x20E818u;
    {
        const bool branch_taken_0x20e818 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E818u;
            // 0x20e81c: 0x7ba904a0  lq          $t1, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e818) {
            ctx->pc = 0x20E844u;
            goto label_20e844;
        }
    }
    ctx->pc = 0x20E820u;
label_20e820:
    // 0x20e820: 0x10000008  b           . + 4 + (0x8 << 2)
label_20e824:
    if (ctx->pc == 0x20E824u) {
        ctx->pc = 0x20E824u;
            // 0x20e824: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x20E828u;
        goto label_20e828;
    }
    ctx->pc = 0x20E820u;
    {
        const bool branch_taken_0x20e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E820u;
            // 0x20e824: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e820) {
            ctx->pc = 0x20E844u;
            goto label_20e844;
        }
    }
    ctx->pc = 0x20E828u;
label_20e828:
    // 0x20e828: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e82c:
    // 0x20e82c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20e830:
    // 0x20e830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20e830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e834:
    // 0x20e834: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x20e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20e838:
    // 0x20e838: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x20e838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_20e83c:
    // 0x20e83c: 0xa0450004  sb          $a1, 0x4($v0)
    ctx->pc = 0x20e83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 5));
label_20e840:
    // 0x20e840: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x20e840u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_20e844:
    // 0x20e844: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20e844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_20e848:
    // 0x20e848: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20e848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_20e84c:
    // 0x20e84c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x20e84cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_20e850:
    // 0x20e850: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x20e850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_20e854:
    // 0x20e854: 0x1440ff0c  bnez        $v0, . + 4 + (-0xF4 << 2)
label_20e858:
    if (ctx->pc == 0x20E858u) {
        ctx->pc = 0x20E858u;
            // 0x20e858: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x20E85Cu;
        goto label_20e85c;
    }
    ctx->pc = 0x20E854u;
    {
        const bool branch_taken_0x20e854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E854u;
            // 0x20e858: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e854) {
            ctx->pc = 0x20E488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e488;
        }
    }
    ctx->pc = 0x20E85Cu;
label_20e85c:
    // 0x20e85c: 0x1000000a  b           . + 4 + (0xA << 2)
label_20e860:
    if (ctx->pc == 0x20E860u) {
        ctx->pc = 0x20E860u;
            // 0x20e860: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x20E864u;
        goto label_20e864;
    }
    ctx->pc = 0x20E85Cu;
    {
        const bool branch_taken_0x20e85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E85Cu;
            // 0x20e860: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e85c) {
            ctx->pc = 0x20E888u;
            goto label_20e888;
        }
    }
    ctx->pc = 0x20E864u;
label_20e864:
    // 0x20e864: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e868:
    // 0x20e868: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x20e868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_20e86c:
    // 0x20e86c: 0xafb20464  sw          $s2, 0x464($sp)
    ctx->pc = 0x20e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 18));
label_20e870:
    // 0x20e870: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20e874:
    // 0x20e874: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x20e874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
label_20e878:
    // 0x20e878: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x20e878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20e87c:
    // 0x20e87c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x20e87cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_20e880:
    // 0x20e880: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x20e880u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_20e884:
    // 0x20e884: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x20e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20e888:
    // 0x20e888: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20e88c:
    // 0x20e88c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_20e890:
    // 0x20e890: 0x8fb20464  lw          $s2, 0x464($sp)
    ctx->pc = 0x20e890u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
label_20e894:
    // 0x20e894: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x20e894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_20e898:
    // 0x20e898: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x20e898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_20e89c:
    // 0x20e89c: 0x10000263  b           . + 4 + (0x263 << 2)
label_20e8a0:
    if (ctx->pc == 0x20E8A0u) {
        ctx->pc = 0x20E8A0u;
            // 0x20e8a0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x20E8A4u;
        goto label_20e8a4;
    }
    ctx->pc = 0x20E89Cu;
    {
        const bool branch_taken_0x20e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E89Cu;
            // 0x20e8a0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e89c) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20E8A4u;
label_20e8a4:
    // 0x20e8a4: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x20e8a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20e8a8:
    // 0x20e8a8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x20e8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20e8ac:
    // 0x20e8ac: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x20e8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20e8b0:
    // 0x20e8b0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x20e8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20e8b4:
    // 0x20e8b4: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x20e8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
label_20e8b8:
    // 0x20e8b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20e8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e8bc:
    // 0x20e8bc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x20e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
label_20e8c0:
    // 0x20e8c0: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x20e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
label_20e8c4:
    // 0x20e8c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_20e8c8:
    // 0x20e8c8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x20e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_20e8cc:
    // 0x20e8cc: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x20e8ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_20e8d0:
    // 0x20e8d0: 0x4be1116c  vsub.xyzw   $vf5, $vf2, $vf1
    ctx->pc = 0x20e8d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20e8d4:
    // 0x20e8d4: 0x4bc5286a  vmul.xyz    $vf1, $vf5, $vf5
    ctx->pc = 0x20e8d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e8d8:
    // 0x20e8d8: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x20e8d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e8dc:
    // 0x20e8dc: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x20e8dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e8e0:
    // 0x20e8e0: 0x4b01184a  vmaddz.x    $vf1, $vf3, $vf1z
    ctx->pc = 0x20e8e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e8e4:
    // 0x20e8e4: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x20e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
label_20e8e8:
    // 0x20e8e8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x20e8e8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_20e8ec:
    // 0x20e8ec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20e8ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e8f0:
    // 0x20e8f0: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x20e8f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_20e8f4:
    // 0x20e8f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e8f8:
    // 0x20e8f8: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x20e8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20e8fc:
    // 0x20e8fc: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x20e8fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20e900:
    // 0x20e900: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x20e900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_20e904:
    // 0x20e904: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x20e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e908:
    // 0x20e908: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x20e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_20e90c:
    // 0x20e90c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x20e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e910:
    // 0x20e910: 0xfba40190  sqc2        $vf4, 0x190($sp)
    ctx->pc = 0x20e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[4]));
label_20e914:
    // 0x20e914: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x20e914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_20e918:
    // 0x20e918: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_20e91c:
    if (ctx->pc == 0x20E91Cu) {
        ctx->pc = 0x20E91Cu;
            // 0x20e91c: 0xfba50180  sqc2        $vf5, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->pc = 0x20E920u;
        goto label_20e920;
    }
    ctx->pc = 0x20E918u;
    {
        const bool branch_taken_0x20e918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E918u;
            // 0x20e91c: 0xfba50180  sqc2        $vf5, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e918) {
            ctx->pc = 0x20E94Cu;
            goto label_20e94c;
        }
    }
    ctx->pc = 0x20E920u;
label_20e920:
    // 0x20e920: 0x4bc528aa  vmul.xyz    $vf2, $vf5, $vf5
    ctx->pc = 0x20e920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20e924:
    // 0x20e924: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w
    ctx->pc = 0x20e924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e928:
    // 0x20e928: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20e928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e92c:
    // 0x20e92c: 0x4b02088a  vmaddz.x    $vf2, $vf1, $vf2z
    ctx->pc = 0x20e92cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e930:
    // 0x20e930: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x20e930u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_20e934:
    // 0x20e934: 0x4a0003bf  vwaitq
    ctx->pc = 0x20e934u;
    // VWAITQ (Q already resolved in this runtime)
label_20e938:
    // 0x20e938: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x20e938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20e93c:
    // 0x20e93c: 0x4a0002ff  vnop
    ctx->pc = 0x20e93cu;
    // NOP operation, no action needed for VU0
label_20e940:
    // 0x20e940: 0x4a0002ff  vnop
    ctx->pc = 0x20e940u;
    // NOP operation, no action needed for VU0
label_20e944:
    // 0x20e944: 0x10000005  b           . + 4 + (0x5 << 2)
label_20e948:
    if (ctx->pc == 0x20E948u) {
        ctx->pc = 0x20E948u;
            // 0x20e948: 0xfba50180  sqc2        $vf5, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->pc = 0x20E94Cu;
        goto label_20e94c;
    }
    ctx->pc = 0x20E944u;
    {
        const bool branch_taken_0x20e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E944u;
            // 0x20e948: 0xfba50180  sqc2        $vf5, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e944) {
            ctx->pc = 0x20E95Cu;
            goto label_20e95c;
        }
    }
    ctx->pc = 0x20E94Cu;
label_20e94c:
    // 0x20e94c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20e950:
    // 0x20e950: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
label_20e954:
    // 0x20e954: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20e954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e958:
    // 0x20e958: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x20e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_20e95c:
    // 0x20e95c: 0xdba30190  lqc2        $vf3, 0x190($sp)
    ctx->pc = 0x20e95cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_20e960:
    // 0x20e960: 0x4bc318aa  vmul.xyz    $vf2, $vf3, $vf3
    ctx->pc = 0x20e960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20e964:
    // 0x20e964: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w
    ctx->pc = 0x20e964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e968:
    // 0x20e968: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20e968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e96c:
    // 0x20e96c: 0x4b02088a  vmaddz.x    $vf2, $vf1, $vf2z
    ctx->pc = 0x20e96cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e970:
    // 0x20e970: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x20e970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
label_20e974:
    // 0x20e974: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20e974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e978:
    // 0x20e978: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x20e978u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_20e97c:
    // 0x20e97c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x20e97cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e980:
    // 0x20e980: 0x0  nop
    ctx->pc = 0x20e980u;
    // NOP
label_20e984:
    // 0x20e984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e988:
    // 0x20e988: 0x0  nop
    ctx->pc = 0x20e988u;
    // NOP
label_20e98c:
    // 0x20e98c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_20e990:
    if (ctx->pc == 0x20E990u) {
        ctx->pc = 0x20E990u;
            // 0x20e990: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x20E994u;
        goto label_20e994;
    }
    ctx->pc = 0x20E98Cu;
    {
        const bool branch_taken_0x20e98c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E98Cu;
            // 0x20e990: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e98c) {
            ctx->pc = 0x20E9C0u;
            goto label_20e9c0;
        }
    }
    ctx->pc = 0x20E994u;
label_20e994:
    // 0x20e994: 0x4bc318aa  vmul.xyz    $vf2, $vf3, $vf3
    ctx->pc = 0x20e994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20e998:
    // 0x20e998: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w
    ctx->pc = 0x20e998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e99c:
    // 0x20e99c: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20e99cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20e9a0:
    // 0x20e9a0: 0x4b02088a  vmaddz.x    $vf2, $vf1, $vf2z
    ctx->pc = 0x20e9a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e9a4:
    // 0x20e9a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x20e9a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_20e9a8:
    // 0x20e9a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x20e9a8u;
    // VWAITQ (Q already resolved in this runtime)
label_20e9ac:
    // 0x20e9ac: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x20e9acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20e9b0:
    // 0x20e9b0: 0x4a0002ff  vnop
    ctx->pc = 0x20e9b0u;
    // NOP operation, no action needed for VU0
label_20e9b4:
    // 0x20e9b4: 0x4a0002ff  vnop
    ctx->pc = 0x20e9b4u;
    // NOP operation, no action needed for VU0
label_20e9b8:
    // 0x20e9b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_20e9bc:
    if (ctx->pc == 0x20E9BCu) {
        ctx->pc = 0x20E9BCu;
            // 0x20e9bc: 0xfba30190  sqc2        $vf3, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->pc = 0x20E9C0u;
        goto label_20e9c0;
    }
    ctx->pc = 0x20E9B8u;
    {
        const bool branch_taken_0x20e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E9B8u;
            // 0x20e9bc: 0xfba30190  sqc2        $vf3, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9b8) {
            ctx->pc = 0x20E9D4u;
            goto label_20e9d4;
        }
    }
    ctx->pc = 0x20E9C0u;
label_20e9c0:
    // 0x20e9c0: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x20e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
label_20e9c4:
    // 0x20e9c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20e9c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e9c8:
    // 0x20e9c8: 0x4be001bc  vmulax.xyzw $ACC, $vf0, $vf0x
    ctx->pc = 0x20e9c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20e9cc:
    // 0x20e9cc: 0x4be0084f  vmsubw.xyzw $vf1, $vf1, $vf0w
    ctx->pc = 0x20e9ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20e9d0:
    // 0x20e9d0: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x20e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_20e9d4:
    // 0x20e9d4: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x20e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_20e9d8:
    // 0x20e9d8: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x20e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
label_20e9dc:
    // 0x20e9dc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x20e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20e9e0:
    // 0x20e9e0: 0xdba20190  lqc2        $vf2, 0x190($sp)
    ctx->pc = 0x20e9e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_20e9e4:
    // 0x20e9e4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x20e9e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20e9e8:
    // 0x20e9e8: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x20e9e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_20e9ec:
    // 0x20e9ec: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x20e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
label_20e9f0:
    // 0x20e9f0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x20e9f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_20e9f4:
    // 0x20e9f4: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x20e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_20e9f8:
    // 0x20e9f8: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x20e9f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_20e9fc:
    // 0x20e9fc: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x20e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
label_20ea00:
    // 0x20ea00: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x20ea00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_20ea04:
    // 0x20ea04: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x20ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
label_20ea08:
    // 0x20ea08: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x20ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ea0c:
    // 0x20ea0c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x20ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_20ea10:
    // 0x20ea10: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x20ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ea14:
    // 0x20ea14: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x20ea14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_20ea18:
    // 0x20ea18: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x20ea18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_20ea1c:
    // 0x20ea1c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x20ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ea20:
    // 0x20ea20: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x20ea20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_20ea24:
    // 0x20ea24: 0x4be11198  vmulx.xyzw  $vf6, $vf2, $vf1x
    ctx->pc = 0x20ea24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_20ea28:
    // 0x20ea28: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x20ea28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_20ea2c:
    // 0x20ea2c: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x20ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ea30:
    // 0x20ea30: 0xe7a101cc  swc1        $f1, 0x1CC($sp)
    ctx->pc = 0x20ea30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_20ea34:
    // 0x20ea34: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x20ea34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_20ea38:
    // 0x20ea38: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x20ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_20ea3c:
    // 0x20ea3c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x20ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20ea40:
    // 0x20ea40: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x20ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20ea44:
    // 0x20ea44: 0xd8630040  lqc2        $vf3, 0x40($v1)
    ctx->pc = 0x20ea44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_20ea48:
    // 0x20ea48: 0xdba20160  lqc2        $vf2, 0x160($sp)
    ctx->pc = 0x20ea48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_20ea4c:
    // 0x20ea4c: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20ea4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20ea50:
    // 0x20ea50: 0xdba10180  lqc2        $vf1, 0x180($sp)
    ctx->pc = 0x20ea50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_20ea54:
    // 0x20ea54: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x20ea54u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
label_20ea58:
    // 0x20ea58: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x20ea58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20ea5c:
    // 0x20ea5c: 0xd8430040  lqc2        $vf3, 0x40($v0)
    ctx->pc = 0x20ea5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_20ea60:
    // 0x20ea60: 0xdba10170  lqc2        $vf1, 0x170($sp)
    ctx->pc = 0x20ea60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_20ea64:
    // 0x20ea64: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x20ea64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_20ea68:
    // 0x20ea68: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x20ea68u;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
label_20ea6c:
    // 0x20ea6c: 0x4be3096c  vsub.xyzw   $vf5, $vf1, $vf3
    ctx->pc = 0x20ea6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20ea70:
    // 0x20ea70: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_20ea74:
    if (ctx->pc == 0x20EA74u) {
        ctx->pc = 0x20EA74u;
            // 0x20ea74: 0xf8e20020  sqc2        $vf2, 0x20($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->pc = 0x20EA78u;
        goto label_20ea78;
    }
    ctx->pc = 0x20EA70u;
    {
        const bool branch_taken_0x20ea70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ea70) {
            ctx->pc = 0x20EA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20EA70u;
            // 0x20ea74: 0xf8e20020  sqc2        $vf2, 0x20($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20EA98u;
            goto label_20ea98;
        }
    }
    ctx->pc = 0x20EA78u;
label_20ea78:
    // 0x20ea78: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x20ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_20ea7c:
    // 0x20ea7c: 0xd8620050  lqc2        $vf2, 0x50($v1)
    ctx->pc = 0x20ea7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_20ea80:
    // 0x20ea80: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x20ea80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20ea84:
    // 0x20ea84: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x20ea84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20ea88:
    // 0x20ea88: 0x4be411bc  vmulax.xyzw $ACC, $vf2, $vf4x
    ctx->pc = 0x20ea88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20ea8c:
    // 0x20ea8c: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x20ea8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20ea90:
    // 0x20ea90: 0x4be4188a  vmaddz.xyzw $vf2, $vf3, $vf4z
    ctx->pc = 0x20ea90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20ea94:
    // 0x20ea94: 0xf8e20020  sqc2        $vf2, 0x20($a3)
    ctx->pc = 0x20ea94u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[2]));
label_20ea98:
    // 0x20ea98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20ea9c:
    // 0x20ea9c: 0x4bc532fe  vopmula.xyz $ACC, $vf6, $vf5
    ctx->pc = 0x20ea9cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[5]);
label_20eaa0:
    // 0x20eaa0: 0x4bc6286e  vopmsub.xyz $vf1, $vf5, $vf6
    ctx->pc = 0x20eaa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20eaa4:
    // 0x20eaa4: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_20eaa8:
    // 0x20eaa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20eaac:
    if (ctx->pc == 0x20EAACu) {
        ctx->pc = 0x20EAACu;
            // 0x20eaac: 0x4be40b3c  vmove.xyzw  $vf4, $vf1 (Delay Slot)
        ctx->vu0_vf[4] = ctx->vu0_vf[1];
        ctx->pc = 0x20EAB0u;
        goto label_20eab0;
    }
    ctx->pc = 0x20EAA8u;
    {
        const bool branch_taken_0x20eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EAA8u;
            // 0x20eaac: 0x4be40b3c  vmove.xyzw  $vf4, $vf1 (Delay Slot)
        ctx->vu0_vf[4] = ctx->vu0_vf[1];
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaa8) {
            ctx->pc = 0x20EAB8u;
            goto label_20eab8;
        }
    }
    ctx->pc = 0x20EAB0u;
label_20eab0:
    // 0x20eab0: 0x10000009  b           . + 4 + (0x9 << 2)
label_20eab4:
    if (ctx->pc == 0x20EAB4u) {
        ctx->pc = 0x20EAB4u;
            // 0x20eab4: 0xf8e10030  sqc2        $vf1, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->pc = 0x20EAB8u;
        goto label_20eab8;
    }
    ctx->pc = 0x20EAB0u;
    {
        const bool branch_taken_0x20eab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EAB0u;
            // 0x20eab4: 0xf8e10030  sqc2        $vf1, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eab0) {
            ctx->pc = 0x20EAD8u;
            goto label_20ead8;
        }
    }
    ctx->pc = 0x20EAB8u;
label_20eab8:
    // 0x20eab8: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x20eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_20eabc:
    // 0x20eabc: 0xd8620050  lqc2        $vf2, 0x50($v1)
    ctx->pc = 0x20eabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_20eac0:
    // 0x20eac0: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x20eac0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20eac4:
    // 0x20eac4: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x20eac4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20eac8:
    // 0x20eac8: 0x4be411bc  vmulax.xyzw $ACC, $vf2, $vf4x
    ctx->pc = 0x20eac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20eacc:
    // 0x20eacc: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x20eaccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
label_20ead0:
    // 0x20ead0: 0x4be4188a  vmaddz.xyzw $vf2, $vf3, $vf4z
    ctx->pc = 0x20ead0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20ead4:
    // 0x20ead4: 0xf8e20030  sqc2        $vf2, 0x30($a3)
    ctx->pc = 0x20ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[2]));
label_20ead8:
    // 0x20ead8: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x20ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20eadc:
    // 0x20eadc: 0x4b000143  vaddw.x     $vf5, $vf0, $vf0w
    ctx->pc = 0x20eadcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20eae0:
    // 0x20eae0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20eae4:
    // 0x20eae4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20eae8:
    // 0x20eae8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20eae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_20eaec:
    // 0x20eaec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20eaf0:
    // 0x20eaf0: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x20eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20eaf4:
    // 0x20eaf4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x20eaf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_20eaf8:
    // 0x20eaf8: 0xc442003c  lwc1        $f2, 0x3C($v0)
    ctx->pc = 0x20eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20eafc:
    // 0x20eafc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20eafcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20eb00:
    // 0x20eb00: 0xd8e20020  lqc2        $vf2, 0x20($a3)
    ctx->pc = 0x20eb00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_20eb04:
    // 0x20eb04: 0xd8e30030  lqc2        $vf3, 0x30($a3)
    ctx->pc = 0x20eb04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_20eb08:
    // 0x20eb08: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x20eb08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20eb0c:
    // 0x20eb0c: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x20eb0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_20eb10:
    // 0x20eb10: 0x4be318ea  vmul.xyzw   $vf3, $vf3, $vf3
    ctx->pc = 0x20eb10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20eb14:
    // 0x20eb14: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x20eb14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20eb18:
    // 0x20eb18: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x20eb18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20eb1c:
    // 0x20eb1c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x20eb1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_20eb20:
    // 0x20eb20: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x20eb20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20eb24:
    // 0x20eb24: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x20eb24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20eb28:
    // 0x20eb28: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x20eb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
label_20eb2c:
    // 0x20eb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20eb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eb30:
    // 0x20eb30: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20eb30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20eb34:
    // 0x20eb34: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20eb34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20eb38:
    // 0x20eb38: 0xc4a1007c  lwc1        $f1, 0x7C($a1)
    ctx->pc = 0x20eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20eb3c:
    // 0x20eb3c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x20eb3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20eb40:
    // 0x20eb40: 0x482b0800  qmfc2.ni    $t3, $vf1
    ctx->pc = 0x20eb40u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[1]));
label_20eb44:
    // 0x20eb44: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x20eb44u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eb48:
    // 0x20eb48: 0x0  nop
    ctx->pc = 0x20eb48u;
    // NOP
label_20eb4c:
    // 0x20eb4c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20eb4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_20eb50:
    // 0x20eb50: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20eb50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_20eb54:
    // 0x20eb54: 0xe4e1002c  swc1        $f1, 0x2C($a3)
    ctx->pc = 0x20eb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
label_20eb58:
    // 0x20eb58: 0xd8a10060  lqc2        $vf1, 0x60($a1)
    ctx->pc = 0x20eb58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 96)));
label_20eb5c:
    // 0x20eb5c: 0xd8a20020  lqc2        $vf2, 0x20($a1)
    ctx->pc = 0x20eb5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_20eb60:
    // 0x20eb60: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20eb60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20eb64:
    // 0x20eb64: 0xd8a30050  lqc2        $vf3, 0x50($a1)
    ctx->pc = 0x20eb64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_20eb68:
    // 0x20eb68: 0x4bc210aa  vmul.xyz    $vf2, $vf2, $vf2
    ctx->pc = 0x20eb68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20eb6c:
    // 0x20eb6c: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x20eb6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_20eb70:
    // 0x20eb70: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20eb70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20eb74:
    // 0x20eb74: 0x4b02288a  vmaddz.x    $vf2, $vf5, $vf2z
    ctx->pc = 0x20eb74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20eb78:
    // 0x20eb78: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x20eb78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20eb7c:
    // 0x20eb7c: 0x4a0203bd  .word       0x4A0203BD                   # vsqrt       $Q, $vf2x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x20eb7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_20eb80:
    // 0x20eb80: 0x4a0003bf  vwaitq
    ctx->pc = 0x20eb80u;
    // VWAITQ (Q already resolved in this runtime)
label_20eb84:
    // 0x20eb84: 0x4b0000a0  vaddq.x     $vf2, $vf0, $Q
    ctx->pc = 0x20eb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20eb88:
    // 0x20eb88: 0x4a0002ff  vnop
    ctx->pc = 0x20eb88u;
    // NOP operation, no action needed for VU0
label_20eb8c:
    // 0x20eb8c: 0x4a0002ff  vnop
    ctx->pc = 0x20eb8cu;
    // NOP operation, no action needed for VU0
label_20eb90:
    // 0x20eb90: 0x4bc318ea  vmul.xyz    $vf3, $vf3, $vf3
    ctx->pc = 0x20eb90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20eb94:
    // 0x20eb94: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x20eb94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_20eb98:
    // 0x20eb98: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x20eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20eb9c:
    // 0x20eb9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20eb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20eba0:
    // 0x20eba0: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x20eba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20eba4:
    // 0x20eba4: 0x4b0328ca  vmaddz.x    $vf3, $vf5, $vf3z
    ctx->pc = 0x20eba4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20eba8:
    // 0x20eba8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x20eba8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_20ebac:
    // 0x20ebac: 0x4a0003bf  vwaitq
    ctx->pc = 0x20ebacu;
    // VWAITQ (Q already resolved in this runtime)
label_20ebb0:
    // 0x20ebb0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x20ebb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20ebb4:
    // 0x20ebb4: 0x4a0002ff  vnop
    ctx->pc = 0x20ebb4u;
    // NOP operation, no action needed for VU0
label_20ebb8:
    // 0x20ebb8: 0x4a0002ff  vnop
    ctx->pc = 0x20ebb8u;
    // NOP operation, no action needed for VU0
label_20ebbc:
    // 0x20ebbc: 0xc4a30070  lwc1        $f3, 0x70($a1)
    ctx->pc = 0x20ebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20ebc0:
    // 0x20ebc0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x20ebc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_20ebc4:
    // 0x20ebc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20ebc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20ebc8:
    // 0x20ebc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ebc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ebcc:
    // 0x20ebcc: 0xc4a20078  lwc1        $f2, 0x78($a1)
    ctx->pc = 0x20ebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ebd0:
    // 0x20ebd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20ebd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20ebd4:
    // 0x20ebd4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x20ebd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_20ebd8:
    // 0x20ebd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20ebd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20ebdc:
    // 0x20ebdc: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20ebdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20ebe0:
    // 0x20ebe0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x20ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20ebe4:
    // 0x20ebe4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_20ebe8:
    // 0x20ebe8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x20ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_20ebec:
    // 0x20ebec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20ebecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_20ebf0:
    // 0x20ebf0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x20ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_20ebf4:
    // 0x20ebf4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_20ebf8:
    // 0x20ebf8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_20ebfc:
    // 0x20ebfc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20ec00:
    // 0x20ec00: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x20ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_20ec04:
    // 0x20ec04: 0x10000189  b           . + 4 + (0x189 << 2)
label_20ec08:
    if (ctx->pc == 0x20EC08u) {
        ctx->pc = 0x20EC08u;
            // 0x20ec08: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x20EC0Cu;
        goto label_20ec0c;
    }
    ctx->pc = 0x20EC04u;
    {
        const bool branch_taken_0x20ec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EC04u;
            // 0x20ec08: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec04) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20EC0Cu;
label_20ec0c:
    // 0x20ec0c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20ec10:
    // 0x20ec10: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20ec14:
    // 0x20ec14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20ec14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20ec18:
    // 0x20ec18: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x20ec18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20ec1c:
    // 0x20ec1c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_20ec20:
    // 0x20ec20: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20ec24:
    // 0x20ec24: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x20ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_20ec28:
    // 0x20ec28: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x20ec28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_20ec2c:
    // 0x20ec2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ec2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ec30:
    // 0x20ec30: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x20ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ec34:
    // 0x20ec34: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x20ec34u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20ec38:
    // 0x20ec38: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x20ec38u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_20ec3c:
    // 0x20ec3c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x20ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_20ec40:
    // 0x20ec40: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x20ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
label_20ec44:
    // 0x20ec44: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_20ec48:
    // 0x20ec48: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
label_20ec4c:
    if (ctx->pc == 0x20EC4Cu) {
        ctx->pc = 0x20EC4Cu;
            // 0x20ec4c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x20EC50u;
        goto label_20ec50;
    }
    ctx->pc = 0x20EC48u;
    {
        const bool branch_taken_0x20ec48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20EC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EC48u;
            // 0x20ec4c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec48) {
            ctx->pc = 0x20EC34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ec34;
        }
    }
    ctx->pc = 0x20EC50u;
label_20ec50:
    // 0x20ec50: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x20ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ec54:
    // 0x20ec54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20ec54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20ec58:
    // 0x20ec58: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x20ec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_20ec5c:
    // 0x20ec5c: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x20ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ec60:
    // 0x20ec60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20ec60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_20ec64:
    // 0x20ec64: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x20ec64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_20ec68:
    // 0x20ec68: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x20ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ec6c:
    // 0x20ec6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20ec6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20ec70:
    // 0x20ec70: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x20ec70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_20ec74:
    // 0x20ec74: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_20ec78:
    // 0x20ec78: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x20ec78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_20ec7c:
    // 0x20ec7c: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x20ec7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
label_20ec80:
    // 0x20ec80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20ec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20ec84:
    // 0x20ec84: 0x0  nop
    ctx->pc = 0x20ec84u;
    // NOP
label_20ec88:
    // 0x20ec88: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_20ec8c:
    if (ctx->pc == 0x20EC8Cu) {
        ctx->pc = 0x20EC8Cu;
            // 0x20ec8c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x20EC90u;
        goto label_20ec90;
    }
    ctx->pc = 0x20EC88u;
    {
        const bool branch_taken_0x20ec88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ec88) {
            ctx->pc = 0x20EC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20EC88u;
            // 0x20ec8c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20EC78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ec78;
        }
    }
    ctx->pc = 0x20EC90u;
label_20ec90:
    // 0x20ec90: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x20ec90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_20ec94:
    // 0x20ec94: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x20ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_20ec98:
    // 0x20ec98: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x20ec98u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_20ec9c:
    // 0x20ec9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_20eca0:
    // 0x20eca0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_20eca4:
    if (ctx->pc == 0x20ECA4u) {
        ctx->pc = 0x20ECA4u;
            // 0x20eca4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x20ECA8u;
        goto label_20eca8;
    }
    ctx->pc = 0x20ECA0u;
    {
        const bool branch_taken_0x20eca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ECA0u;
            // 0x20eca4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eca0) {
            ctx->pc = 0x20ECF8u;
            goto label_20ecf8;
        }
    }
    ctx->pc = 0x20ECA8u;
label_20eca8:
    // 0x20eca8: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x20eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_20ecac:
    // 0x20ecac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ecacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ecb0:
    // 0x20ecb0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x20ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ecb4:
    // 0x20ecb4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x20ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ecb8:
    // 0x20ecb8: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x20ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20ecbc:
    // 0x20ecbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20ecbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20ecc0:
    // 0x20ecc0: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x20ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ecc4:
    // 0x20ecc4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x20ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ecc8:
    // 0x20ecc8: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x20ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20eccc:
    // 0x20eccc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20ecccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_20ecd0:
    // 0x20ecd0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x20ecd0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_20ecd4:
    // 0x20ecd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20ecd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20ecd8:
    // 0x20ecd8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x20ecd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ecdc:
    // 0x20ecdc: 0x0  nop
    ctx->pc = 0x20ecdcu;
    // NOP
label_20ece0:
    // 0x20ece0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20ece4:
    if (ctx->pc == 0x20ECE4u) {
        ctx->pc = 0x20ECE4u;
            // 0x20ece4: 0xe4610010  swc1        $f1, 0x10($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->pc = 0x20ECE8u;
        goto label_20ece8;
    }
    ctx->pc = 0x20ECE0u;
    {
        const bool branch_taken_0x20ece0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ece0) {
            ctx->pc = 0x20ECE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20ECE0u;
            // 0x20ece4: 0xe4610010  swc1        $f1, 0x10($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20ECE8u;
            goto label_20ece8;
        }
    }
    ctx->pc = 0x20ECE8u;
label_20ece8:
    // 0x20ece8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x20ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_20ecec:
    // 0x20ecec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20ecf0:
    // 0x20ecf0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_20ecf4:
    if (ctx->pc == 0x20ECF4u) {
        ctx->pc = 0x20ECF4u;
            // 0x20ecf4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x20ECF8u;
        goto label_20ecf8;
    }
    ctx->pc = 0x20ECF0u;
    {
        const bool branch_taken_0x20ecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ECF0u;
            // 0x20ecf4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecf0) {
            ctx->pc = 0x20ECB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ecb0;
        }
    }
    ctx->pc = 0x20ECF8u;
label_20ecf8:
    // 0x20ecf8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x20ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_20ecfc:
    // 0x20ecfc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x20ecfcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_20ed00:
    // 0x20ed00: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x20ed00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_20ed04:
    // 0x20ed04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20ed08:
    if (ctx->pc == 0x20ED08u) {
        ctx->pc = 0x20ED08u;
            // 0x20ed08: 0x96450012  lhu         $a1, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->pc = 0x20ED0Cu;
        goto label_20ed0c;
    }
    ctx->pc = 0x20ED04u;
    {
        const bool branch_taken_0x20ed04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED04u;
            // 0x20ed08: 0x96450012  lhu         $a1, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed04) {
            ctx->pc = 0x20ED24u;
            goto label_20ed24;
        }
    }
    ctx->pc = 0x20ED0Cu;
label_20ed0c:
    // 0x20ed0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ed0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ed10:
    // 0x20ed10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed14:
    // 0x20ed14: 0xc0847da  jal         func_211F68
label_20ed18:
    if (ctx->pc == 0x20ED18u) {
        ctx->pc = 0x20ED18u;
            // 0x20ed18: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ED1Cu;
        goto label_20ed1c;
    }
    ctx->pc = 0x20ED14u;
    SET_GPR_U32(ctx, 31, 0x20ED1Cu);
    ctx->pc = 0x20ED18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED14u;
            // 0x20ed18: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (runtime->hasFunction(0x211F68u)) {
        auto targetFn = runtime->lookupFunction(0x211F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED1Cu; }
        if (ctx->pc != 0x20ED1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F68_0x211f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED1Cu; }
        if (ctx->pc != 0x20ED1Cu) { return; }
    }
    ctx->pc = 0x20ED1Cu;
label_20ed1c:
    // 0x20ed1c: 0x10000143  b           . + 4 + (0x143 << 2)
label_20ed20:
    if (ctx->pc == 0x20ED20u) {
        ctx->pc = 0x20ED20u;
            // 0x20ed20: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ED24u;
        goto label_20ed24;
    }
    ctx->pc = 0x20ED1Cu;
    {
        const bool branch_taken_0x20ed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED1Cu;
            // 0x20ed20: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed1c) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20ED24u;
label_20ed24:
    // 0x20ed24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20ed24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ed28:
    // 0x20ed28: 0xc08349e  jal         func_20D278
label_20ed2c:
    if (ctx->pc == 0x20ED2Cu) {
        ctx->pc = 0x20ED2Cu;
            // 0x20ed2c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ED30u;
        goto label_20ed30;
    }
    ctx->pc = 0x20ED28u;
    SET_GPR_U32(ctx, 31, 0x20ED30u);
    ctx->pc = 0x20ED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED28u;
            // 0x20ed2c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D278u;
    goto label_20d278;
    ctx->pc = 0x20ED30u;
label_20ed30:
    // 0x20ed30: 0x1000013e  b           . + 4 + (0x13E << 2)
label_20ed34:
    if (ctx->pc == 0x20ED34u) {
        ctx->pc = 0x20ED34u;
            // 0x20ed34: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ED38u;
        goto label_20ed38;
    }
    ctx->pc = 0x20ED30u;
    {
        const bool branch_taken_0x20ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED30u;
            // 0x20ed34: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed30) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20ED38u;
label_20ed38:
    // 0x20ed38: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20ed3c:
    // 0x20ed3c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20ed40:
    // 0x20ed40: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x20ed40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20ed44:
    // 0x20ed44: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20ed48:
    // 0x20ed48: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_20ed4c:
    // 0x20ed4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ed4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ed50:
    // 0x20ed50: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x20ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_20ed54:
    // 0x20ed54: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x20ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_20ed58:
    // 0x20ed58: 0x786b0000  lq          $t3, 0x0($v1)
    ctx->pc = 0x20ed58u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20ed5c:
    // 0x20ed5c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x20ed5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_20ed60:
    // 0x20ed60: 0x7c8b0000  sq          $t3, 0x0($a0)
    ctx->pc = 0x20ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 11));
label_20ed64:
    // 0x20ed64: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x20ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_20ed68:
    // 0x20ed68: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_20ed6c:
    // 0x20ed6c: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
label_20ed70:
    if (ctx->pc == 0x20ED70u) {
        ctx->pc = 0x20ED70u;
            // 0x20ed70: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x20ED74u;
        goto label_20ed74;
    }
    ctx->pc = 0x20ED6Cu;
    {
        const bool branch_taken_0x20ed6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED6Cu;
            // 0x20ed70: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed6c) {
            ctx->pc = 0x20ED58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ed58;
        }
    }
    ctx->pc = 0x20ED74u;
label_20ed74:
    // 0x20ed74: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_20ed78:
    // 0x20ed78: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x20ed78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_20ed7c:
    // 0x20ed7c: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x20ed7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
label_20ed80:
    // 0x20ed80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20ed84:
    // 0x20ed84: 0x0  nop
    ctx->pc = 0x20ed84u;
    // NOP
label_20ed88:
    // 0x20ed88: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_20ed8c:
    if (ctx->pc == 0x20ED8Cu) {
        ctx->pc = 0x20ED8Cu;
            // 0x20ed8c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x20ED90u;
        goto label_20ed90;
    }
    ctx->pc = 0x20ED88u;
    {
        const bool branch_taken_0x20ed88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ed88) {
            ctx->pc = 0x20ED8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED88u;
            // 0x20ed8c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20ED78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ed78;
        }
    }
    ctx->pc = 0x20ED90u;
label_20ed90:
    // 0x20ed90: 0xc0849be  jal         func_2126F8
label_20ed94:
    if (ctx->pc == 0x20ED94u) {
        ctx->pc = 0x20ED94u;
            // 0x20ed94: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x20ED98u;
        goto label_20ed98;
    }
    ctx->pc = 0x20ED90u;
    SET_GPR_U32(ctx, 31, 0x20ED98u);
    ctx->pc = 0x20ED94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED90u;
            // 0x20ed94: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2126F8u;
    if (runtime->hasFunction(0x2126F8u)) {
        auto targetFn = runtime->lookupFunction(0x2126F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED98u; }
        if (ctx->pc != 0x20ED98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002126F8_0x2126f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED98u; }
        if (ctx->pc != 0x20ED98u) { return; }
    }
    ctx->pc = 0x20ED98u;
label_20ed98:
    // 0x20ed98: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x20ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_20ed9c:
    // 0x20ed9c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x20ed9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_20eda0:
    // 0x20eda0: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x20eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_20eda4:
    // 0x20eda4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20eda8:
    if (ctx->pc == 0x20EDA8u) {
        ctx->pc = 0x20EDA8u;
            // 0x20eda8: 0x96450012  lhu         $a1, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->pc = 0x20EDACu;
        goto label_20edac;
    }
    ctx->pc = 0x20EDA4u;
    {
        const bool branch_taken_0x20eda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDA4u;
            // 0x20eda8: 0x96450012  lhu         $a1, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eda4) {
            ctx->pc = 0x20EDC4u;
            goto label_20edc4;
        }
    }
    ctx->pc = 0x20EDACu;
label_20edac:
    // 0x20edac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20edacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20edb0:
    // 0x20edb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20edb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20edb4:
    // 0x20edb4: 0xc0847da  jal         func_211F68
label_20edb8:
    if (ctx->pc == 0x20EDB8u) {
        ctx->pc = 0x20EDB8u;
            // 0x20edb8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EDBCu;
        goto label_20edbc;
    }
    ctx->pc = 0x20EDB4u;
    SET_GPR_U32(ctx, 31, 0x20EDBCu);
    ctx->pc = 0x20EDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDB4u;
            // 0x20edb8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (runtime->hasFunction(0x211F68u)) {
        auto targetFn = runtime->lookupFunction(0x211F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDBCu; }
        if (ctx->pc != 0x20EDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F68_0x211f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDBCu; }
        if (ctx->pc != 0x20EDBCu) { return; }
    }
    ctx->pc = 0x20EDBCu;
label_20edbc:
    // 0x20edbc: 0x1000011b  b           . + 4 + (0x11B << 2)
label_20edc0:
    if (ctx->pc == 0x20EDC0u) {
        ctx->pc = 0x20EDC0u;
            // 0x20edc0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EDC4u;
        goto label_20edc4;
    }
    ctx->pc = 0x20EDBCu;
    {
        const bool branch_taken_0x20edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDBCu;
            // 0x20edc0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edbc) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20EDC4u;
label_20edc4:
    // 0x20edc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20edc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20edc8:
    // 0x20edc8: 0xc08349e  jal         func_20D278
label_20edcc:
    if (ctx->pc == 0x20EDCCu) {
        ctx->pc = 0x20EDCCu;
            // 0x20edcc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EDD0u;
        goto label_20edd0;
    }
    ctx->pc = 0x20EDC8u;
    SET_GPR_U32(ctx, 31, 0x20EDD0u);
    ctx->pc = 0x20EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDC8u;
            // 0x20edcc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D278u;
    goto label_20d278;
    ctx->pc = 0x20EDD0u;
label_20edd0:
    // 0x20edd0: 0x10000116  b           . + 4 + (0x116 << 2)
label_20edd4:
    if (ctx->pc == 0x20EDD4u) {
        ctx->pc = 0x20EDD4u;
            // 0x20edd4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EDD8u;
        goto label_20edd8;
    }
    ctx->pc = 0x20EDD0u;
    {
        const bool branch_taken_0x20edd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDD0u;
            // 0x20edd4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edd0) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20EDD8u;
label_20edd8:
    // 0x20edd8: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_20eddc:
    // 0x20eddc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x20eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ede0:
    // 0x20ede0: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x20ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ede4:
    // 0x20ede4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x20ede4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20ede8:
    // 0x20ede8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x20ede8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20edec:
    // 0x20edec: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x20edecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20edf0:
    // 0x20edf0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20edf4:
    // 0x20edf4: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x20edf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_20edf8:
    // 0x20edf8: 0x27aa0270  addiu       $t2, $sp, 0x270
    ctx->pc = 0x20edf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_20edfc:
    // 0x20edfc: 0x27ab02f0  addiu       $t3, $sp, 0x2F0
    ctx->pc = 0x20edfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_20ee00:
    // 0x20ee00: 0x27ac03f0  addiu       $t4, $sp, 0x3F0
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_20ee04:
    // 0x20ee04: 0x27ad0400  addiu       $t5, $sp, 0x400
    ctx->pc = 0x20ee04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_20ee08:
    // 0x20ee08: 0x27b40410  addiu       $s4, $sp, 0x410
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_20ee0c:
    // 0x20ee0c: 0x27b50420  addiu       $s5, $sp, 0x420
    ctx->pc = 0x20ee0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_20ee10:
    // 0x20ee10: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x20ee10u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20ee14:
    // 0x20ee14: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x20ee14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20ee18:
    // 0x20ee18: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x20ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_20ee1c:
    // 0x20ee1c: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x20ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
label_20ee20:
    // 0x20ee20: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20ee24:
    // 0x20ee24: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_20ee28:
    if (ctx->pc == 0x20EE28u) {
        ctx->pc = 0x20EE28u;
            // 0x20ee28: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x20EE2Cu;
        goto label_20ee2c;
    }
    ctx->pc = 0x20EE24u;
    {
        const bool branch_taken_0x20ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE24u;
            // 0x20ee28: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee24) {
            ctx->pc = 0x20EE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee10;
        }
    }
    ctx->pc = 0x20EE2Cu;
label_20ee2c:
    // 0x20ee2c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20ee30:
    // 0x20ee30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ee34:
    // 0x20ee34: 0x96510012  lhu         $s1, 0x12($s2)
    ctx->pc = 0x20ee34u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_20ee38:
    // 0x20ee38: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x20ee38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_20ee3c:
    // 0x20ee3c: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x20ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_20ee40:
    // 0x20ee40: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x20ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_20ee44:
    // 0x20ee44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x20ee44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_20ee48:
    // 0x20ee48: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x20ee48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_20ee4c:
    // 0x20ee4c: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x20ee4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_20ee50:
    // 0x20ee50: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x20ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_20ee54:
    // 0x20ee54: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x20ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_20ee58:
    // 0x20ee58: 0xa0a7fff0  sb          $a3, -0x10($a1)
    ctx->pc = 0x20ee58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967280), (uint8_t)GPR_U32(ctx, 7));
label_20ee5c:
    // 0x20ee5c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x20ee5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_20ee60:
    // 0x20ee60: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x20ee60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_20ee64:
    // 0x20ee64: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x20ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
label_20ee68:
    // 0x20ee68: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x20ee68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_20ee6c:
    // 0x20ee6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x20ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_20ee70:
    // 0x20ee70: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x20ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_20ee74:
    // 0x20ee74: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x20ee74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_20ee78:
    // 0x20ee78: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x20ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_20ee7c:
    // 0x20ee7c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x20ee7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_20ee80:
    // 0x20ee80: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x20ee80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_20ee84:
    // 0x20ee84: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x20ee84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_20ee88:
    // 0x20ee88: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x20ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_20ee8c:
    // 0x20ee8c: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x20ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_20ee90:
    // 0x20ee90: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x20ee90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_20ee94:
    // 0x20ee94: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x20ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_20ee98:
    // 0x20ee98: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x20ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_20ee9c:
    // 0x20ee9c: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x20ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_20eea0:
    // 0x20eea0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x20eea0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20eea4:
    // 0x20eea4: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x20eea4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20eea8:
    // 0x20eea8: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x20eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
label_20eeac:
    // 0x20eeac: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x20eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
label_20eeb0:
    // 0x20eeb0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20eeb4:
    // 0x20eeb4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_20eeb8:
    if (ctx->pc == 0x20EEB8u) {
        ctx->pc = 0x20EEB8u;
            // 0x20eeb8: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->pc = 0x20EEBCu;
        goto label_20eebc;
    }
    ctx->pc = 0x20EEB4u;
    {
        const bool branch_taken_0x20eeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20EEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EEB4u;
            // 0x20eeb8: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eeb4) {
            ctx->pc = 0x20EEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20eea0;
        }
    }
    ctx->pc = 0x20EEBCu;
label_20eebc:
    // 0x20eebc: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x20eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_20eec0:
    // 0x20eec0: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x20eec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_20eec4:
    // 0x20eec4: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x20eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_20eec8:
    // 0x20eec8: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x20eec8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20eecc:
    // 0x20eecc: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x20eeccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20eed0:
    // 0x20eed0: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x20eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_20eed4:
    // 0x20eed4: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x20eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
label_20eed8:
    // 0x20eed8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20eedc:
    // 0x20eedc: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_20eee0:
    if (ctx->pc == 0x20EEE0u) {
        ctx->pc = 0x20EEE0u;
            // 0x20eee0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x20EEE4u;
        goto label_20eee4;
    }
    ctx->pc = 0x20EEDCu;
    {
        const bool branch_taken_0x20eedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EEDCu;
            // 0x20eee0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eedc) {
            ctx->pc = 0x20EEC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20eec8;
        }
    }
    ctx->pc = 0x20EEE4u;
label_20eee4:
    // 0x20eee4: 0xdba402a0  lqc2        $vf4, 0x2A0($sp)
    ctx->pc = 0x20eee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_20eee8:
    // 0x20eee8: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x20eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_20eeec:
    // 0x20eeec: 0xdba30320  lqc2        $vf3, 0x320($sp)
    ctx->pc = 0x20eeecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_20eef0:
    // 0x20eef0: 0x4be62118  vmulx.xyzw  $vf4, $vf4, $vf6x
    ctx->pc = 0x20eef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20eef4:
    // 0x20eef4: 0xdba10410  lqc2        $vf1, 0x410($sp)
    ctx->pc = 0x20eef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_20eef8:
    // 0x20eef8: 0x4be518d8  vmulx.xyzw  $vf3, $vf3, $vf5x
    ctx->pc = 0x20eef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20eefc:
    // 0x20eefc: 0xdba20420  lqc2        $vf2, 0x420($sp)
    ctx->pc = 0x20eefcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_20ef00:
    // 0x20ef00: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x20ef00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20ef04:
    // 0x20ef04: 0x4be51098  vmulx.xyzw  $vf2, $vf2, $vf5x
    ctx->pc = 0x20ef04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20ef08:
    // 0x20ef08: 0xafaa0240  sw          $t2, 0x240($sp)
    ctx->pc = 0x20ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 10));
label_20ef0c:
    // 0x20ef0c: 0xafab0244  sw          $t3, 0x244($sp)
    ctx->pc = 0x20ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 11));
label_20ef10:
    // 0x20ef10: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x20ef10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_20ef14:
    // 0x20ef14: 0xfba103f0  sqc2        $vf1, 0x3F0($sp)
    ctx->pc = 0x20ef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[1]));
label_20ef18:
    // 0x20ef18: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20ef18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20ef1c:
    // 0x20ef1c: 0xfba20400  sqc2        $vf2, 0x400($sp)
    ctx->pc = 0x20ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[2]));
label_20ef20:
    // 0x20ef20: 0xfba402a0  sqc2        $vf4, 0x2A0($sp)
    ctx->pc = 0x20ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[4]));
label_20ef24:
    // 0x20ef24: 0xc083efa  jal         func_20FBE8
label_20ef28:
    if (ctx->pc == 0x20EF28u) {
        ctx->pc = 0x20EF28u;
            // 0x20ef28: 0xfba30320  sqc2        $vf3, 0x320($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->pc = 0x20EF2Cu;
        goto label_20ef2c;
    }
    ctx->pc = 0x20EF24u;
    SET_GPR_U32(ctx, 31, 0x20EF2Cu);
    ctx->pc = 0x20EF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF24u;
            // 0x20ef28: 0xfba30320  sqc2        $vf3, 0x320($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FBE8u;
    if (runtime->hasFunction(0x20FBE8u)) {
        auto targetFn = runtime->lookupFunction(0x20FBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF2Cu; }
        if (ctx->pc != 0x20EF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FBE8_0x20fbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF2Cu; }
        if (ctx->pc != 0x20EF2Cu) { return; }
    }
    ctx->pc = 0x20EF2Cu;
label_20ef2c:
    // 0x20ef2c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x20ef2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_20ef30:
    // 0x20ef30: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x20ef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_20ef34:
    // 0x20ef34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20ef38:
    if (ctx->pc == 0x20EF38u) {
        ctx->pc = 0x20EF38u;
            // 0x20ef38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EF3Cu;
        goto label_20ef3c;
    }
    ctx->pc = 0x20EF34u;
    {
        const bool branch_taken_0x20ef34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF34u;
            // 0x20ef38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef34) {
            ctx->pc = 0x20EF54u;
            goto label_20ef54;
        }
    }
    ctx->pc = 0x20EF3Cu;
label_20ef3c:
    // 0x20ef3c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x20ef3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20ef40:
    // 0x20ef40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ef44:
    // 0x20ef44: 0xc0847da  jal         func_211F68
label_20ef48:
    if (ctx->pc == 0x20EF48u) {
        ctx->pc = 0x20EF48u;
            // 0x20ef48: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EF4Cu;
        goto label_20ef4c;
    }
    ctx->pc = 0x20EF44u;
    SET_GPR_U32(ctx, 31, 0x20EF4Cu);
    ctx->pc = 0x20EF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF44u;
            // 0x20ef48: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (runtime->hasFunction(0x211F68u)) {
        auto targetFn = runtime->lookupFunction(0x211F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF4Cu; }
        if (ctx->pc != 0x20EF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F68_0x211f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF4Cu; }
        if (ctx->pc != 0x20EF4Cu) { return; }
    }
    ctx->pc = 0x20EF4Cu;
label_20ef4c:
    // 0x20ef4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_20ef50:
    if (ctx->pc == 0x20EF50u) {
        ctx->pc = 0x20EF50u;
            // 0x20ef50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EF54u;
        goto label_20ef54;
    }
    ctx->pc = 0x20EF4Cu;
    {
        const bool branch_taken_0x20ef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF4Cu;
            // 0x20ef50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef4c) {
            ctx->pc = 0x20EF68u;
            goto label_20ef68;
        }
    }
    ctx->pc = 0x20EF54u;
label_20ef54:
    // 0x20ef54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ef54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ef58:
    // 0x20ef58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x20ef58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20ef5c:
    // 0x20ef5c: 0xc08349e  jal         func_20D278
label_20ef60:
    if (ctx->pc == 0x20EF60u) {
        ctx->pc = 0x20EF60u;
            // 0x20ef60: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EF64u;
        goto label_20ef64;
    }
    ctx->pc = 0x20EF5Cu;
    SET_GPR_U32(ctx, 31, 0x20EF64u);
    ctx->pc = 0x20EF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF5Cu;
            // 0x20ef60: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D278u;
    goto label_20d278;
    ctx->pc = 0x20EF64u;
label_20ef64:
    // 0x20ef64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20ef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ef68:
    // 0x20ef68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20ef68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20ef6c:
    // 0x20ef6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20ef6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20ef70:
    // 0x20ef70: 0xc083efa  jal         func_20FBE8
label_20ef74:
    if (ctx->pc == 0x20EF74u) {
        ctx->pc = 0x20EF74u;
            // 0x20ef74: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EF78u;
        goto label_20ef78;
    }
    ctx->pc = 0x20EF70u;
    SET_GPR_U32(ctx, 31, 0x20EF78u);
    ctx->pc = 0x20EF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF70u;
            // 0x20ef74: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FBE8u;
    if (runtime->hasFunction(0x20FBE8u)) {
        auto targetFn = runtime->lookupFunction(0x20FBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF78u; }
        if (ctx->pc != 0x20EF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FBE8_0x20fbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF78u; }
        if (ctx->pc != 0x20EF78u) { return; }
    }
    ctx->pc = 0x20EF78u;
label_20ef78:
    // 0x20ef78: 0x100000ad  b           . + 4 + (0xAD << 2)
label_20ef7c:
    if (ctx->pc == 0x20EF7Cu) {
        ctx->pc = 0x20EF7Cu;
            // 0x20ef7c: 0x8fa50444  lw          $a1, 0x444($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
        ctx->pc = 0x20EF80u;
        goto label_20ef80;
    }
    ctx->pc = 0x20EF78u;
    {
        const bool branch_taken_0x20ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF78u;
            // 0x20ef7c: 0x8fa50444  lw          $a1, 0x444($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef78) {
            ctx->pc = 0x20F230u;
            goto label_20f230;
        }
    }
    ctx->pc = 0x20EF80u;
label_20ef80:
    // 0x20ef80: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x20ef80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_20ef84:
    // 0x20ef84: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x20ef84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20ef88:
    // 0x20ef88: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20ef8c:
    // 0x20ef8c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x20ef8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20ef90:
    // 0x20ef90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20ef94:
    // 0x20ef94: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x20ef94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_20ef98:
    // 0x20ef98: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x20ef98u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
label_20ef9c:
    // 0x20ef9c: 0x27ac0160  addiu       $t4, $sp, 0x160
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20efa0:
    // 0x20efa0: 0x27b40430  addiu       $s4, $sp, 0x430
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_20efa4:
    // 0x20efa4: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x20efa4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20efa8:
    // 0x20efa8: 0x78480010  lq          $t0, 0x10($v0)
    ctx->pc = 0x20efa8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20efac:
    // 0x20efac: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x20efacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_20efb0:
    // 0x20efb0: 0x7c680010  sq          $t0, 0x10($v1)
    ctx->pc = 0x20efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 8));
label_20efb4:
    // 0x20efb4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20efb8:
    // 0x20efb8: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_20efbc:
    if (ctx->pc == 0x20EFBCu) {
        ctx->pc = 0x20EFBCu;
            // 0x20efbc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x20EFC0u;
        goto label_20efc0;
    }
    ctx->pc = 0x20EFB8u;
    {
        const bool branch_taken_0x20efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EFB8u;
            // 0x20efbc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efb8) {
            ctx->pc = 0x20EFA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20efa4;
        }
    }
    ctx->pc = 0x20EFC0u;
label_20efc0:
    // 0x20efc0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x20efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20efc4:
    // 0x20efc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20efc8:
    // 0x20efc8: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x20efc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_20efcc:
    // 0x20efcc: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x20efccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20efd0:
    // 0x20efd0: 0x8d6a0048  lw          $t2, 0x48($t3)
    ctx->pc = 0x20efd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
label_20efd4:
    // 0x20efd4: 0x24c3fff0  addiu       $v1, $a2, -0x10
    ctx->pc = 0x20efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_20efd8:
    // 0x20efd8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x20efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_20efdc:
    // 0x20efdc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x20efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_20efe0:
    // 0x20efe0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x20efe0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_20efe4:
    // 0x20efe4: 0x8d670050  lw          $a3, 0x50($t3)
    ctx->pc = 0x20efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
label_20efe8:
    // 0x20efe8: 0x8d650054  lw          $a1, 0x54($t3)
    ctx->pc = 0x20efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 84)));
label_20efec:
    // 0x20efec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_20eff0:
    // 0x20eff0: 0xa0c8fff0  sb          $t0, -0x10($a2)
    ctx->pc = 0x20eff0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967280), (uint8_t)GPR_U32(ctx, 8));
label_20eff4:
    // 0x20eff4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20eff8:
    // 0x20eff8: 0xa0690001  sb          $t1, 0x1($v1)
    ctx->pc = 0x20eff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 9));
label_20effc:
    // 0x20effc: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x20effcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
label_20f000:
    // 0x20f000: 0xa4650006  sh          $a1, 0x6($v1)
    ctx->pc = 0x20f000u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
label_20f004:
    // 0x20f004: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x20f004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_20f008:
    // 0x20f008: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x20f008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
label_20f00c:
    // 0x20f00c: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x20f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_20f010:
    // 0x20f010: 0x8d620050  lw          $v0, 0x50($t3)
    ctx->pc = 0x20f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
label_20f014:
    // 0x20f014: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20f014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20f018:
    // 0x20f018: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_20f01c:
    if (ctx->pc == 0x20F01Cu) {
        ctx->pc = 0x20F01Cu;
            // 0x20f01c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F020u;
        goto label_20f020;
    }
    ctx->pc = 0x20F018u;
    {
        const bool branch_taken_0x20f018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F018u;
            // 0x20f01c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f018) {
            ctx->pc = 0x20F084u;
            goto label_20f084;
        }
    }
    ctx->pc = 0x20F020u;
label_20f020:
    // 0x20f020: 0x8d640030  lw          $a0, 0x30($t3)
    ctx->pc = 0x20f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
label_20f024:
    // 0x20f024: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x20f024u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_20f028:
    // 0x20f028: 0xa3a20160  sb          $v0, 0x160($sp)
    ctx->pc = 0x20f028u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 2));
label_20f02c:
    // 0x20f02c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x20f02cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_20f030:
    // 0x20f030: 0xa3a30161  sb          $v1, 0x161($sp)
    ctx->pc = 0x20f030u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 353), (uint8_t)GPR_U32(ctx, 3));
label_20f034:
    // 0x20f034: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20f038:
    // 0x20f038: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x20f038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_20f03c:
    // 0x20f03c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20f040:
    // 0x20f040: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x20f040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_20f044:
    // 0x20f044: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x20f044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_20f048:
    // 0x20f048: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x20f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_20f04c:
    // 0x20f04c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x20f04cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_20f050:
    // 0x20f050: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x20f050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
label_20f054:
    // 0x20f054: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x20f054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_20f058:
    // 0x20f058: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x20f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_20f05c:
    // 0x20f05c: 0x78830040  lq          $v1, 0x40($a0)
    ctx->pc = 0x20f05cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_20f060:
    // 0x20f060: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x20f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
label_20f064:
    // 0x20f064: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x20f064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_20f068:
    // 0x20f068: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x20f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
label_20f06c:
    // 0x20f06c: 0x78830060  lq          $v1, 0x60($a0)
    ctx->pc = 0x20f06cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_20f070:
    // 0x20f070: 0x7fa301c0  sq          $v1, 0x1C0($sp)
    ctx->pc = 0x20f070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 3));
label_20f074:
    // 0x20f074: 0x78820070  lq          $v0, 0x70($a0)
    ctx->pc = 0x20f074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 112)));
label_20f078:
    // 0x20f078: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x20f078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_20f07c:
    // 0x20f07c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_20f080:
    if (ctx->pc == 0x20F080u) {
        ctx->pc = 0x20F080u;
            // 0x20f080: 0xad6c0030  sw          $t4, 0x30($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 12));
        ctx->pc = 0x20F084u;
        goto label_20f084;
    }
    ctx->pc = 0x20F07Cu;
    {
        const bool branch_taken_0x20f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F07Cu;
            // 0x20f080: 0xad6c0030  sw          $t4, 0x30($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f07c) {
            ctx->pc = 0x20F0F0u;
            goto label_20f0f0;
        }
    }
    ctx->pc = 0x20F084u;
label_20f084:
    // 0x20f084: 0x8d640034  lw          $a0, 0x34($t3)
    ctx->pc = 0x20f084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
label_20f088:
    // 0x20f088: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x20f088u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
label_20f08c:
    // 0x20f08c: 0x4bc1012c  vsub.xyz    $vf4, $vf0, $vf1
    ctx->pc = 0x20f08cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20f090:
    // 0x20f090: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x20f090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_20f094:
    // 0x20f094: 0x4a24233c  vmove.w     $vf4, $vf4
    ctx->pc = 0x20f094u;
    ctx->vu0_vf[4] = ctx->vu0_vf[4];
label_20f098:
    // 0x20f098: 0xa3a20160  sb          $v0, 0x160($sp)
    ctx->pc = 0x20f098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 2));
label_20f09c:
    // 0x20f09c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x20f09cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_20f0a0:
    // 0x20f0a0: 0xa3a30161  sb          $v1, 0x161($sp)
    ctx->pc = 0x20f0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 353), (uint8_t)GPR_U32(ctx, 3));
label_20f0a4:
    // 0x20f0a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20f0a8:
    // 0x20f0a8: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x20f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_20f0ac:
    // 0x20f0ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20f0b0:
    // 0x20f0b0: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x20f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_20f0b4:
    // 0x20f0b4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x20f0b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_20f0b8:
    // 0x20f0b8: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x20f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_20f0bc:
    // 0x20f0bc: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x20f0bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_20f0c0:
    // 0x20f0c0: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x20f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
label_20f0c4:
    // 0x20f0c4: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x20f0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_20f0c8:
    // 0x20f0c8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x20f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_20f0cc:
    // 0x20f0cc: 0x78830040  lq          $v1, 0x40($a0)
    ctx->pc = 0x20f0ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_20f0d0:
    // 0x20f0d0: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x20f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
label_20f0d4:
    // 0x20f0d4: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x20f0d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_20f0d8:
    // 0x20f0d8: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x20f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
label_20f0dc:
    // 0x20f0dc: 0x78830060  lq          $v1, 0x60($a0)
    ctx->pc = 0x20f0dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_20f0e0:
    // 0x20f0e0: 0x7fa301c0  sq          $v1, 0x1C0($sp)
    ctx->pc = 0x20f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 3));
label_20f0e4:
    // 0x20f0e4: 0x78820070  lq          $v0, 0x70($a0)
    ctx->pc = 0x20f0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 112)));
label_20f0e8:
    // 0x20f0e8: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x20f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_20f0ec:
    // 0x20f0ec: 0xad6c0034  sw          $t4, 0x34($t3)
    ctx->pc = 0x20f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 12));
label_20f0f0:
    // 0x20f0f0: 0xda210040  lqc2        $vf1, 0x40($s1)
    ctx->pc = 0x20f0f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_20f0f4:
    // 0x20f0f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20f0f8:
    // 0x20f0f8: 0x4bc408ea  vmul.xyz    $vf3, $vf1, $vf4
    ctx->pc = 0x20f0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_20f0fc:
    // 0x20f0fc: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x20f0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20f100:
    // 0x20f100: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x20f100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
label_20f104:
    // 0x20f104: 0x4b0310ca  vmaddz.x    $vf3, $vf2, $vf3z
    ctx->pc = 0x20f104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20f108:
    // 0x20f108: 0xfba40430  sqc2        $vf4, 0x430($sp)
    ctx->pc = 0x20f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[4]));
label_20f10c:
    // 0x20f10c: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x20f10cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
label_20f110:
    // 0x20f110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f114:
    // 0x20f114: 0x4be011bf  vmulaw.xyzw $ACC, $vf2, $vf0w
    ctx->pc = 0x20f114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
label_20f118:
    // 0x20f118: 0x4be3088c  vmsubx.xyzw $vf2, $vf1, $vf3x
    ctx->pc = 0x20f118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20f11c:
    // 0x20f11c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20f11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20f120:
    // 0x20f120: 0x4be001bc  vmulax.xyzw $ACC, $vf0, $vf0x
    ctx->pc = 0x20f120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20f124:
    // 0x20f124: 0x4be0104f  vmsubw.xyzw $vf1, $vf2, $vf0w
    ctx->pc = 0x20f124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20f128:
    // 0x20f128: 0xfba20430  sqc2        $vf2, 0x430($sp)
    ctx->pc = 0x20f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[2]));
label_20f12c:
    // 0x20f12c: 0xfba10430  sqc2        $vf1, 0x430($sp)
    ctx->pc = 0x20f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[1]));
label_20f130:
    // 0x20f130: 0xc083f04  jal         func_20FC10
label_20f134:
    if (ctx->pc == 0x20F134u) {
        ctx->pc = 0x20F134u;
            // 0x20f134: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F138u;
        goto label_20f138;
    }
    ctx->pc = 0x20F130u;
    SET_GPR_U32(ctx, 31, 0x20F138u);
    ctx->pc = 0x20F134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F130u;
            // 0x20f134: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FC10u;
    if (runtime->hasFunction(0x20FC10u)) {
        auto targetFn = runtime->lookupFunction(0x20FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F138u; }
        if (ctx->pc != 0x20F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FC10_0x20fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F138u; }
        if (ctx->pc != 0x20F138u) { return; }
    }
    ctx->pc = 0x20F138u;
label_20f138:
    // 0x20f138: 0xdba10170  lqc2        $vf1, 0x170($sp)
    ctx->pc = 0x20f138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_20f13c:
    // 0x20f13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f140:
    // 0x20f140: 0xdba20430  lqc2        $vf2, 0x430($sp)
    ctx->pc = 0x20f140u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_20f144:
    // 0x20f144: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_20f148:
    // 0x20f148: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x20f148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20f14c:
    // 0x20f14c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f150:
    // 0x20f150: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x20f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
label_20f154:
    // 0x20f154: 0xc0847da  jal         func_211F68
label_20f158:
    if (ctx->pc == 0x20F158u) {
        ctx->pc = 0x20F158u;
            // 0x20f158: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F15Cu;
        goto label_20f15c;
    }
    ctx->pc = 0x20F154u;
    SET_GPR_U32(ctx, 31, 0x20F15Cu);
    ctx->pc = 0x20F158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F154u;
            // 0x20f158: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (runtime->hasFunction(0x211F68u)) {
        auto targetFn = runtime->lookupFunction(0x211F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F15Cu; }
        if (ctx->pc != 0x20F15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F68_0x211f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F15Cu; }
        if (ctx->pc != 0x20F15Cu) { return; }
    }
    ctx->pc = 0x20F15Cu;
label_20f15c:
    // 0x20f15c: 0xdba10430  lqc2        $vf1, 0x430($sp)
    ctx->pc = 0x20f15cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_20f160:
    // 0x20f160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20f164:
    // 0x20f164: 0x4be001bc  vmulax.xyzw $ACC, $vf0, $vf0x
    ctx->pc = 0x20f164u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
label_20f168:
    // 0x20f168: 0x4be0084f  vmsubw.xyzw $vf1, $vf1, $vf0w
    ctx->pc = 0x20f168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_20f16c:
    // 0x20f16c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f170:
    // 0x20f170: 0xfba10430  sqc2        $vf1, 0x430($sp)
    ctx->pc = 0x20f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[1]));
label_20f174:
    // 0x20f174: 0xc083f04  jal         func_20FC10
label_20f178:
    if (ctx->pc == 0x20F178u) {
        ctx->pc = 0x20F178u;
            // 0x20f178: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F17Cu;
        goto label_20f17c;
    }
    ctx->pc = 0x20F174u;
    SET_GPR_U32(ctx, 31, 0x20F17Cu);
    ctx->pc = 0x20F178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F174u;
            // 0x20f178: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FC10u;
    if (runtime->hasFunction(0x20FC10u)) {
        auto targetFn = runtime->lookupFunction(0x20FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F17Cu; }
        if (ctx->pc != 0x20F17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FC10_0x20fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F17Cu; }
        if (ctx->pc != 0x20F17Cu) { return; }
    }
    ctx->pc = 0x20F17Cu;
label_20f17c:
    // 0x20f17c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_20f180:
    if (ctx->pc == 0x20F180u) {
        ctx->pc = 0x20F180u;
            // 0x20f180: 0x8fa50444  lw          $a1, 0x444($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
        ctx->pc = 0x20F184u;
        goto label_20f184;
    }
    ctx->pc = 0x20F17Cu;
    {
        const bool branch_taken_0x20f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F17Cu;
            // 0x20f180: 0x8fa50444  lw          $a1, 0x444($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f17c) {
            ctx->pc = 0x20F230u;
            goto label_20f230;
        }
    }
    ctx->pc = 0x20F184u;
label_20f184:
    // 0x20f184: 0x8fab0468  lw          $t3, 0x468($sp)
    ctx->pc = 0x20f184u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
label_20f188:
    // 0x20f188: 0x27a30440  addiu       $v1, $sp, 0x440
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_20f18c:
    // 0x20f18c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x20f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20f190:
    // 0x20f190: 0xc560001c  lwc1        $f0, 0x1C($t3)
    ctx->pc = 0x20f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f194:
    // 0x20f194: 0x8fa40448  lw          $a0, 0x448($sp)
    ctx->pc = 0x20f194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1096)));
label_20f198:
    // 0x20f198: 0xe7a00440  swc1        $f0, 0x440($sp)
    ctx->pc = 0x20f198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_20f19c:
    // 0x20f19c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x20f19cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f1a0:
    // 0x20f1a0: 0xd89e0000  lqc2        $vf30, 0x0($a0)
    ctx->pc = 0x20f1a0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20f1a4:
    // 0x20f1a4: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x20f1a4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_20f1a8:
    // 0x20f1a8: 0x4a0046f8  vcallms     0x8D8
    ctx->pc = 0x20f1a8u;
    {     ctx->vu0_tpc = 0x8D8;     runtime->executeVU0Microprogram(rdram, ctx, 0x8D8); }
label_20f1ac:
    // 0x20f1ac: 0xcc800040  pref        0x00, 0x40($a0)
    ctx->pc = 0x20f1acu;
    // PREF instruction (ignored)
label_20f1b0:
    // 0x20f1b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x20f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f1b4:
    // 0x20f1b4: 0xc5640010  lwc1        $f4, 0x10($t3)
    ctx->pc = 0x20f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20f1b8:
    // 0x20f1b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20f1b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_20f1bc:
    // 0x20f1bc: 0xc5630014  lwc1        $f3, 0x14($t3)
    ctx->pc = 0x20f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20f1c0:
    // 0x20f1c0: 0xc5610018  lwc1        $f1, 0x18($t3)
    ctx->pc = 0x20f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f1c4:
    // 0x20f1c4: 0xc7a20440  lwc1        $f2, 0x440($sp)
    ctx->pc = 0x20f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f1c8:
    // 0x20f1c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x20f1c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20f1cc:
    // 0x20f1cc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x20f1ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_20f1d0:
    // 0x20f1d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f1d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f1d4:
    // 0x20f1d4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x20f1d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_20f1d8:
    // 0x20f1d8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x20f1d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_20f1dc:
    // 0x20f1dc: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20f1dcu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
label_20f1e0:
    // 0x20f1e0: 0xf85e0000  sqc2        $vf30, 0x0($v0)
    ctx->pc = 0x20f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[30]));
label_20f1e4:
    // 0x20f1e4: 0xf85f0010  sqc2        $vf31, 0x10($v0)
    ctx->pc = 0x20f1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[31]));
label_20f1e8:
    // 0x20f1e8: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x20f1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_20f1ec:
    // 0x20f1ec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20f1f0:
    // 0x20f1f0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x20f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20f1f4:
    // 0x20f1f4: 0xc7a00440  lwc1        $f0, 0x440($sp)
    ctx->pc = 0x20f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f1f8:
    // 0x20f1f8: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x20f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_20f1fc:
    // 0x20f1fc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x20f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_20f200:
    // 0x20f200: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20f200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_20f204:
    // 0x20f204: 0xe4640020  swc1        $f4, 0x20($v1)
    ctx->pc = 0x20f204u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_20f208:
    // 0x20f208: 0xe4630024  swc1        $f3, 0x24($v1)
    ctx->pc = 0x20f208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_20f20c:
    // 0x20f20c: 0x10000007  b           . + 4 + (0x7 << 2)
label_20f210:
    if (ctx->pc == 0x20F210u) {
        ctx->pc = 0x20F210u;
            // 0x20f210: 0xe4600028  swc1        $f0, 0x28($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->pc = 0x20F214u;
        goto label_20f214;
    }
    ctx->pc = 0x20F20Cu;
    {
        const bool branch_taken_0x20f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F20Cu;
            // 0x20f210: 0xe4600028  swc1        $f0, 0x28($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f20c) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20F214u;
label_20f214:
    // 0x20f214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f218:
    // 0x20f218: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20f21c:
    // 0x20f21c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20f21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_20f220:
    // 0x20f220: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x20f220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20f224:
    // 0x20f224: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x20f224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
label_20f228:
    // 0x20f228: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x20f228u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_20f22c:
    // 0x20f22c: 0x8fa50444  lw          $a1, 0x444($sp)
    ctx->pc = 0x20f22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
label_20f230:
    // 0x20f230: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x20f230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_20f234:
    // 0x20f234: 0x5440f861  bnel        $v0, $zero, . + 4 + (-0x79F << 2)
label_20f238:
    if (ctx->pc == 0x20F238u) {
        ctx->pc = 0x20F238u;
            // 0x20f238: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x20F23Cu;
        goto label_20f23c;
    }
    ctx->pc = 0x20F234u;
    {
        const bool branch_taken_0x20f234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f234) {
            ctx->pc = 0x20F238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F234u;
            // 0x20f238: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d3bc;
        }
    }
    ctx->pc = 0x20F23Cu;
label_20f23c:
    // 0x20f23c: 0x7bb00570  lq          $s0, 0x570($sp)
    ctx->pc = 0x20f23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_20f240:
    // 0x20f240: 0x7bb10560  lq          $s1, 0x560($sp)
    ctx->pc = 0x20f240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_20f244:
    // 0x20f244: 0x7bb20550  lq          $s2, 0x550($sp)
    ctx->pc = 0x20f244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_20f248:
    // 0x20f248: 0x7bb30540  lq          $s3, 0x540($sp)
    ctx->pc = 0x20f248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_20f24c:
    // 0x20f24c: 0x7bb40530  lq          $s4, 0x530($sp)
    ctx->pc = 0x20f24cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_20f250:
    // 0x20f250: 0x7bb50520  lq          $s5, 0x520($sp)
    ctx->pc = 0x20f250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_20f254:
    // 0x20f254: 0x7bb60510  lq          $s6, 0x510($sp)
    ctx->pc = 0x20f254u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_20f258:
    // 0x20f258: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x20f258u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_20f25c:
    // 0x20f25c: 0x7bbe04f0  lq          $fp, 0x4F0($sp)
    ctx->pc = 0x20f25cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_20f260:
    // 0x20f260: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x20f260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
label_20f264:
    // 0x20f264: 0xc7b50588  lwc1        $f21, 0x588($sp)
    ctx->pc = 0x20f264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20f268:
    // 0x20f268: 0xc7b40580  lwc1        $f20, 0x580($sp)
    ctx->pc = 0x20f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20f26c:
    // 0x20f26c: 0x3e00008  jr          $ra
label_20f270:
    if (ctx->pc == 0x20F270u) {
        ctx->pc = 0x20F270u;
            // 0x20f270: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->pc = 0x20F274u;
        goto label_20f274;
    }
    ctx->pc = 0x20F26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F26Cu;
            // 0x20f270: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F274u;
label_20f274:
    // 0x20f274: 0x0  nop
    ctx->pc = 0x20f274u;
    // NOP
}
