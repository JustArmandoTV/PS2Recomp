#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB230
// Address: 0x1eb230 - 0x1ebd40
void sub_001EB230_0x1eb230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB230_0x1eb230");
#endif

    switch (ctx->pc) {
        case 0x1eb230u: goto label_1eb230;
        case 0x1eb234u: goto label_1eb234;
        case 0x1eb238u: goto label_1eb238;
        case 0x1eb23cu: goto label_1eb23c;
        case 0x1eb240u: goto label_1eb240;
        case 0x1eb244u: goto label_1eb244;
        case 0x1eb248u: goto label_1eb248;
        case 0x1eb24cu: goto label_1eb24c;
        case 0x1eb250u: goto label_1eb250;
        case 0x1eb254u: goto label_1eb254;
        case 0x1eb258u: goto label_1eb258;
        case 0x1eb25cu: goto label_1eb25c;
        case 0x1eb260u: goto label_1eb260;
        case 0x1eb264u: goto label_1eb264;
        case 0x1eb268u: goto label_1eb268;
        case 0x1eb26cu: goto label_1eb26c;
        case 0x1eb270u: goto label_1eb270;
        case 0x1eb274u: goto label_1eb274;
        case 0x1eb278u: goto label_1eb278;
        case 0x1eb27cu: goto label_1eb27c;
        case 0x1eb280u: goto label_1eb280;
        case 0x1eb284u: goto label_1eb284;
        case 0x1eb288u: goto label_1eb288;
        case 0x1eb28cu: goto label_1eb28c;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb294u: goto label_1eb294;
        case 0x1eb298u: goto label_1eb298;
        case 0x1eb29cu: goto label_1eb29c;
        case 0x1eb2a0u: goto label_1eb2a0;
        case 0x1eb2a4u: goto label_1eb2a4;
        case 0x1eb2a8u: goto label_1eb2a8;
        case 0x1eb2acu: goto label_1eb2ac;
        case 0x1eb2b0u: goto label_1eb2b0;
        case 0x1eb2b4u: goto label_1eb2b4;
        case 0x1eb2b8u: goto label_1eb2b8;
        case 0x1eb2bcu: goto label_1eb2bc;
        case 0x1eb2c0u: goto label_1eb2c0;
        case 0x1eb2c4u: goto label_1eb2c4;
        case 0x1eb2c8u: goto label_1eb2c8;
        case 0x1eb2ccu: goto label_1eb2cc;
        case 0x1eb2d0u: goto label_1eb2d0;
        case 0x1eb2d4u: goto label_1eb2d4;
        case 0x1eb2d8u: goto label_1eb2d8;
        case 0x1eb2dcu: goto label_1eb2dc;
        case 0x1eb2e0u: goto label_1eb2e0;
        case 0x1eb2e4u: goto label_1eb2e4;
        case 0x1eb2e8u: goto label_1eb2e8;
        case 0x1eb2ecu: goto label_1eb2ec;
        case 0x1eb2f0u: goto label_1eb2f0;
        case 0x1eb2f4u: goto label_1eb2f4;
        case 0x1eb2f8u: goto label_1eb2f8;
        case 0x1eb2fcu: goto label_1eb2fc;
        case 0x1eb300u: goto label_1eb300;
        case 0x1eb304u: goto label_1eb304;
        case 0x1eb308u: goto label_1eb308;
        case 0x1eb30cu: goto label_1eb30c;
        case 0x1eb310u: goto label_1eb310;
        case 0x1eb314u: goto label_1eb314;
        case 0x1eb318u: goto label_1eb318;
        case 0x1eb31cu: goto label_1eb31c;
        case 0x1eb320u: goto label_1eb320;
        case 0x1eb324u: goto label_1eb324;
        case 0x1eb328u: goto label_1eb328;
        case 0x1eb32cu: goto label_1eb32c;
        case 0x1eb330u: goto label_1eb330;
        case 0x1eb334u: goto label_1eb334;
        case 0x1eb338u: goto label_1eb338;
        case 0x1eb33cu: goto label_1eb33c;
        case 0x1eb340u: goto label_1eb340;
        case 0x1eb344u: goto label_1eb344;
        case 0x1eb348u: goto label_1eb348;
        case 0x1eb34cu: goto label_1eb34c;
        case 0x1eb350u: goto label_1eb350;
        case 0x1eb354u: goto label_1eb354;
        case 0x1eb358u: goto label_1eb358;
        case 0x1eb35cu: goto label_1eb35c;
        case 0x1eb360u: goto label_1eb360;
        case 0x1eb364u: goto label_1eb364;
        case 0x1eb368u: goto label_1eb368;
        case 0x1eb36cu: goto label_1eb36c;
        case 0x1eb370u: goto label_1eb370;
        case 0x1eb374u: goto label_1eb374;
        case 0x1eb378u: goto label_1eb378;
        case 0x1eb37cu: goto label_1eb37c;
        case 0x1eb380u: goto label_1eb380;
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb388u: goto label_1eb388;
        case 0x1eb38cu: goto label_1eb38c;
        case 0x1eb390u: goto label_1eb390;
        case 0x1eb394u: goto label_1eb394;
        case 0x1eb398u: goto label_1eb398;
        case 0x1eb39cu: goto label_1eb39c;
        case 0x1eb3a0u: goto label_1eb3a0;
        case 0x1eb3a4u: goto label_1eb3a4;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb3acu: goto label_1eb3ac;
        case 0x1eb3b0u: goto label_1eb3b0;
        case 0x1eb3b4u: goto label_1eb3b4;
        case 0x1eb3b8u: goto label_1eb3b8;
        case 0x1eb3bcu: goto label_1eb3bc;
        case 0x1eb3c0u: goto label_1eb3c0;
        case 0x1eb3c4u: goto label_1eb3c4;
        case 0x1eb3c8u: goto label_1eb3c8;
        case 0x1eb3ccu: goto label_1eb3cc;
        case 0x1eb3d0u: goto label_1eb3d0;
        case 0x1eb3d4u: goto label_1eb3d4;
        case 0x1eb3d8u: goto label_1eb3d8;
        case 0x1eb3dcu: goto label_1eb3dc;
        case 0x1eb3e0u: goto label_1eb3e0;
        case 0x1eb3e4u: goto label_1eb3e4;
        case 0x1eb3e8u: goto label_1eb3e8;
        case 0x1eb3ecu: goto label_1eb3ec;
        case 0x1eb3f0u: goto label_1eb3f0;
        case 0x1eb3f4u: goto label_1eb3f4;
        case 0x1eb3f8u: goto label_1eb3f8;
        case 0x1eb3fcu: goto label_1eb3fc;
        case 0x1eb400u: goto label_1eb400;
        case 0x1eb404u: goto label_1eb404;
        case 0x1eb408u: goto label_1eb408;
        case 0x1eb40cu: goto label_1eb40c;
        case 0x1eb410u: goto label_1eb410;
        case 0x1eb414u: goto label_1eb414;
        case 0x1eb418u: goto label_1eb418;
        case 0x1eb41cu: goto label_1eb41c;
        case 0x1eb420u: goto label_1eb420;
        case 0x1eb424u: goto label_1eb424;
        case 0x1eb428u: goto label_1eb428;
        case 0x1eb42cu: goto label_1eb42c;
        case 0x1eb430u: goto label_1eb430;
        case 0x1eb434u: goto label_1eb434;
        case 0x1eb438u: goto label_1eb438;
        case 0x1eb43cu: goto label_1eb43c;
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb444u: goto label_1eb444;
        case 0x1eb448u: goto label_1eb448;
        case 0x1eb44cu: goto label_1eb44c;
        case 0x1eb450u: goto label_1eb450;
        case 0x1eb454u: goto label_1eb454;
        case 0x1eb458u: goto label_1eb458;
        case 0x1eb45cu: goto label_1eb45c;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb464u: goto label_1eb464;
        case 0x1eb468u: goto label_1eb468;
        case 0x1eb46cu: goto label_1eb46c;
        case 0x1eb470u: goto label_1eb470;
        case 0x1eb474u: goto label_1eb474;
        case 0x1eb478u: goto label_1eb478;
        case 0x1eb47cu: goto label_1eb47c;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb484u: goto label_1eb484;
        case 0x1eb488u: goto label_1eb488;
        case 0x1eb48cu: goto label_1eb48c;
        case 0x1eb490u: goto label_1eb490;
        case 0x1eb494u: goto label_1eb494;
        case 0x1eb498u: goto label_1eb498;
        case 0x1eb49cu: goto label_1eb49c;
        case 0x1eb4a0u: goto label_1eb4a0;
        case 0x1eb4a4u: goto label_1eb4a4;
        case 0x1eb4a8u: goto label_1eb4a8;
        case 0x1eb4acu: goto label_1eb4ac;
        case 0x1eb4b0u: goto label_1eb4b0;
        case 0x1eb4b4u: goto label_1eb4b4;
        case 0x1eb4b8u: goto label_1eb4b8;
        case 0x1eb4bcu: goto label_1eb4bc;
        case 0x1eb4c0u: goto label_1eb4c0;
        case 0x1eb4c4u: goto label_1eb4c4;
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb4ccu: goto label_1eb4cc;
        case 0x1eb4d0u: goto label_1eb4d0;
        case 0x1eb4d4u: goto label_1eb4d4;
        case 0x1eb4d8u: goto label_1eb4d8;
        case 0x1eb4dcu: goto label_1eb4dc;
        case 0x1eb4e0u: goto label_1eb4e0;
        case 0x1eb4e4u: goto label_1eb4e4;
        case 0x1eb4e8u: goto label_1eb4e8;
        case 0x1eb4ecu: goto label_1eb4ec;
        case 0x1eb4f0u: goto label_1eb4f0;
        case 0x1eb4f4u: goto label_1eb4f4;
        case 0x1eb4f8u: goto label_1eb4f8;
        case 0x1eb4fcu: goto label_1eb4fc;
        case 0x1eb500u: goto label_1eb500;
        case 0x1eb504u: goto label_1eb504;
        case 0x1eb508u: goto label_1eb508;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb510u: goto label_1eb510;
        case 0x1eb514u: goto label_1eb514;
        case 0x1eb518u: goto label_1eb518;
        case 0x1eb51cu: goto label_1eb51c;
        case 0x1eb520u: goto label_1eb520;
        case 0x1eb524u: goto label_1eb524;
        case 0x1eb528u: goto label_1eb528;
        case 0x1eb52cu: goto label_1eb52c;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb534u: goto label_1eb534;
        case 0x1eb538u: goto label_1eb538;
        case 0x1eb53cu: goto label_1eb53c;
        case 0x1eb540u: goto label_1eb540;
        case 0x1eb544u: goto label_1eb544;
        case 0x1eb548u: goto label_1eb548;
        case 0x1eb54cu: goto label_1eb54c;
        case 0x1eb550u: goto label_1eb550;
        case 0x1eb554u: goto label_1eb554;
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb55cu: goto label_1eb55c;
        case 0x1eb560u: goto label_1eb560;
        case 0x1eb564u: goto label_1eb564;
        case 0x1eb568u: goto label_1eb568;
        case 0x1eb56cu: goto label_1eb56c;
        case 0x1eb570u: goto label_1eb570;
        case 0x1eb574u: goto label_1eb574;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb580u: goto label_1eb580;
        case 0x1eb584u: goto label_1eb584;
        case 0x1eb588u: goto label_1eb588;
        case 0x1eb58cu: goto label_1eb58c;
        case 0x1eb590u: goto label_1eb590;
        case 0x1eb594u: goto label_1eb594;
        case 0x1eb598u: goto label_1eb598;
        case 0x1eb59cu: goto label_1eb59c;
        case 0x1eb5a0u: goto label_1eb5a0;
        case 0x1eb5a4u: goto label_1eb5a4;
        case 0x1eb5a8u: goto label_1eb5a8;
        case 0x1eb5acu: goto label_1eb5ac;
        case 0x1eb5b0u: goto label_1eb5b0;
        case 0x1eb5b4u: goto label_1eb5b4;
        case 0x1eb5b8u: goto label_1eb5b8;
        case 0x1eb5bcu: goto label_1eb5bc;
        case 0x1eb5c0u: goto label_1eb5c0;
        case 0x1eb5c4u: goto label_1eb5c4;
        case 0x1eb5c8u: goto label_1eb5c8;
        case 0x1eb5ccu: goto label_1eb5cc;
        case 0x1eb5d0u: goto label_1eb5d0;
        case 0x1eb5d4u: goto label_1eb5d4;
        case 0x1eb5d8u: goto label_1eb5d8;
        case 0x1eb5dcu: goto label_1eb5dc;
        case 0x1eb5e0u: goto label_1eb5e0;
        case 0x1eb5e4u: goto label_1eb5e4;
        case 0x1eb5e8u: goto label_1eb5e8;
        case 0x1eb5ecu: goto label_1eb5ec;
        case 0x1eb5f0u: goto label_1eb5f0;
        case 0x1eb5f4u: goto label_1eb5f4;
        case 0x1eb5f8u: goto label_1eb5f8;
        case 0x1eb5fcu: goto label_1eb5fc;
        case 0x1eb600u: goto label_1eb600;
        case 0x1eb604u: goto label_1eb604;
        case 0x1eb608u: goto label_1eb608;
        case 0x1eb60cu: goto label_1eb60c;
        case 0x1eb610u: goto label_1eb610;
        case 0x1eb614u: goto label_1eb614;
        case 0x1eb618u: goto label_1eb618;
        case 0x1eb61cu: goto label_1eb61c;
        case 0x1eb620u: goto label_1eb620;
        case 0x1eb624u: goto label_1eb624;
        case 0x1eb628u: goto label_1eb628;
        case 0x1eb62cu: goto label_1eb62c;
        case 0x1eb630u: goto label_1eb630;
        case 0x1eb634u: goto label_1eb634;
        case 0x1eb638u: goto label_1eb638;
        case 0x1eb63cu: goto label_1eb63c;
        case 0x1eb640u: goto label_1eb640;
        case 0x1eb644u: goto label_1eb644;
        case 0x1eb648u: goto label_1eb648;
        case 0x1eb64cu: goto label_1eb64c;
        case 0x1eb650u: goto label_1eb650;
        case 0x1eb654u: goto label_1eb654;
        case 0x1eb658u: goto label_1eb658;
        case 0x1eb65cu: goto label_1eb65c;
        case 0x1eb660u: goto label_1eb660;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb668u: goto label_1eb668;
        case 0x1eb66cu: goto label_1eb66c;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb674u: goto label_1eb674;
        case 0x1eb678u: goto label_1eb678;
        case 0x1eb67cu: goto label_1eb67c;
        case 0x1eb680u: goto label_1eb680;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb688u: goto label_1eb688;
        case 0x1eb68cu: goto label_1eb68c;
        case 0x1eb690u: goto label_1eb690;
        case 0x1eb694u: goto label_1eb694;
        case 0x1eb698u: goto label_1eb698;
        case 0x1eb69cu: goto label_1eb69c;
        case 0x1eb6a0u: goto label_1eb6a0;
        case 0x1eb6a4u: goto label_1eb6a4;
        case 0x1eb6a8u: goto label_1eb6a8;
        case 0x1eb6acu: goto label_1eb6ac;
        case 0x1eb6b0u: goto label_1eb6b0;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6b8u: goto label_1eb6b8;
        case 0x1eb6bcu: goto label_1eb6bc;
        case 0x1eb6c0u: goto label_1eb6c0;
        case 0x1eb6c4u: goto label_1eb6c4;
        case 0x1eb6c8u: goto label_1eb6c8;
        case 0x1eb6ccu: goto label_1eb6cc;
        case 0x1eb6d0u: goto label_1eb6d0;
        case 0x1eb6d4u: goto label_1eb6d4;
        case 0x1eb6d8u: goto label_1eb6d8;
        case 0x1eb6dcu: goto label_1eb6dc;
        case 0x1eb6e0u: goto label_1eb6e0;
        case 0x1eb6e4u: goto label_1eb6e4;
        case 0x1eb6e8u: goto label_1eb6e8;
        case 0x1eb6ecu: goto label_1eb6ec;
        case 0x1eb6f0u: goto label_1eb6f0;
        case 0x1eb6f4u: goto label_1eb6f4;
        case 0x1eb6f8u: goto label_1eb6f8;
        case 0x1eb6fcu: goto label_1eb6fc;
        case 0x1eb700u: goto label_1eb700;
        case 0x1eb704u: goto label_1eb704;
        case 0x1eb708u: goto label_1eb708;
        case 0x1eb70cu: goto label_1eb70c;
        case 0x1eb710u: goto label_1eb710;
        case 0x1eb714u: goto label_1eb714;
        case 0x1eb718u: goto label_1eb718;
        case 0x1eb71cu: goto label_1eb71c;
        case 0x1eb720u: goto label_1eb720;
        case 0x1eb724u: goto label_1eb724;
        case 0x1eb728u: goto label_1eb728;
        case 0x1eb72cu: goto label_1eb72c;
        case 0x1eb730u: goto label_1eb730;
        case 0x1eb734u: goto label_1eb734;
        case 0x1eb738u: goto label_1eb738;
        case 0x1eb73cu: goto label_1eb73c;
        case 0x1eb740u: goto label_1eb740;
        case 0x1eb744u: goto label_1eb744;
        case 0x1eb748u: goto label_1eb748;
        case 0x1eb74cu: goto label_1eb74c;
        case 0x1eb750u: goto label_1eb750;
        case 0x1eb754u: goto label_1eb754;
        case 0x1eb758u: goto label_1eb758;
        case 0x1eb75cu: goto label_1eb75c;
        case 0x1eb760u: goto label_1eb760;
        case 0x1eb764u: goto label_1eb764;
        case 0x1eb768u: goto label_1eb768;
        case 0x1eb76cu: goto label_1eb76c;
        case 0x1eb770u: goto label_1eb770;
        case 0x1eb774u: goto label_1eb774;
        case 0x1eb778u: goto label_1eb778;
        case 0x1eb77cu: goto label_1eb77c;
        case 0x1eb780u: goto label_1eb780;
        case 0x1eb784u: goto label_1eb784;
        case 0x1eb788u: goto label_1eb788;
        case 0x1eb78cu: goto label_1eb78c;
        case 0x1eb790u: goto label_1eb790;
        case 0x1eb794u: goto label_1eb794;
        case 0x1eb798u: goto label_1eb798;
        case 0x1eb79cu: goto label_1eb79c;
        case 0x1eb7a0u: goto label_1eb7a0;
        case 0x1eb7a4u: goto label_1eb7a4;
        case 0x1eb7a8u: goto label_1eb7a8;
        case 0x1eb7acu: goto label_1eb7ac;
        case 0x1eb7b0u: goto label_1eb7b0;
        case 0x1eb7b4u: goto label_1eb7b4;
        case 0x1eb7b8u: goto label_1eb7b8;
        case 0x1eb7bcu: goto label_1eb7bc;
        case 0x1eb7c0u: goto label_1eb7c0;
        case 0x1eb7c4u: goto label_1eb7c4;
        case 0x1eb7c8u: goto label_1eb7c8;
        case 0x1eb7ccu: goto label_1eb7cc;
        case 0x1eb7d0u: goto label_1eb7d0;
        case 0x1eb7d4u: goto label_1eb7d4;
        case 0x1eb7d8u: goto label_1eb7d8;
        case 0x1eb7dcu: goto label_1eb7dc;
        case 0x1eb7e0u: goto label_1eb7e0;
        case 0x1eb7e4u: goto label_1eb7e4;
        case 0x1eb7e8u: goto label_1eb7e8;
        case 0x1eb7ecu: goto label_1eb7ec;
        case 0x1eb7f0u: goto label_1eb7f0;
        case 0x1eb7f4u: goto label_1eb7f4;
        case 0x1eb7f8u: goto label_1eb7f8;
        case 0x1eb7fcu: goto label_1eb7fc;
        case 0x1eb800u: goto label_1eb800;
        case 0x1eb804u: goto label_1eb804;
        case 0x1eb808u: goto label_1eb808;
        case 0x1eb80cu: goto label_1eb80c;
        case 0x1eb810u: goto label_1eb810;
        case 0x1eb814u: goto label_1eb814;
        case 0x1eb818u: goto label_1eb818;
        case 0x1eb81cu: goto label_1eb81c;
        case 0x1eb820u: goto label_1eb820;
        case 0x1eb824u: goto label_1eb824;
        case 0x1eb828u: goto label_1eb828;
        case 0x1eb82cu: goto label_1eb82c;
        case 0x1eb830u: goto label_1eb830;
        case 0x1eb834u: goto label_1eb834;
        case 0x1eb838u: goto label_1eb838;
        case 0x1eb83cu: goto label_1eb83c;
        case 0x1eb840u: goto label_1eb840;
        case 0x1eb844u: goto label_1eb844;
        case 0x1eb848u: goto label_1eb848;
        case 0x1eb84cu: goto label_1eb84c;
        case 0x1eb850u: goto label_1eb850;
        case 0x1eb854u: goto label_1eb854;
        case 0x1eb858u: goto label_1eb858;
        case 0x1eb85cu: goto label_1eb85c;
        case 0x1eb860u: goto label_1eb860;
        case 0x1eb864u: goto label_1eb864;
        case 0x1eb868u: goto label_1eb868;
        case 0x1eb86cu: goto label_1eb86c;
        case 0x1eb870u: goto label_1eb870;
        case 0x1eb874u: goto label_1eb874;
        case 0x1eb878u: goto label_1eb878;
        case 0x1eb87cu: goto label_1eb87c;
        case 0x1eb880u: goto label_1eb880;
        case 0x1eb884u: goto label_1eb884;
        case 0x1eb888u: goto label_1eb888;
        case 0x1eb88cu: goto label_1eb88c;
        case 0x1eb890u: goto label_1eb890;
        case 0x1eb894u: goto label_1eb894;
        case 0x1eb898u: goto label_1eb898;
        case 0x1eb89cu: goto label_1eb89c;
        case 0x1eb8a0u: goto label_1eb8a0;
        case 0x1eb8a4u: goto label_1eb8a4;
        case 0x1eb8a8u: goto label_1eb8a8;
        case 0x1eb8acu: goto label_1eb8ac;
        case 0x1eb8b0u: goto label_1eb8b0;
        case 0x1eb8b4u: goto label_1eb8b4;
        case 0x1eb8b8u: goto label_1eb8b8;
        case 0x1eb8bcu: goto label_1eb8bc;
        case 0x1eb8c0u: goto label_1eb8c0;
        case 0x1eb8c4u: goto label_1eb8c4;
        case 0x1eb8c8u: goto label_1eb8c8;
        case 0x1eb8ccu: goto label_1eb8cc;
        case 0x1eb8d0u: goto label_1eb8d0;
        case 0x1eb8d4u: goto label_1eb8d4;
        case 0x1eb8d8u: goto label_1eb8d8;
        case 0x1eb8dcu: goto label_1eb8dc;
        case 0x1eb8e0u: goto label_1eb8e0;
        case 0x1eb8e4u: goto label_1eb8e4;
        case 0x1eb8e8u: goto label_1eb8e8;
        case 0x1eb8ecu: goto label_1eb8ec;
        case 0x1eb8f0u: goto label_1eb8f0;
        case 0x1eb8f4u: goto label_1eb8f4;
        case 0x1eb8f8u: goto label_1eb8f8;
        case 0x1eb8fcu: goto label_1eb8fc;
        case 0x1eb900u: goto label_1eb900;
        case 0x1eb904u: goto label_1eb904;
        case 0x1eb908u: goto label_1eb908;
        case 0x1eb90cu: goto label_1eb90c;
        case 0x1eb910u: goto label_1eb910;
        case 0x1eb914u: goto label_1eb914;
        case 0x1eb918u: goto label_1eb918;
        case 0x1eb91cu: goto label_1eb91c;
        case 0x1eb920u: goto label_1eb920;
        case 0x1eb924u: goto label_1eb924;
        case 0x1eb928u: goto label_1eb928;
        case 0x1eb92cu: goto label_1eb92c;
        case 0x1eb930u: goto label_1eb930;
        case 0x1eb934u: goto label_1eb934;
        case 0x1eb938u: goto label_1eb938;
        case 0x1eb93cu: goto label_1eb93c;
        case 0x1eb940u: goto label_1eb940;
        case 0x1eb944u: goto label_1eb944;
        case 0x1eb948u: goto label_1eb948;
        case 0x1eb94cu: goto label_1eb94c;
        case 0x1eb950u: goto label_1eb950;
        case 0x1eb954u: goto label_1eb954;
        case 0x1eb958u: goto label_1eb958;
        case 0x1eb95cu: goto label_1eb95c;
        case 0x1eb960u: goto label_1eb960;
        case 0x1eb964u: goto label_1eb964;
        case 0x1eb968u: goto label_1eb968;
        case 0x1eb96cu: goto label_1eb96c;
        case 0x1eb970u: goto label_1eb970;
        case 0x1eb974u: goto label_1eb974;
        case 0x1eb978u: goto label_1eb978;
        case 0x1eb97cu: goto label_1eb97c;
        case 0x1eb980u: goto label_1eb980;
        case 0x1eb984u: goto label_1eb984;
        case 0x1eb988u: goto label_1eb988;
        case 0x1eb98cu: goto label_1eb98c;
        case 0x1eb990u: goto label_1eb990;
        case 0x1eb994u: goto label_1eb994;
        case 0x1eb998u: goto label_1eb998;
        case 0x1eb99cu: goto label_1eb99c;
        case 0x1eb9a0u: goto label_1eb9a0;
        case 0x1eb9a4u: goto label_1eb9a4;
        case 0x1eb9a8u: goto label_1eb9a8;
        case 0x1eb9acu: goto label_1eb9ac;
        case 0x1eb9b0u: goto label_1eb9b0;
        case 0x1eb9b4u: goto label_1eb9b4;
        case 0x1eb9b8u: goto label_1eb9b8;
        case 0x1eb9bcu: goto label_1eb9bc;
        case 0x1eb9c0u: goto label_1eb9c0;
        case 0x1eb9c4u: goto label_1eb9c4;
        case 0x1eb9c8u: goto label_1eb9c8;
        case 0x1eb9ccu: goto label_1eb9cc;
        case 0x1eb9d0u: goto label_1eb9d0;
        case 0x1eb9d4u: goto label_1eb9d4;
        case 0x1eb9d8u: goto label_1eb9d8;
        case 0x1eb9dcu: goto label_1eb9dc;
        case 0x1eb9e0u: goto label_1eb9e0;
        case 0x1eb9e4u: goto label_1eb9e4;
        case 0x1eb9e8u: goto label_1eb9e8;
        case 0x1eb9ecu: goto label_1eb9ec;
        case 0x1eb9f0u: goto label_1eb9f0;
        case 0x1eb9f4u: goto label_1eb9f4;
        case 0x1eb9f8u: goto label_1eb9f8;
        case 0x1eb9fcu: goto label_1eb9fc;
        case 0x1eba00u: goto label_1eba00;
        case 0x1eba04u: goto label_1eba04;
        case 0x1eba08u: goto label_1eba08;
        case 0x1eba0cu: goto label_1eba0c;
        case 0x1eba10u: goto label_1eba10;
        case 0x1eba14u: goto label_1eba14;
        case 0x1eba18u: goto label_1eba18;
        case 0x1eba1cu: goto label_1eba1c;
        case 0x1eba20u: goto label_1eba20;
        case 0x1eba24u: goto label_1eba24;
        case 0x1eba28u: goto label_1eba28;
        case 0x1eba2cu: goto label_1eba2c;
        case 0x1eba30u: goto label_1eba30;
        case 0x1eba34u: goto label_1eba34;
        case 0x1eba38u: goto label_1eba38;
        case 0x1eba3cu: goto label_1eba3c;
        case 0x1eba40u: goto label_1eba40;
        case 0x1eba44u: goto label_1eba44;
        case 0x1eba48u: goto label_1eba48;
        case 0x1eba4cu: goto label_1eba4c;
        case 0x1eba50u: goto label_1eba50;
        case 0x1eba54u: goto label_1eba54;
        case 0x1eba58u: goto label_1eba58;
        case 0x1eba5cu: goto label_1eba5c;
        case 0x1eba60u: goto label_1eba60;
        case 0x1eba64u: goto label_1eba64;
        case 0x1eba68u: goto label_1eba68;
        case 0x1eba6cu: goto label_1eba6c;
        case 0x1eba70u: goto label_1eba70;
        case 0x1eba74u: goto label_1eba74;
        case 0x1eba78u: goto label_1eba78;
        case 0x1eba7cu: goto label_1eba7c;
        case 0x1eba80u: goto label_1eba80;
        case 0x1eba84u: goto label_1eba84;
        case 0x1eba88u: goto label_1eba88;
        case 0x1eba8cu: goto label_1eba8c;
        case 0x1eba90u: goto label_1eba90;
        case 0x1eba94u: goto label_1eba94;
        case 0x1eba98u: goto label_1eba98;
        case 0x1eba9cu: goto label_1eba9c;
        case 0x1ebaa0u: goto label_1ebaa0;
        case 0x1ebaa4u: goto label_1ebaa4;
        case 0x1ebaa8u: goto label_1ebaa8;
        case 0x1ebaacu: goto label_1ebaac;
        case 0x1ebab0u: goto label_1ebab0;
        case 0x1ebab4u: goto label_1ebab4;
        case 0x1ebab8u: goto label_1ebab8;
        case 0x1ebabcu: goto label_1ebabc;
        case 0x1ebac0u: goto label_1ebac0;
        case 0x1ebac4u: goto label_1ebac4;
        case 0x1ebac8u: goto label_1ebac8;
        case 0x1ebaccu: goto label_1ebacc;
        case 0x1ebad0u: goto label_1ebad0;
        case 0x1ebad4u: goto label_1ebad4;
        case 0x1ebad8u: goto label_1ebad8;
        case 0x1ebadcu: goto label_1ebadc;
        case 0x1ebae0u: goto label_1ebae0;
        case 0x1ebae4u: goto label_1ebae4;
        case 0x1ebae8u: goto label_1ebae8;
        case 0x1ebaecu: goto label_1ebaec;
        case 0x1ebaf0u: goto label_1ebaf0;
        case 0x1ebaf4u: goto label_1ebaf4;
        case 0x1ebaf8u: goto label_1ebaf8;
        case 0x1ebafcu: goto label_1ebafc;
        case 0x1ebb00u: goto label_1ebb00;
        case 0x1ebb04u: goto label_1ebb04;
        case 0x1ebb08u: goto label_1ebb08;
        case 0x1ebb0cu: goto label_1ebb0c;
        case 0x1ebb10u: goto label_1ebb10;
        case 0x1ebb14u: goto label_1ebb14;
        case 0x1ebb18u: goto label_1ebb18;
        case 0x1ebb1cu: goto label_1ebb1c;
        case 0x1ebb20u: goto label_1ebb20;
        case 0x1ebb24u: goto label_1ebb24;
        case 0x1ebb28u: goto label_1ebb28;
        case 0x1ebb2cu: goto label_1ebb2c;
        case 0x1ebb30u: goto label_1ebb30;
        case 0x1ebb34u: goto label_1ebb34;
        case 0x1ebb38u: goto label_1ebb38;
        case 0x1ebb3cu: goto label_1ebb3c;
        case 0x1ebb40u: goto label_1ebb40;
        case 0x1ebb44u: goto label_1ebb44;
        case 0x1ebb48u: goto label_1ebb48;
        case 0x1ebb4cu: goto label_1ebb4c;
        case 0x1ebb50u: goto label_1ebb50;
        case 0x1ebb54u: goto label_1ebb54;
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebb5cu: goto label_1ebb5c;
        case 0x1ebb60u: goto label_1ebb60;
        case 0x1ebb64u: goto label_1ebb64;
        case 0x1ebb68u: goto label_1ebb68;
        case 0x1ebb6cu: goto label_1ebb6c;
        case 0x1ebb70u: goto label_1ebb70;
        case 0x1ebb74u: goto label_1ebb74;
        case 0x1ebb78u: goto label_1ebb78;
        case 0x1ebb7cu: goto label_1ebb7c;
        case 0x1ebb80u: goto label_1ebb80;
        case 0x1ebb84u: goto label_1ebb84;
        case 0x1ebb88u: goto label_1ebb88;
        case 0x1ebb8cu: goto label_1ebb8c;
        case 0x1ebb90u: goto label_1ebb90;
        case 0x1ebb94u: goto label_1ebb94;
        case 0x1ebb98u: goto label_1ebb98;
        case 0x1ebb9cu: goto label_1ebb9c;
        case 0x1ebba0u: goto label_1ebba0;
        case 0x1ebba4u: goto label_1ebba4;
        case 0x1ebba8u: goto label_1ebba8;
        case 0x1ebbacu: goto label_1ebbac;
        case 0x1ebbb0u: goto label_1ebbb0;
        case 0x1ebbb4u: goto label_1ebbb4;
        case 0x1ebbb8u: goto label_1ebbb8;
        case 0x1ebbbcu: goto label_1ebbbc;
        case 0x1ebbc0u: goto label_1ebbc0;
        case 0x1ebbc4u: goto label_1ebbc4;
        case 0x1ebbc8u: goto label_1ebbc8;
        case 0x1ebbccu: goto label_1ebbcc;
        case 0x1ebbd0u: goto label_1ebbd0;
        case 0x1ebbd4u: goto label_1ebbd4;
        case 0x1ebbd8u: goto label_1ebbd8;
        case 0x1ebbdcu: goto label_1ebbdc;
        case 0x1ebbe0u: goto label_1ebbe0;
        case 0x1ebbe4u: goto label_1ebbe4;
        case 0x1ebbe8u: goto label_1ebbe8;
        case 0x1ebbecu: goto label_1ebbec;
        case 0x1ebbf0u: goto label_1ebbf0;
        case 0x1ebbf4u: goto label_1ebbf4;
        case 0x1ebbf8u: goto label_1ebbf8;
        case 0x1ebbfcu: goto label_1ebbfc;
        case 0x1ebc00u: goto label_1ebc00;
        case 0x1ebc04u: goto label_1ebc04;
        case 0x1ebc08u: goto label_1ebc08;
        case 0x1ebc0cu: goto label_1ebc0c;
        case 0x1ebc10u: goto label_1ebc10;
        case 0x1ebc14u: goto label_1ebc14;
        case 0x1ebc18u: goto label_1ebc18;
        case 0x1ebc1cu: goto label_1ebc1c;
        case 0x1ebc20u: goto label_1ebc20;
        case 0x1ebc24u: goto label_1ebc24;
        case 0x1ebc28u: goto label_1ebc28;
        case 0x1ebc2cu: goto label_1ebc2c;
        case 0x1ebc30u: goto label_1ebc30;
        case 0x1ebc34u: goto label_1ebc34;
        case 0x1ebc38u: goto label_1ebc38;
        case 0x1ebc3cu: goto label_1ebc3c;
        case 0x1ebc40u: goto label_1ebc40;
        case 0x1ebc44u: goto label_1ebc44;
        case 0x1ebc48u: goto label_1ebc48;
        case 0x1ebc4cu: goto label_1ebc4c;
        case 0x1ebc50u: goto label_1ebc50;
        case 0x1ebc54u: goto label_1ebc54;
        case 0x1ebc58u: goto label_1ebc58;
        case 0x1ebc5cu: goto label_1ebc5c;
        case 0x1ebc60u: goto label_1ebc60;
        case 0x1ebc64u: goto label_1ebc64;
        case 0x1ebc68u: goto label_1ebc68;
        case 0x1ebc6cu: goto label_1ebc6c;
        case 0x1ebc70u: goto label_1ebc70;
        case 0x1ebc74u: goto label_1ebc74;
        case 0x1ebc78u: goto label_1ebc78;
        case 0x1ebc7cu: goto label_1ebc7c;
        case 0x1ebc80u: goto label_1ebc80;
        case 0x1ebc84u: goto label_1ebc84;
        case 0x1ebc88u: goto label_1ebc88;
        case 0x1ebc8cu: goto label_1ebc8c;
        case 0x1ebc90u: goto label_1ebc90;
        case 0x1ebc94u: goto label_1ebc94;
        case 0x1ebc98u: goto label_1ebc98;
        case 0x1ebc9cu: goto label_1ebc9c;
        case 0x1ebca0u: goto label_1ebca0;
        case 0x1ebca4u: goto label_1ebca4;
        case 0x1ebca8u: goto label_1ebca8;
        case 0x1ebcacu: goto label_1ebcac;
        case 0x1ebcb0u: goto label_1ebcb0;
        case 0x1ebcb4u: goto label_1ebcb4;
        case 0x1ebcb8u: goto label_1ebcb8;
        case 0x1ebcbcu: goto label_1ebcbc;
        case 0x1ebcc0u: goto label_1ebcc0;
        case 0x1ebcc4u: goto label_1ebcc4;
        case 0x1ebcc8u: goto label_1ebcc8;
        case 0x1ebcccu: goto label_1ebccc;
        case 0x1ebcd0u: goto label_1ebcd0;
        case 0x1ebcd4u: goto label_1ebcd4;
        case 0x1ebcd8u: goto label_1ebcd8;
        case 0x1ebcdcu: goto label_1ebcdc;
        case 0x1ebce0u: goto label_1ebce0;
        case 0x1ebce4u: goto label_1ebce4;
        case 0x1ebce8u: goto label_1ebce8;
        case 0x1ebcecu: goto label_1ebcec;
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebcf4u: goto label_1ebcf4;
        case 0x1ebcf8u: goto label_1ebcf8;
        case 0x1ebcfcu: goto label_1ebcfc;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd04u: goto label_1ebd04;
        case 0x1ebd08u: goto label_1ebd08;
        case 0x1ebd0cu: goto label_1ebd0c;
        case 0x1ebd10u: goto label_1ebd10;
        case 0x1ebd14u: goto label_1ebd14;
        case 0x1ebd18u: goto label_1ebd18;
        case 0x1ebd1cu: goto label_1ebd1c;
        case 0x1ebd20u: goto label_1ebd20;
        case 0x1ebd24u: goto label_1ebd24;
        case 0x1ebd28u: goto label_1ebd28;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd30u: goto label_1ebd30;
        case 0x1ebd34u: goto label_1ebd34;
        case 0x1ebd38u: goto label_1ebd38;
        case 0x1ebd3cu: goto label_1ebd3c;
        default: break;
    }

    ctx->pc = 0x1eb230u;

label_1eb230:
    // 0x1eb230: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1eb230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1eb234:
    // 0x1eb234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eb234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1eb238:
    // 0x1eb238: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eb238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eb23c:
    // 0x1eb23c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eb23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1eb240:
    // 0x1eb240: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1eb240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb244:
    // 0x1eb244: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eb244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eb248:
    // 0x1eb248: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1eb248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb24c:
    // 0x1eb24c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb250:
    // 0x1eb250: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1eb250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eb254:
    // 0x1eb254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb258:
    // 0x1eb258: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1eb258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1eb25c:
    // 0x1eb25c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1eb25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_1eb260:
    // 0x1eb260: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1eb260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1eb264:
    // 0x1eb264: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1eb264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1eb268:
    // 0x1eb268: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1eb268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1eb26c:
    // 0x1eb26c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1eb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_1eb270:
    // 0x1eb270: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1eb270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_1eb274:
    // 0x1eb274: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1eb274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_1eb278:
    // 0x1eb278: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1eb278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_1eb27c:
    // 0x1eb27c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1eb27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1eb280:
    // 0x1eb280: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1eb280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eb284:
    // 0x1eb284: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1eb284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1eb288:
    // 0x1eb288: 0x320f809  jalr        $t9
label_1eb28c:
    if (ctx->pc == 0x1EB28Cu) {
        ctx->pc = 0x1EB28Cu;
            // 0x1eb28c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB290u;
        goto label_1eb290;
    }
    ctx->pc = 0x1EB288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB290u);
        ctx->pc = 0x1EB28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB288u;
            // 0x1eb28c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB290u; }
            if (ctx->pc != 0x1EB290u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB290u;
label_1eb290:
    // 0x1eb290: 0xafb30060  sw          $s3, 0x60($sp)
    ctx->pc = 0x1eb290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 19));
label_1eb294:
    // 0x1eb294: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1eb294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1eb298:
    // 0x1eb298: 0xafb20064  sw          $s2, 0x64($sp)
    ctx->pc = 0x1eb298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
label_1eb29c:
    // 0x1eb29c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1eb29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1eb2a0:
    // 0x1eb2a0: 0xafb1006c  sw          $s1, 0x6C($sp)
    ctx->pc = 0x1eb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
label_1eb2a4:
    // 0x1eb2a4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1eb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1eb2a8:
    // 0x1eb2a8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1eb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1eb2ac:
    // 0x1eb2ac: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1eb2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1eb2b0:
    // 0x1eb2b0: 0xc091c60  jal         func_247180
label_1eb2b4:
    if (ctx->pc == 0x1EB2B4u) {
        ctx->pc = 0x1EB2B4u;
            // 0x1eb2b4: 0xafb00074  sw          $s0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 16));
        ctx->pc = 0x1EB2B8u;
        goto label_1eb2b8;
    }
    ctx->pc = 0x1EB2B0u;
    SET_GPR_U32(ctx, 31, 0x1EB2B8u);
    ctx->pc = 0x1EB2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2B0u;
            // 0x1eb2b4: 0xafb00074  sw          $s0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247180u;
    if (runtime->hasFunction(0x247180u)) {
        auto targetFn = runtime->lookupFunction(0x247180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B8u; }
        if (ctx->pc != 0x1EB2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247180_0x247180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B8u; }
        if (ctx->pc != 0x1EB2B8u) { return; }
    }
    ctx->pc = 0x1EB2B8u;
label_1eb2b8:
    // 0x1eb2b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1eb2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1eb2bc:
    // 0x1eb2bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eb2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eb2c0:
    // 0x1eb2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eb2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eb2c4:
    // 0x1eb2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eb2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb2c8:
    // 0x1eb2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb2cc:
    // 0x1eb2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb2d0:
    // 0x1eb2d0: 0x3e00008  jr          $ra
label_1eb2d4:
    if (ctx->pc == 0x1EB2D4u) {
        ctx->pc = 0x1EB2D4u;
            // 0x1eb2d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1EB2D8u;
        goto label_1eb2d8;
    }
    ctx->pc = 0x1EB2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2D0u;
            // 0x1eb2d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB2D8u;
label_1eb2d8:
    // 0x1eb2d8: 0x0  nop
    ctx->pc = 0x1eb2d8u;
    // NOP
label_1eb2dc:
    // 0x1eb2dc: 0x0  nop
    ctx->pc = 0x1eb2dcu;
    // NOP
label_1eb2e0:
    // 0x1eb2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eb2e4:
    // 0x1eb2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb2e8:
    // 0x1eb2e8: 0xc091720  jal         func_245C80
label_1eb2ec:
    if (ctx->pc == 0x1EB2ECu) {
        ctx->pc = 0x1EB2ECu;
            // 0x1eb2ec: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x1EB2F0u;
        goto label_1eb2f0;
    }
    ctx->pc = 0x1EB2E8u;
    SET_GPR_U32(ctx, 31, 0x1EB2F0u);
    ctx->pc = 0x1EB2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2E8u;
            // 0x1eb2ec: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245C80u;
    if (runtime->hasFunction(0x245C80u)) {
        auto targetFn = runtime->lookupFunction(0x245C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2F0u; }
        if (ctx->pc != 0x1EB2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245C80_0x245c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2F0u; }
        if (ctx->pc != 0x1EB2F0u) { return; }
    }
    ctx->pc = 0x1EB2F0u;
label_1eb2f0:
    // 0x1eb2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb2f4:
    // 0x1eb2f4: 0x3e00008  jr          $ra
label_1eb2f8:
    if (ctx->pc == 0x1EB2F8u) {
        ctx->pc = 0x1EB2F8u;
            // 0x1eb2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EB2FCu;
        goto label_1eb2fc;
    }
    ctx->pc = 0x1EB2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2F4u;
            // 0x1eb2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB2FCu;
label_1eb2fc:
    // 0x1eb2fc: 0x0  nop
    ctx->pc = 0x1eb2fcu;
    // NOP
label_1eb300:
    // 0x1eb300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eb304:
    // 0x1eb304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb308:
    // 0x1eb308: 0xc091780  jal         func_245E00
label_1eb30c:
    if (ctx->pc == 0x1EB30Cu) {
        ctx->pc = 0x1EB30Cu;
            // 0x1eb30c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x1EB310u;
        goto label_1eb310;
    }
    ctx->pc = 0x1EB308u;
    SET_GPR_U32(ctx, 31, 0x1EB310u);
    ctx->pc = 0x1EB30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB308u;
            // 0x1eb30c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245E00u;
    if (runtime->hasFunction(0x245E00u)) {
        auto targetFn = runtime->lookupFunction(0x245E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB310u; }
        if (ctx->pc != 0x1EB310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245E00_0x245e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB310u; }
        if (ctx->pc != 0x1EB310u) { return; }
    }
    ctx->pc = 0x1EB310u;
label_1eb310:
    // 0x1eb310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb314:
    // 0x1eb314: 0x3e00008  jr          $ra
label_1eb318:
    if (ctx->pc == 0x1EB318u) {
        ctx->pc = 0x1EB318u;
            // 0x1eb318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EB31Cu;
        goto label_1eb31c;
    }
    ctx->pc = 0x1EB314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB314u;
            // 0x1eb318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB31Cu;
label_1eb31c:
    // 0x1eb31c: 0x0  nop
    ctx->pc = 0x1eb31cu;
    // NOP
label_1eb320:
    // 0x1eb320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eb324:
    // 0x1eb324: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1eb324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eb328:
    // 0x1eb328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1eb32c:
    // 0x1eb32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb330:
    // 0x1eb330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb334:
    // 0x1eb334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb338:
    // 0x1eb338: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1eb338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb33c:
    // 0x1eb33c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1eb33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb340:
    // 0x1eb340: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb344:
    // 0x1eb344: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1eb344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1eb348:
    // 0x1eb348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb34c:
    // 0x1eb34c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1eb34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1eb350:
    // 0x1eb350: 0x320f809  jalr        $t9
label_1eb354:
    if (ctx->pc == 0x1EB354u) {
        ctx->pc = 0x1EB354u;
            // 0x1eb354: 0x24a5ab48  addiu       $a1, $a1, -0x54B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945608));
        ctx->pc = 0x1EB358u;
        goto label_1eb358;
    }
    ctx->pc = 0x1EB350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB358u);
        ctx->pc = 0x1EB354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB350u;
            // 0x1eb354: 0x24a5ab48  addiu       $a1, $a1, -0x54B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB358u; }
            if (ctx->pc != 0x1EB358u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB358u;
label_1eb358:
    // 0x1eb358: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1eb35c:
    // 0x1eb35c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1eb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1eb360:
    // 0x1eb360: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1eb364:
    // 0x1eb364: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1eb368:
    if (ctx->pc == 0x1EB368u) {
        ctx->pc = 0x1EB368u;
            // 0x1eb368: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x1EB36Cu;
        goto label_1eb36c;
    }
    ctx->pc = 0x1EB364u;
    {
        const bool branch_taken_0x1eb364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb364) {
            ctx->pc = 0x1EB368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB364u;
            // 0x1eb368: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB3A4u;
            goto label_1eb3a4;
        }
    }
    ctx->pc = 0x1EB36Cu;
label_1eb36c:
    // 0x1eb36c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1eb36cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb370:
    // 0x1eb370: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1eb370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1eb374:
    // 0x1eb374: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1eb374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1eb378:
    // 0x1eb378: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1eb378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1eb37c:
    // 0x1eb37c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1eb37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1eb380:
    // 0x1eb380: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x1eb380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eb384:
    // 0x1eb384: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eb384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eb388:
    // 0x1eb388: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x1eb388u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb38c:
    // 0x1eb38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb390:
    // 0x1eb390: 0x24a5ab58  addiu       $a1, $a1, -0x54A8
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945624));
label_1eb394:
    // 0x1eb394: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1eb394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eb398:
    // 0x1eb398: 0x320f809  jalr        $t9
label_1eb39c:
    if (ctx->pc == 0x1EB39Cu) {
        ctx->pc = 0x1EB39Cu;
            // 0x1eb39c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1EB3A0u;
        goto label_1eb3a0;
    }
    ctx->pc = 0x1EB398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB3A0u);
        ctx->pc = 0x1EB39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB398u;
            // 0x1eb39c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB3A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3A0u; }
            if (ctx->pc != 0x1EB3A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB3A0u;
label_1eb3a0:
    // 0x1eb3a0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1eb3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1eb3a4:
    // 0x1eb3a4: 0xc092108  jal         func_248420
label_1eb3a8:
    if (ctx->pc == 0x1EB3A8u) {
        ctx->pc = 0x1EB3A8u;
            // 0x1eb3a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3ACu;
        goto label_1eb3ac;
    }
    ctx->pc = 0x1EB3A4u;
    SET_GPR_U32(ctx, 31, 0x1EB3ACu);
    ctx->pc = 0x1EB3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3A4u;
            // 0x1eb3a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248420u;
    if (runtime->hasFunction(0x248420u)) {
        auto targetFn = runtime->lookupFunction(0x248420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3ACu; }
        if (ctx->pc != 0x1EB3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248420_0x248420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3ACu; }
        if (ctx->pc != 0x1EB3ACu) { return; }
    }
    ctx->pc = 0x1EB3ACu;
label_1eb3ac:
    // 0x1eb3ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb3b0:
    // 0x1eb3b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb3b4:
    // 0x1eb3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb3b8:
    // 0x1eb3b8: 0x3e00008  jr          $ra
label_1eb3bc:
    if (ctx->pc == 0x1EB3BCu) {
        ctx->pc = 0x1EB3BCu;
            // 0x1eb3bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EB3C0u;
        goto label_1eb3c0;
    }
    ctx->pc = 0x1EB3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3B8u;
            // 0x1eb3bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB3C0u;
label_1eb3c0:
    // 0x1eb3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eb3c4:
    // 0x1eb3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1eb3c8:
    // 0x1eb3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb3cc:
    // 0x1eb3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb3d0:
    // 0x1eb3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb3d4:
    // 0x1eb3d4: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_1eb3d8:
    if (ctx->pc == 0x1EB3D8u) {
        ctx->pc = 0x1EB3D8u;
            // 0x1eb3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3DCu;
        goto label_1eb3dc;
    }
    ctx->pc = 0x1EB3D4u;
    {
        const bool branch_taken_0x1eb3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3D4u;
            // 0x1eb3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3d4) {
            ctx->pc = 0x1EB4ACu;
            goto label_1eb4ac;
        }
    }
    ctx->pc = 0x1EB3DCu;
label_1eb3dc:
    // 0x1eb3dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb3e0:
    // 0x1eb3e0: 0x2442d700  addiu       $v0, $v0, -0x2900
    ctx->pc = 0x1eb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956800));
label_1eb3e4:
    // 0x1eb3e4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1eb3e8:
    if (ctx->pc == 0x1EB3E8u) {
        ctx->pc = 0x1EB3E8u;
            // 0x1eb3e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB3ECu;
        goto label_1eb3ec;
    }
    ctx->pc = 0x1EB3E4u;
    {
        const bool branch_taken_0x1eb3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3E4u;
            // 0x1eb3e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3e4) {
            ctx->pc = 0x1EB484u;
            goto label_1eb484;
        }
    }
    ctx->pc = 0x1EB3ECu;
label_1eb3ec:
    // 0x1eb3ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb3f0:
    // 0x1eb3f0: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x1eb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
label_1eb3f4:
    // 0x1eb3f4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1eb3f8:
    if (ctx->pc == 0x1EB3F8u) {
        ctx->pc = 0x1EB3F8u;
            // 0x1eb3f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB3FCu;
        goto label_1eb3fc;
    }
    ctx->pc = 0x1EB3F4u;
    {
        const bool branch_taken_0x1eb3f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3F4u;
            // 0x1eb3f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3f4) {
            ctx->pc = 0x1EB484u;
            goto label_1eb484;
        }
    }
    ctx->pc = 0x1EB3FCu;
label_1eb3fc:
    // 0x1eb3fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1eb400:
    // 0x1eb400: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1eb400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1eb404:
    // 0x1eb404: 0x2463dc90  addiu       $v1, $v1, -0x2370
    ctx->pc = 0x1eb404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958224));
label_1eb408:
    // 0x1eb408: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1eb40c:
    if (ctx->pc == 0x1EB40Cu) {
        ctx->pc = 0x1EB40Cu;
            // 0x1eb40c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1EB410u;
        goto label_1eb410;
    }
    ctx->pc = 0x1EB408u;
    {
        const bool branch_taken_0x1eb408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB408u;
            // 0x1eb40c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb408) {
            ctx->pc = 0x1EB450u;
            goto label_1eb450;
        }
    }
    ctx->pc = 0x1EB410u;
label_1eb410:
    // 0x1eb410: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1eb414:
    if (ctx->pc == 0x1EB414u) {
        ctx->pc = 0x1EB418u;
        goto label_1eb418;
    }
    ctx->pc = 0x1EB410u;
    {
        const bool branch_taken_0x1eb410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb410) {
            ctx->pc = 0x1EB450u;
            goto label_1eb450;
        }
    }
    ctx->pc = 0x1EB418u;
label_1eb418:
    // 0x1eb418: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eb418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb41c:
    // 0x1eb41c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1eb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1eb420:
    // 0x1eb420: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1eb424:
    // 0x1eb424: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1eb428:
    if (ctx->pc == 0x1EB428u) {
        ctx->pc = 0x1EB42Cu;
        goto label_1eb42c;
    }
    ctx->pc = 0x1EB424u;
    {
        const bool branch_taken_0x1eb424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb424) {
            ctx->pc = 0x1EB450u;
            goto label_1eb450;
        }
    }
    ctx->pc = 0x1EB42Cu;
label_1eb42c:
    // 0x1eb42c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eb430:
    // 0x1eb430: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eb430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb434:
    // 0x1eb434: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eb438:
    // 0x1eb438: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1eb438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1eb43c:
    // 0x1eb43c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1eb43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1eb440:
    // 0x1eb440: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1eb440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1eb444:
    // 0x1eb444: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1eb444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1eb448:
    // 0x1eb448: 0xc0a7ab4  jal         func_29EAD0
label_1eb44c:
    if (ctx->pc == 0x1EB44Cu) {
        ctx->pc = 0x1EB44Cu;
            // 0x1eb44c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x1EB450u;
        goto label_1eb450;
    }
    ctx->pc = 0x1EB448u;
    SET_GPR_U32(ctx, 31, 0x1EB450u);
    ctx->pc = 0x1EB44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB448u;
            // 0x1eb44c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB450u; }
        if (ctx->pc != 0x1EB450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB450u; }
        if (ctx->pc != 0x1EB450u) { return; }
    }
    ctx->pc = 0x1EB450u;
label_1eb450:
    // 0x1eb450: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_1eb454:
    if (ctx->pc == 0x1EB454u) {
        ctx->pc = 0x1EB454u;
            // 0x1eb454: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1EB458u;
        goto label_1eb458;
    }
    ctx->pc = 0x1EB450u;
    {
        const bool branch_taken_0x1eb450 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb450) {
            ctx->pc = 0x1EB454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB450u;
            // 0x1eb454: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB488u;
            goto label_1eb488;
        }
    }
    ctx->pc = 0x1EB458u;
label_1eb458:
    // 0x1eb458: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb45c:
    // 0x1eb45c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1eb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1eb460:
    // 0x1eb460: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1eb464:
    if (ctx->pc == 0x1EB464u) {
        ctx->pc = 0x1EB464u;
            // 0x1eb464: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB468u;
        goto label_1eb468;
    }
    ctx->pc = 0x1EB460u;
    {
        const bool branch_taken_0x1eb460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB460u;
            // 0x1eb464: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb460) {
            ctx->pc = 0x1EB484u;
            goto label_1eb484;
        }
    }
    ctx->pc = 0x1EB468u;
label_1eb468:
    // 0x1eb468: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb46c:
    // 0x1eb46c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1eb470:
    // 0x1eb470: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1eb474:
    if (ctx->pc == 0x1EB474u) {
        ctx->pc = 0x1EB474u;
            // 0x1eb474: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB478u;
        goto label_1eb478;
    }
    ctx->pc = 0x1EB470u;
    {
        const bool branch_taken_0x1eb470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB470u;
            // 0x1eb474: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb470) {
            ctx->pc = 0x1EB484u;
            goto label_1eb484;
        }
    }
    ctx->pc = 0x1EB478u;
label_1eb478:
    // 0x1eb478: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb47c:
    // 0x1eb47c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1eb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1eb480:
    // 0x1eb480: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1eb480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1eb484:
    // 0x1eb484: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1eb484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1eb488:
    // 0x1eb488: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1eb488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1eb48c:
    // 0x1eb48c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1eb490:
    if (ctx->pc == 0x1EB490u) {
        ctx->pc = 0x1EB490u;
            // 0x1eb490: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB494u;
        goto label_1eb494;
    }
    ctx->pc = 0x1EB48Cu;
    {
        const bool branch_taken_0x1eb48c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1eb48c) {
            ctx->pc = 0x1EB490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB48Cu;
            // 0x1eb490: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB4B0u;
            goto label_1eb4b0;
        }
    }
    ctx->pc = 0x1EB494u;
label_1eb494:
    // 0x1eb494: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eb494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eb498:
    // 0x1eb498: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1eb498u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb49c:
    // 0x1eb49c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eb49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eb4a0:
    // 0x1eb4a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eb4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4a4:
    // 0x1eb4a4: 0xc0a7ab4  jal         func_29EAD0
label_1eb4a8:
    if (ctx->pc == 0x1EB4A8u) {
        ctx->pc = 0x1EB4A8u;
            // 0x1eb4a8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EB4ACu;
        goto label_1eb4ac;
    }
    ctx->pc = 0x1EB4A4u;
    SET_GPR_U32(ctx, 31, 0x1EB4ACu);
    ctx->pc = 0x1EB4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4A4u;
            // 0x1eb4a8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4ACu; }
        if (ctx->pc != 0x1EB4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4ACu; }
        if (ctx->pc != 0x1EB4ACu) { return; }
    }
    ctx->pc = 0x1EB4ACu;
label_1eb4ac:
    // 0x1eb4ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1eb4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4b0:
    // 0x1eb4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb4b4:
    // 0x1eb4b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb4b8:
    // 0x1eb4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb4bc:
    // 0x1eb4bc: 0x3e00008  jr          $ra
label_1eb4c0:
    if (ctx->pc == 0x1EB4C0u) {
        ctx->pc = 0x1EB4C0u;
            // 0x1eb4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EB4C4u;
        goto label_1eb4c4;
    }
    ctx->pc = 0x1EB4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4BCu;
            // 0x1eb4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB4C4u;
label_1eb4c4:
    // 0x1eb4c4: 0x0  nop
    ctx->pc = 0x1eb4c4u;
    // NOP
label_1eb4c8:
    // 0x1eb4c8: 0x0  nop
    ctx->pc = 0x1eb4c8u;
    // NOP
label_1eb4cc:
    // 0x1eb4cc: 0x0  nop
    ctx->pc = 0x1eb4ccu;
    // NOP
label_1eb4d0:
    // 0x1eb4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eb4d4:
    // 0x1eb4d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1eb4d8:
    // 0x1eb4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb4dc:
    // 0x1eb4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb4e0:
    // 0x1eb4e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4e4:
    // 0x1eb4e4: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_1eb4e8:
    if (ctx->pc == 0x1EB4E8u) {
        ctx->pc = 0x1EB4E8u;
            // 0x1eb4e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4ECu;
        goto label_1eb4ec;
    }
    ctx->pc = 0x1EB4E4u;
    {
        const bool branch_taken_0x1eb4e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4E4u;
            // 0x1eb4e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4e4) {
            ctx->pc = 0x1EB5BCu;
            goto label_1eb5bc;
        }
    }
    ctx->pc = 0x1EB4ECu;
label_1eb4ec:
    // 0x1eb4ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb4f0:
    // 0x1eb4f0: 0x2442d780  addiu       $v0, $v0, -0x2880
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956928));
label_1eb4f4:
    // 0x1eb4f4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1eb4f8:
    if (ctx->pc == 0x1EB4F8u) {
        ctx->pc = 0x1EB4F8u;
            // 0x1eb4f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB4FCu;
        goto label_1eb4fc;
    }
    ctx->pc = 0x1EB4F4u;
    {
        const bool branch_taken_0x1eb4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4F4u;
            // 0x1eb4f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4f4) {
            ctx->pc = 0x1EB594u;
            goto label_1eb594;
        }
    }
    ctx->pc = 0x1EB4FCu;
label_1eb4fc:
    // 0x1eb4fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb500:
    // 0x1eb500: 0x2442d7c0  addiu       $v0, $v0, -0x2840
    ctx->pc = 0x1eb500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
label_1eb504:
    // 0x1eb504: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1eb508:
    if (ctx->pc == 0x1EB508u) {
        ctx->pc = 0x1EB508u;
            // 0x1eb508: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB50Cu;
        goto label_1eb50c;
    }
    ctx->pc = 0x1EB504u;
    {
        const bool branch_taken_0x1eb504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB504u;
            // 0x1eb508: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb504) {
            ctx->pc = 0x1EB594u;
            goto label_1eb594;
        }
    }
    ctx->pc = 0x1EB50Cu;
label_1eb50c:
    // 0x1eb50c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1eb510:
    // 0x1eb510: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1eb510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1eb514:
    // 0x1eb514: 0x2463d6c0  addiu       $v1, $v1, -0x2940
    ctx->pc = 0x1eb514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956736));
label_1eb518:
    // 0x1eb518: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1eb51c:
    if (ctx->pc == 0x1EB51Cu) {
        ctx->pc = 0x1EB51Cu;
            // 0x1eb51c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1EB520u;
        goto label_1eb520;
    }
    ctx->pc = 0x1EB518u;
    {
        const bool branch_taken_0x1eb518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB518u;
            // 0x1eb51c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb518) {
            ctx->pc = 0x1EB560u;
            goto label_1eb560;
        }
    }
    ctx->pc = 0x1EB520u;
label_1eb520:
    // 0x1eb520: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1eb524:
    if (ctx->pc == 0x1EB524u) {
        ctx->pc = 0x1EB528u;
        goto label_1eb528;
    }
    ctx->pc = 0x1EB520u;
    {
        const bool branch_taken_0x1eb520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb520) {
            ctx->pc = 0x1EB560u;
            goto label_1eb560;
        }
    }
    ctx->pc = 0x1EB528u;
label_1eb528:
    // 0x1eb528: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1eb528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1eb52c:
    // 0x1eb52c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1eb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1eb530:
    // 0x1eb530: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1eb534:
    // 0x1eb534: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1eb538:
    if (ctx->pc == 0x1EB538u) {
        ctx->pc = 0x1EB53Cu;
        goto label_1eb53c;
    }
    ctx->pc = 0x1EB534u;
    {
        const bool branch_taken_0x1eb534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb534) {
            ctx->pc = 0x1EB560u;
            goto label_1eb560;
        }
    }
    ctx->pc = 0x1EB53Cu;
label_1eb53c:
    // 0x1eb53c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eb540:
    // 0x1eb540: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1eb540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1eb544:
    // 0x1eb544: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eb548:
    // 0x1eb548: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1eb548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1eb54c:
    // 0x1eb54c: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1eb54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eb550:
    // 0x1eb550: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1eb550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1eb554:
    // 0x1eb554: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1eb554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1eb558:
    // 0x1eb558: 0xc0a7ab4  jal         func_29EAD0
label_1eb55c:
    if (ctx->pc == 0x1EB55Cu) {
        ctx->pc = 0x1EB55Cu;
            // 0x1eb55c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1EB560u;
        goto label_1eb560;
    }
    ctx->pc = 0x1EB558u;
    SET_GPR_U32(ctx, 31, 0x1EB560u);
    ctx->pc = 0x1EB55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB558u;
            // 0x1eb55c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB560u; }
        if (ctx->pc != 0x1EB560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB560u; }
        if (ctx->pc != 0x1EB560u) { return; }
    }
    ctx->pc = 0x1EB560u;
label_1eb560:
    // 0x1eb560: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_1eb564:
    if (ctx->pc == 0x1EB564u) {
        ctx->pc = 0x1EB564u;
            // 0x1eb564: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1EB568u;
        goto label_1eb568;
    }
    ctx->pc = 0x1EB560u;
    {
        const bool branch_taken_0x1eb560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb560) {
            ctx->pc = 0x1EB564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB560u;
            // 0x1eb564: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB598u;
            goto label_1eb598;
        }
    }
    ctx->pc = 0x1EB568u;
label_1eb568:
    // 0x1eb568: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb56c:
    // 0x1eb56c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1eb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1eb570:
    // 0x1eb570: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1eb574:
    if (ctx->pc == 0x1EB574u) {
        ctx->pc = 0x1EB574u;
            // 0x1eb574: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB578u;
        goto label_1eb578;
    }
    ctx->pc = 0x1EB570u;
    {
        const bool branch_taken_0x1eb570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB570u;
            // 0x1eb574: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb570) {
            ctx->pc = 0x1EB594u;
            goto label_1eb594;
        }
    }
    ctx->pc = 0x1EB578u;
label_1eb578:
    // 0x1eb578: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb57c:
    // 0x1eb57c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1eb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1eb580:
    // 0x1eb580: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1eb584:
    if (ctx->pc == 0x1EB584u) {
        ctx->pc = 0x1EB584u;
            // 0x1eb584: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB588u;
        goto label_1eb588;
    }
    ctx->pc = 0x1EB580u;
    {
        const bool branch_taken_0x1eb580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB580u;
            // 0x1eb584: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb580) {
            ctx->pc = 0x1EB594u;
            goto label_1eb594;
        }
    }
    ctx->pc = 0x1EB588u;
label_1eb588:
    // 0x1eb588: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb58c:
    // 0x1eb58c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1eb590:
    // 0x1eb590: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1eb590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1eb594:
    // 0x1eb594: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1eb594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1eb598:
    // 0x1eb598: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1eb598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1eb59c:
    // 0x1eb59c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1eb5a0:
    if (ctx->pc == 0x1EB5A0u) {
        ctx->pc = 0x1EB5A0u;
            // 0x1eb5a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5A4u;
        goto label_1eb5a4;
    }
    ctx->pc = 0x1EB59Cu;
    {
        const bool branch_taken_0x1eb59c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1eb59c) {
            ctx->pc = 0x1EB5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB59Cu;
            // 0x1eb5a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB5C0u;
            goto label_1eb5c0;
        }
    }
    ctx->pc = 0x1EB5A4u;
label_1eb5a4:
    // 0x1eb5a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eb5a8:
    // 0x1eb5a8: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1eb5a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb5ac:
    // 0x1eb5ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eb5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eb5b0:
    // 0x1eb5b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eb5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb5b4:
    // 0x1eb5b4: 0xc0a7ab4  jal         func_29EAD0
label_1eb5b8:
    if (ctx->pc == 0x1EB5B8u) {
        ctx->pc = 0x1EB5B8u;
            // 0x1eb5b8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EB5BCu;
        goto label_1eb5bc;
    }
    ctx->pc = 0x1EB5B4u;
    SET_GPR_U32(ctx, 31, 0x1EB5BCu);
    ctx->pc = 0x1EB5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5B4u;
            // 0x1eb5b8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5BCu; }
        if (ctx->pc != 0x1EB5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5BCu; }
        if (ctx->pc != 0x1EB5BCu) { return; }
    }
    ctx->pc = 0x1EB5BCu;
label_1eb5bc:
    // 0x1eb5bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1eb5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eb5c0:
    // 0x1eb5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb5c4:
    // 0x1eb5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb5c8:
    // 0x1eb5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb5cc:
    // 0x1eb5cc: 0x3e00008  jr          $ra
label_1eb5d0:
    if (ctx->pc == 0x1EB5D0u) {
        ctx->pc = 0x1EB5D0u;
            // 0x1eb5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EB5D4u;
        goto label_1eb5d4;
    }
    ctx->pc = 0x1EB5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5CCu;
            // 0x1eb5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB5D4u;
label_1eb5d4:
    // 0x1eb5d4: 0x0  nop
    ctx->pc = 0x1eb5d4u;
    // NOP
label_1eb5d8:
    // 0x1eb5d8: 0x0  nop
    ctx->pc = 0x1eb5d8u;
    // NOP
label_1eb5dc:
    // 0x1eb5dc: 0x0  nop
    ctx->pc = 0x1eb5dcu;
    // NOP
label_1eb5e0:
    // 0x1eb5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1eb5e4:
    // 0x1eb5e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1eb5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb5e8:
    // 0x1eb5e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eb5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1eb5ec:
    // 0x1eb5ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eb5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eb5f0:
    // 0x1eb5f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1eb5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1eb5f4:
    // 0x1eb5f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1eb5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb5f8:
    // 0x1eb5f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eb5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1eb5fc:
    // 0x1eb5fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1eb5fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1eb600:
    // 0x1eb600: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1eb604:
    // 0x1eb604: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1eb604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eb608:
    // 0x1eb608: 0xc07d4f0  jal         func_1F53C0
label_1eb60c:
    if (ctx->pc == 0x1EB60Cu) {
        ctx->pc = 0x1EB60Cu;
            // 0x1eb60c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB610u;
        goto label_1eb610;
    }
    ctx->pc = 0x1EB608u;
    SET_GPR_U32(ctx, 31, 0x1EB610u);
    ctx->pc = 0x1EB60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB608u;
            // 0x1eb60c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F53C0u;
    if (runtime->hasFunction(0x1F53C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F53C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB610u; }
        if (ctx->pc != 0x1EB610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F53C0_0x1f53c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB610u; }
        if (ctx->pc != 0x1EB610u) { return; }
    }
    ctx->pc = 0x1EB610u;
label_1eb610:
    // 0x1eb610: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eb610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb614:
    // 0x1eb614: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1eb614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eb618:
    // 0x1eb618: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1eb61c:
    if (ctx->pc == 0x1EB61Cu) {
        ctx->pc = 0x1EB620u;
        goto label_1eb620;
    }
    ctx->pc = 0x1EB618u;
    {
        const bool branch_taken_0x1eb618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb618) {
            ctx->pc = 0x1EB6B8u;
            goto label_1eb6b8;
        }
    }
    ctx->pc = 0x1EB620u;
label_1eb620:
    // 0x1eb620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1eb620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eb624:
    // 0x1eb624: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1eb624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb628:
    // 0x1eb628: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1eb628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1eb62c:
    // 0x1eb62c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1eb62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb630:
    // 0x1eb630: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb630u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb634:
    // 0x1eb634: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb638:
    // 0x1eb638: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1eb638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1eb63c:
    // 0x1eb63c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1eb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb640:
    // 0x1eb640: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1eb640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb644:
    // 0x1eb644: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb644u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb648:
    // 0x1eb648: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb64c:
    // 0x1eb64c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1eb64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1eb650:
    // 0x1eb650: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1eb650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb654:
    // 0x1eb654: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1eb654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb658:
    // 0x1eb658: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb658u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb65c:
    // 0x1eb65c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb65cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb660:
    // 0x1eb660: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1eb660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1eb664:
    // 0x1eb664: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1eb664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb668:
    // 0x1eb668: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1eb668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb66c:
    // 0x1eb66c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb66cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb670:
    // 0x1eb670: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb674:
    // 0x1eb674: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1eb674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1eb678:
    // 0x1eb678: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1eb678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb67c:
    // 0x1eb67c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb67cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb680:
    // 0x1eb680: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1eb680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1eb684:
    // 0x1eb684: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1eb684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb688:
    // 0x1eb688: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb688u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb68c:
    // 0x1eb68c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1eb68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1eb690:
    // 0x1eb690: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1eb690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb694:
    // 0x1eb694: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb694u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb698:
    // 0x1eb698: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1eb698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1eb69c:
    // 0x1eb69c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1eb69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb6a0:
    // 0x1eb6a0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1eb6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1eb6a4:
    // 0x1eb6a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eb6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb6a8:
    // 0x1eb6a8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1eb6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1eb6ac:
    // 0x1eb6ac: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1eb6acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eb6b0:
    // 0x1eb6b0: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1eb6b4:
    if (ctx->pc == 0x1EB6B4u) {
        ctx->pc = 0x1EB6B4u;
            // 0x1eb6b4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EB6B8u;
        goto label_1eb6b8;
    }
    ctx->pc = 0x1EB6B0u;
    {
        const bool branch_taken_0x1eb6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb6b0) {
            ctx->pc = 0x1EB6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6B0u;
            // 0x1eb6b4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb628;
        }
    }
    ctx->pc = 0x1EB6B8u;
label_1eb6b8:
    // 0x1eb6b8: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1eb6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb6bc:
    // 0x1eb6bc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1eb6bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eb6c0:
    // 0x1eb6c0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1eb6c4:
    if (ctx->pc == 0x1EB6C4u) {
        ctx->pc = 0x1EB6C4u;
            // 0x1eb6c4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1EB6C8u;
        goto label_1eb6c8;
    }
    ctx->pc = 0x1EB6C0u;
    {
        const bool branch_taken_0x1eb6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb6c0) {
            ctx->pc = 0x1EB6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6C0u;
            // 0x1eb6c4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB768u;
            goto label_1eb768;
        }
    }
    ctx->pc = 0x1EB6C8u;
label_1eb6c8:
    // 0x1eb6c8: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1eb6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb6cc:
    // 0x1eb6cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb6d0:
    // 0x1eb6d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb6d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb6d4:
    // 0x1eb6d4: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1eb6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1eb6d8:
    // 0x1eb6d8: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1eb6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb6dc:
    // 0x1eb6dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb6dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb6e0:
    // 0x1eb6e0: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1eb6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1eb6e4:
    // 0x1eb6e4: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1eb6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb6e8:
    // 0x1eb6e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb6e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb6ec:
    // 0x1eb6ec: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1eb6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1eb6f0:
    // 0x1eb6f0: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1eb6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb6f4:
    // 0x1eb6f4: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1eb6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1eb6f8:
    // 0x1eb6f8: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1eb6f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1eb6fc:
    // 0x1eb6fc: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1eb6fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1eb700:
    // 0x1eb700: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1eb700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1eb704:
    // 0x1eb704: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1eb704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1eb708:
    // 0x1eb708: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1eb708u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1eb70c:
    // 0x1eb70c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1eb70cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1eb710:
    // 0x1eb710: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1eb710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1eb714:
    // 0x1eb714: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1eb714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1eb718:
    // 0x1eb718: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1eb718u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1eb71c:
    // 0x1eb71c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1eb71cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1eb720:
    // 0x1eb720: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1eb720u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1eb724:
    // 0x1eb724: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1eb724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1eb728:
    // 0x1eb728: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1eb728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1eb72c:
    // 0x1eb72c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1eb72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1eb730:
    // 0x1eb730: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1eb730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1eb734:
    // 0x1eb734: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1eb734u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1eb738:
    // 0x1eb738: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1eb738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1eb73c:
    // 0x1eb73c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1eb73cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1eb740:
    // 0x1eb740: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1eb740u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1eb744:
    // 0x1eb744: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1eb744u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1eb748:
    // 0x1eb748: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1eb748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1eb74c:
    // 0x1eb74c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1eb750:
    if (ctx->pc == 0x1EB750u) {
        ctx->pc = 0x1EB754u;
        goto label_1eb754;
    }
    ctx->pc = 0x1EB74Cu;
    {
        const bool branch_taken_0x1eb74c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eb74c) {
            ctx->pc = 0x1EB764u;
            goto label_1eb764;
        }
    }
    ctx->pc = 0x1EB754u;
label_1eb754:
    // 0x1eb754: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1eb754u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1eb758:
    // 0x1eb758: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1eb758u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1eb75c:
    // 0x1eb75c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1eb75cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1eb760:
    // 0x1eb760: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1eb760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1eb764:
    // 0x1eb764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eb764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1eb768:
    // 0x1eb768: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1eb768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eb76c:
    // 0x1eb76c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1eb76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb770:
    // 0x1eb770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eb770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb774:
    // 0x1eb774: 0x3e00008  jr          $ra
label_1eb778:
    if (ctx->pc == 0x1EB778u) {
        ctx->pc = 0x1EB778u;
            // 0x1eb778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1EB77Cu;
        goto label_1eb77c;
    }
    ctx->pc = 0x1EB774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB774u;
            // 0x1eb778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB77Cu;
label_1eb77c:
    // 0x1eb77c: 0x0  nop
    ctx->pc = 0x1eb77cu;
    // NOP
label_1eb780:
    // 0x1eb780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eb784:
    // 0x1eb784: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1eb784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb788:
    // 0x1eb788: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eb788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eb78c:
    // 0x1eb78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb790:
    // 0x1eb790: 0xc07d7fc  jal         func_1F5FF0
label_1eb794:
    if (ctx->pc == 0x1EB794u) {
        ctx->pc = 0x1EB794u;
            // 0x1eb794: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB798u;
        goto label_1eb798;
    }
    ctx->pc = 0x1EB790u;
    SET_GPR_U32(ctx, 31, 0x1EB798u);
    ctx->pc = 0x1EB794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB790u;
            // 0x1eb794: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5FF0u;
    if (runtime->hasFunction(0x1F5FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB798u; }
        if (ctx->pc != 0x1EB798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5FF0_0x1f5ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB798u; }
        if (ctx->pc != 0x1EB798u) { return; }
    }
    ctx->pc = 0x1EB798u;
label_1eb798:
    // 0x1eb798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb79c:
    // 0x1eb79c: 0x3e00008  jr          $ra
label_1eb7a0:
    if (ctx->pc == 0x1EB7A0u) {
        ctx->pc = 0x1EB7A0u;
            // 0x1eb7a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EB7A4u;
        goto label_1eb7a4;
    }
    ctx->pc = 0x1EB79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB79Cu;
            // 0x1eb7a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB7A4u;
label_1eb7a4:
    // 0x1eb7a4: 0x0  nop
    ctx->pc = 0x1eb7a4u;
    // NOP
label_1eb7a8:
    // 0x1eb7a8: 0x0  nop
    ctx->pc = 0x1eb7a8u;
    // NOP
label_1eb7ac:
    // 0x1eb7ac: 0x0  nop
    ctx->pc = 0x1eb7acu;
    // NOP
label_1eb7b0:
    // 0x1eb7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1eb7b4:
    // 0x1eb7b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1eb7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb7b8:
    // 0x1eb7b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eb7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1eb7bc:
    // 0x1eb7bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eb7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eb7c0:
    // 0x1eb7c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1eb7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1eb7c4:
    // 0x1eb7c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1eb7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb7c8:
    // 0x1eb7c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eb7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1eb7cc:
    // 0x1eb7cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1eb7ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1eb7d0:
    // 0x1eb7d0: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1eb7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1eb7d4:
    // 0x1eb7d4: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1eb7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eb7d8:
    // 0x1eb7d8: 0xc07a904  jal         func_1EA410
label_1eb7dc:
    if (ctx->pc == 0x1EB7DCu) {
        ctx->pc = 0x1EB7DCu;
            // 0x1eb7dc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7E0u;
        goto label_1eb7e0;
    }
    ctx->pc = 0x1EB7D8u;
    SET_GPR_U32(ctx, 31, 0x1EB7E0u);
    ctx->pc = 0x1EB7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7D8u;
            // 0x1eb7dc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA410u;
    if (runtime->hasFunction(0x1EA410u)) {
        auto targetFn = runtime->lookupFunction(0x1EA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7E0u; }
        if (ctx->pc != 0x1EB7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA410_0x1ea410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7E0u; }
        if (ctx->pc != 0x1EB7E0u) { return; }
    }
    ctx->pc = 0x1EB7E0u;
label_1eb7e0:
    // 0x1eb7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eb7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb7e4:
    // 0x1eb7e4: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1eb7e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eb7e8:
    // 0x1eb7e8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1eb7ec:
    if (ctx->pc == 0x1EB7ECu) {
        ctx->pc = 0x1EB7F0u;
        goto label_1eb7f0;
    }
    ctx->pc = 0x1EB7E8u;
    {
        const bool branch_taken_0x1eb7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb7e8) {
            ctx->pc = 0x1EB888u;
            goto label_1eb888;
        }
    }
    ctx->pc = 0x1EB7F0u;
label_1eb7f0:
    // 0x1eb7f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1eb7f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eb7f4:
    // 0x1eb7f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1eb7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb7f8:
    // 0x1eb7f8: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1eb7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1eb7fc:
    // 0x1eb7fc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1eb7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb800:
    // 0x1eb800: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb800u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb804:
    // 0x1eb804: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb808:
    // 0x1eb808: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1eb808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1eb80c:
    // 0x1eb80c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1eb80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb810:
    // 0x1eb810: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1eb810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb814:
    // 0x1eb814: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb814u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb818:
    // 0x1eb818: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb81c:
    // 0x1eb81c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1eb81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1eb820:
    // 0x1eb820: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1eb820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb824:
    // 0x1eb824: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1eb824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb828:
    // 0x1eb828: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb828u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb82c:
    // 0x1eb82c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb830:
    // 0x1eb830: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1eb830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1eb834:
    // 0x1eb834: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1eb834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb838:
    // 0x1eb838: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1eb838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb83c:
    // 0x1eb83c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1eb83cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1eb840:
    // 0x1eb840: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1eb840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1eb844:
    // 0x1eb844: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1eb844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1eb848:
    // 0x1eb848: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1eb848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb84c:
    // 0x1eb84c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb84cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb850:
    // 0x1eb850: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1eb850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1eb854:
    // 0x1eb854: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1eb854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb858:
    // 0x1eb858: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb858u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb85c:
    // 0x1eb85c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1eb85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1eb860:
    // 0x1eb860: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1eb860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb864:
    // 0x1eb864: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb864u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb868:
    // 0x1eb868: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1eb868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1eb86c:
    // 0x1eb86c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1eb86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb870:
    // 0x1eb870: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1eb870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1eb874:
    // 0x1eb874: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eb874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb878:
    // 0x1eb878: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1eb878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1eb87c:
    // 0x1eb87c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1eb87cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eb880:
    // 0x1eb880: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1eb884:
    if (ctx->pc == 0x1EB884u) {
        ctx->pc = 0x1EB884u;
            // 0x1eb884: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EB888u;
        goto label_1eb888;
    }
    ctx->pc = 0x1EB880u;
    {
        const bool branch_taken_0x1eb880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb880) {
            ctx->pc = 0x1EB884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB880u;
            // 0x1eb884: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eb7f8;
        }
    }
    ctx->pc = 0x1EB888u;
label_1eb888:
    // 0x1eb888: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1eb888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb88c:
    // 0x1eb88c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1eb88cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eb890:
    // 0x1eb890: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1eb894:
    if (ctx->pc == 0x1EB894u) {
        ctx->pc = 0x1EB894u;
            // 0x1eb894: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1EB898u;
        goto label_1eb898;
    }
    ctx->pc = 0x1EB890u;
    {
        const bool branch_taken_0x1eb890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb890) {
            ctx->pc = 0x1EB894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB890u;
            // 0x1eb894: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB938u;
            goto label_1eb938;
        }
    }
    ctx->pc = 0x1EB898u;
label_1eb898:
    // 0x1eb898: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1eb898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb89c:
    // 0x1eb89c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb8a0:
    // 0x1eb8a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb8a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb8a4:
    // 0x1eb8a4: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1eb8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1eb8a8:
    // 0x1eb8a8: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1eb8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb8ac:
    // 0x1eb8ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb8acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb8b0:
    // 0x1eb8b0: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1eb8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1eb8b4:
    // 0x1eb8b4: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1eb8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb8b8:
    // 0x1eb8b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb8b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1eb8bc:
    // 0x1eb8bc: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1eb8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1eb8c0:
    // 0x1eb8c0: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1eb8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb8c4:
    // 0x1eb8c4: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1eb8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1eb8c8:
    // 0x1eb8c8: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1eb8c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1eb8cc:
    // 0x1eb8cc: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1eb8ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1eb8d0:
    // 0x1eb8d0: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1eb8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1eb8d4:
    // 0x1eb8d4: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1eb8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1eb8d8:
    // 0x1eb8d8: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1eb8d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1eb8dc:
    // 0x1eb8dc: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1eb8dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1eb8e0:
    // 0x1eb8e0: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1eb8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1eb8e4:
    // 0x1eb8e4: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1eb8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1eb8e8:
    // 0x1eb8e8: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1eb8e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1eb8ec:
    // 0x1eb8ec: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1eb8ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1eb8f0:
    // 0x1eb8f0: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1eb8f0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1eb8f4:
    // 0x1eb8f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1eb8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1eb8f8:
    // 0x1eb8f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1eb8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1eb8fc:
    // 0x1eb8fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1eb900:
    // 0x1eb900: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1eb900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1eb904:
    // 0x1eb904: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1eb904u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1eb908:
    // 0x1eb908: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1eb908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1eb90c:
    // 0x1eb90c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1eb90cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1eb910:
    // 0x1eb910: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1eb910u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1eb914:
    // 0x1eb914: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1eb914u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1eb918:
    // 0x1eb918: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1eb918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1eb91c:
    // 0x1eb91c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1eb920:
    if (ctx->pc == 0x1EB920u) {
        ctx->pc = 0x1EB924u;
        goto label_1eb924;
    }
    ctx->pc = 0x1EB91Cu;
    {
        const bool branch_taken_0x1eb91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eb91c) {
            ctx->pc = 0x1EB934u;
            goto label_1eb934;
        }
    }
    ctx->pc = 0x1EB924u;
label_1eb924:
    // 0x1eb924: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1eb924u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1eb928:
    // 0x1eb928: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1eb928u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1eb92c:
    // 0x1eb92c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1eb92cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1eb930:
    // 0x1eb930: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1eb930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1eb934:
    // 0x1eb934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eb934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1eb938:
    // 0x1eb938: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1eb938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eb93c:
    // 0x1eb93c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1eb93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb940:
    // 0x1eb940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eb940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb944:
    // 0x1eb944: 0x3e00008  jr          $ra
label_1eb948:
    if (ctx->pc == 0x1EB948u) {
        ctx->pc = 0x1EB948u;
            // 0x1eb948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1EB94Cu;
        goto label_1eb94c;
    }
    ctx->pc = 0x1EB944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB944u;
            // 0x1eb948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB94Cu;
label_1eb94c:
    // 0x1eb94c: 0x0  nop
    ctx->pc = 0x1eb94cu;
    // NOP
label_1eb950:
    // 0x1eb950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eb954:
    // 0x1eb954: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1eb954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb958:
    // 0x1eb958: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eb958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eb95c:
    // 0x1eb95c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb960:
    // 0x1eb960: 0xc07ac8c  jal         func_1EB230
label_1eb964:
    if (ctx->pc == 0x1EB964u) {
        ctx->pc = 0x1EB964u;
            // 0x1eb964: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EB968u;
        goto label_1eb968;
    }
    ctx->pc = 0x1EB960u;
    SET_GPR_U32(ctx, 31, 0x1EB968u);
    ctx->pc = 0x1EB964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB960u;
            // 0x1eb964: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB230u;
    goto label_1eb230;
    ctx->pc = 0x1EB968u;
label_1eb968:
    // 0x1eb968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb96c:
    // 0x1eb96c: 0x3e00008  jr          $ra
label_1eb970:
    if (ctx->pc == 0x1EB970u) {
        ctx->pc = 0x1EB970u;
            // 0x1eb970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EB974u;
        goto label_1eb974;
    }
    ctx->pc = 0x1EB96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB96Cu;
            // 0x1eb970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB974u;
label_1eb974:
    // 0x1eb974: 0x0  nop
    ctx->pc = 0x1eb974u;
    // NOP
label_1eb978:
    // 0x1eb978: 0x0  nop
    ctx->pc = 0x1eb978u;
    // NOP
label_1eb97c:
    // 0x1eb97c: 0x0  nop
    ctx->pc = 0x1eb97cu;
    // NOP
label_1eb980:
    // 0x1eb980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eb984:
    // 0x1eb984: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1eb984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1eb988:
    // 0x1eb988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb98c:
    // 0x1eb98c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1eb98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1eb990:
    // 0x1eb990: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1eb990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1eb994:
    // 0x1eb994: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb998:
    // 0x1eb998: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1eb998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb99c:
    // 0x1eb99c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1eb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1eb9a0:
    // 0x1eb9a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eb9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9a4:
    // 0x1eb9a4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1eb9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1eb9a8:
    // 0x1eb9a8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1eb9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9ac:
    // 0x1eb9ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eb9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1eb9b0:
    // 0x1eb9b0: 0xc07a8d8  jal         func_1EA360
label_1eb9b4:
    if (ctx->pc == 0x1EB9B4u) {
        ctx->pc = 0x1EB9B4u;
            // 0x1eb9b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EB9B8u;
        goto label_1eb9b8;
    }
    ctx->pc = 0x1EB9B0u;
    SET_GPR_U32(ctx, 31, 0x1EB9B8u);
    ctx->pc = 0x1EB9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9B0u;
            // 0x1eb9b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA360u;
    if (runtime->hasFunction(0x1EA360u)) {
        auto targetFn = runtime->lookupFunction(0x1EA360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9B8u; }
        if (ctx->pc != 0x1EB9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA360_0x1ea360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9B8u; }
        if (ctx->pc != 0x1EB9B8u) { return; }
    }
    ctx->pc = 0x1EB9B8u;
label_1eb9b8:
    // 0x1eb9b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1eb9bc:
    // 0x1eb9bc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1eb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1eb9c0:
    // 0x1eb9c0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1eb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1eb9c4:
    // 0x1eb9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb9c8:
    // 0x1eb9c8: 0x3e00008  jr          $ra
label_1eb9cc:
    if (ctx->pc == 0x1EB9CCu) {
        ctx->pc = 0x1EB9CCu;
            // 0x1eb9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EB9D0u;
        goto label_1eb9d0;
    }
    ctx->pc = 0x1EB9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9C8u;
            // 0x1eb9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB9D0u;
label_1eb9d0:
    // 0x1eb9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eb9d4:
    // 0x1eb9d4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1eb9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9d8:
    // 0x1eb9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb9dc:
    // 0x1eb9dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eb9e0:
    // 0x1eb9e0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1eb9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1eb9e4:
    // 0x1eb9e4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1eb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1eb9e8:
    // 0x1eb9e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eb9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9ec:
    // 0x1eb9ec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eb9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1eb9f0:
    // 0x1eb9f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1eb9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9f4:
    // 0x1eb9f4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1eb9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1eb9f8:
    // 0x1eb9f8: 0xc07a8cc  jal         func_1EA330
label_1eb9fc:
    if (ctx->pc == 0x1EB9FCu) {
        ctx->pc = 0x1EB9FCu;
            // 0x1eb9fc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1EBA00u;
        goto label_1eba00;
    }
    ctx->pc = 0x1EB9F8u;
    SET_GPR_U32(ctx, 31, 0x1EBA00u);
    ctx->pc = 0x1EB9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9F8u;
            // 0x1eb9fc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA330u;
    if (runtime->hasFunction(0x1EA330u)) {
        auto targetFn = runtime->lookupFunction(0x1EA330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA00u; }
        if (ctx->pc != 0x1EBA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA330_0x1ea330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA00u; }
        if (ctx->pc != 0x1EBA00u) { return; }
    }
    ctx->pc = 0x1EBA00u;
label_1eba00:
    // 0x1eba00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eba00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1eba04:
    // 0x1eba04: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1eba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1eba08:
    // 0x1eba08: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1eba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1eba0c:
    // 0x1eba0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eba0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eba10:
    // 0x1eba10: 0x3e00008  jr          $ra
label_1eba14:
    if (ctx->pc == 0x1EBA14u) {
        ctx->pc = 0x1EBA14u;
            // 0x1eba14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EBA18u;
        goto label_1eba18;
    }
    ctx->pc = 0x1EBA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA10u;
            // 0x1eba14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBA18u;
label_1eba18:
    // 0x1eba18: 0x0  nop
    ctx->pc = 0x1eba18u;
    // NOP
label_1eba1c:
    // 0x1eba1c: 0x0  nop
    ctx->pc = 0x1eba1cu;
    // NOP
label_1eba20:
    // 0x1eba20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eba24:
    // 0x1eba24: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1eba24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1eba28:
    // 0x1eba28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eba2c:
    // 0x1eba2c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1eba2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1eba30:
    // 0x1eba30: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1eba30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1eba34:
    // 0x1eba34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eba38:
    // 0x1eba38: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1eba38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eba3c:
    // 0x1eba3c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1eba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1eba40:
    // 0x1eba40: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eba40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eba44:
    // 0x1eba44: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1eba44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1eba48:
    // 0x1eba48: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1eba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1eba4c:
    // 0x1eba4c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1eba50:
    // 0x1eba50: 0xc07d550  jal         func_1F5540
label_1eba54:
    if (ctx->pc == 0x1EBA54u) {
        ctx->pc = 0x1EBA54u;
            // 0x1eba54: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EBA58u;
        goto label_1eba58;
    }
    ctx->pc = 0x1EBA50u;
    SET_GPR_U32(ctx, 31, 0x1EBA58u);
    ctx->pc = 0x1EBA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA50u;
            // 0x1eba54: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5540u;
    if (runtime->hasFunction(0x1F5540u)) {
        auto targetFn = runtime->lookupFunction(0x1F5540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA58u; }
        if (ctx->pc != 0x1EBA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5540_0x1f5540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA58u; }
        if (ctx->pc != 0x1EBA58u) { return; }
    }
    ctx->pc = 0x1EBA58u;
label_1eba58:
    // 0x1eba58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1eba5c:
    // 0x1eba5c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1eba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1eba60:
    // 0x1eba60: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1eba60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1eba64:
    // 0x1eba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eba68:
    // 0x1eba68: 0x3e00008  jr          $ra
label_1eba6c:
    if (ctx->pc == 0x1EBA6Cu) {
        ctx->pc = 0x1EBA6Cu;
            // 0x1eba6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EBA70u;
        goto label_1eba70;
    }
    ctx->pc = 0x1EBA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA68u;
            // 0x1eba6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBA70u;
label_1eba70:
    // 0x1eba70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eba74:
    // 0x1eba74: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1eba74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eba78:
    // 0x1eba78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eba7c:
    // 0x1eba7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eba80:
    // 0x1eba80: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1eba80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1eba84:
    // 0x1eba84: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1eba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1eba88:
    // 0x1eba88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eba8c:
    // 0x1eba8c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1eba90:
    // 0x1eba90: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1eba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1eba94:
    // 0x1eba94: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1eba94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1eba98:
    // 0x1eba98: 0xc07d718  jal         func_1F5C60
label_1eba9c:
    if (ctx->pc == 0x1EBA9Cu) {
        ctx->pc = 0x1EBA9Cu;
            // 0x1eba9c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1EBAA0u;
        goto label_1ebaa0;
    }
    ctx->pc = 0x1EBA98u;
    SET_GPR_U32(ctx, 31, 0x1EBAA0u);
    ctx->pc = 0x1EBA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA98u;
            // 0x1eba9c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C60u;
    if (runtime->hasFunction(0x1F5C60u)) {
        auto targetFn = runtime->lookupFunction(0x1F5C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAA0u; }
        if (ctx->pc != 0x1EBAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5C60_0x1f5c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAA0u; }
        if (ctx->pc != 0x1EBAA0u) { return; }
    }
    ctx->pc = 0x1EBAA0u;
label_1ebaa0:
    // 0x1ebaa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ebaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ebaa4:
    // 0x1ebaa4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1ebaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1ebaa8:
    // 0x1ebaa8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ebaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1ebaac:
    // 0x1ebaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebab0:
    // 0x1ebab0: 0x3e00008  jr          $ra
label_1ebab4:
    if (ctx->pc == 0x1EBAB4u) {
        ctx->pc = 0x1EBAB4u;
            // 0x1ebab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EBAB8u;
        goto label_1ebab8;
    }
    ctx->pc = 0x1EBAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAB0u;
            // 0x1ebab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBAB8u;
label_1ebab8:
    // 0x1ebab8: 0x0  nop
    ctx->pc = 0x1ebab8u;
    // NOP
label_1ebabc:
    // 0x1ebabc: 0x0  nop
    ctx->pc = 0x1ebabcu;
    // NOP
label_1ebac0:
    // 0x1ebac0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ebac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1ebac4:
    // 0x1ebac4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ebac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1ebac8:
    // 0x1ebac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebacc:
    // 0x1ebacc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1ebaccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ebad0:
    // 0x1ebad0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1ebad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ebad4:
    // 0x1ebad4: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ebad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1ebad8:
    // 0x1ebad8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebadc:
    // 0x1ebadc: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1ebadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1ebae0:
    // 0x1ebae0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1ebae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1ebae4:
    // 0x1ebae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebae8:
    // 0x1ebae8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1ebae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebaec:
    // 0x1ebaec: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1ebaecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1ebaf0:
    // 0x1ebaf0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1ebaf4:
    // 0x1ebaf4: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1ebaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1ebaf8:
    // 0x1ebaf8: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1ebaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1ebafc:
    // 0x1ebafc: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1ebafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_1ebb00:
    // 0x1ebb00: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1ebb04:
    // 0x1ebb04: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1ebb04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_1ebb08:
    // 0x1ebb08: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1ebb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1ebb0c:
    // 0x1ebb0c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1ebb0cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ebb10:
    // 0x1ebb10: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1ebb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ebb14:
    // 0x1ebb14: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1ebb14u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1ebb18:
    // 0x1ebb18: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1ebb18u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1ebb1c:
    // 0x1ebb1c: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1ebb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ebb20:
    // 0x1ebb20: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1ebb20u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1ebb24:
    // 0x1ebb24: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1ebb24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1ebb28:
    // 0x1ebb28: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1ebb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ebb2c:
    // 0x1ebb2c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1ebb2cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1ebb30:
    // 0x1ebb30: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1ebb30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1ebb34:
    // 0x1ebb34: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1ebb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ebb38:
    // 0x1ebb38: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1ebb38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1ebb3c:
    // 0x1ebb3c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1ebb3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1ebb40:
    // 0x1ebb40: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1ebb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ebb44:
    // 0x1ebb44: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1ebb44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1ebb48:
    // 0x1ebb48: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1ebb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1ebb4c:
    // 0x1ebb4c: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1ebb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1ebb50:
    // 0x1ebb50: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1ebb50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ebb54:
    // 0x1ebb54: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1ebb54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1ebb58:
    // 0x1ebb58: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1ebb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1ebb5c:
    // 0x1ebb5c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1ebb5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1ebb60:
    // 0x1ebb60: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1ebb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1ebb64:
    // 0x1ebb64: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1ebb64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1ebb68:
    // 0x1ebb68: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ebb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1ebb6c:
    // 0x1ebb6c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1ebb6cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1ebb70:
    // 0x1ebb70: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1ebb70u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1ebb74:
    // 0x1ebb74: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1ebb74u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ebb78:
    // 0x1ebb78: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
label_1ebb7c:
    if (ctx->pc == 0x1EBB7Cu) {
        ctx->pc = 0x1EBB7Cu;
            // 0x1ebb7c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1EBB80u;
        goto label_1ebb80;
    }
    ctx->pc = 0x1EBB78u;
    {
        const bool branch_taken_0x1ebb78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB78u;
            // 0x1ebb7c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb78) {
            ctx->pc = 0x1EBBC4u;
            goto label_1ebbc4;
        }
    }
    ctx->pc = 0x1EBB80u;
label_1ebb80:
    // 0x1ebb80: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ebb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ebb84:
    // 0x1ebb84: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1ebb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1ebb88:
    // 0x1ebb88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1ebb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1ebb8c:
    // 0x1ebb8c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ebb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1ebb90:
    // 0x1ebb90: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1ebb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1ebb94:
    // 0x1ebb94: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1ebb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ebb98:
    // 0x1ebb98: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1ebb98u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ebb9c:
    // 0x1ebb9c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ebba0:
    // 0x1ebba0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1ebba0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1ebba4:
    // 0x1ebba4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1ebba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ebba8:
    // 0x1ebba8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1ebba8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ebbac:
    // 0x1ebbac: 0xc07a8e4  jal         func_1EA390
label_1ebbb0:
    if (ctx->pc == 0x1EBBB0u) {
        ctx->pc = 0x1EBBB0u;
            // 0x1ebbb0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1EBBB4u;
        goto label_1ebbb4;
    }
    ctx->pc = 0x1EBBACu;
    SET_GPR_U32(ctx, 31, 0x1EBBB4u);
    ctx->pc = 0x1EBBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBACu;
            // 0x1ebbb0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (runtime->hasFunction(0x1EA390u)) {
        auto targetFn = runtime->lookupFunction(0x1EA390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBB4u; }
        if (ctx->pc != 0x1EBBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA390_0x1ea390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBB4u; }
        if (ctx->pc != 0x1EBBB4u) { return; }
    }
    ctx->pc = 0x1EBBB4u;
label_1ebbb4:
    // 0x1ebbb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ebbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ebbb8:
    // 0x1ebbb8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ebbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1ebbbc:
    // 0x1ebbbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ebbc0:
    if (ctx->pc == 0x1EBBC0u) {
        ctx->pc = 0x1EBBC0u;
            // 0x1ebbc0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1EBBC4u;
        goto label_1ebbc4;
    }
    ctx->pc = 0x1EBBBCu;
    {
        const bool branch_taken_0x1ebbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBBCu;
            // 0x1ebbc0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbbc) {
            ctx->pc = 0x1EBBDCu;
            goto label_1ebbdc;
        }
    }
    ctx->pc = 0x1EBBC4u;
label_1ebbc4:
    // 0x1ebbc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ebbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ebbc8:
    // 0x1ebbc8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1ebbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ebbcc:
    // 0x1ebbcc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1ebbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1ebbd0:
    // 0x1ebbd0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1ebbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ebbd4:
    // 0x1ebbd4: 0xc07a8e4  jal         func_1EA390
label_1ebbd8:
    if (ctx->pc == 0x1EBBD8u) {
        ctx->pc = 0x1EBBD8u;
            // 0x1ebbd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBDCu;
        goto label_1ebbdc;
    }
    ctx->pc = 0x1EBBD4u;
    SET_GPR_U32(ctx, 31, 0x1EBBDCu);
    ctx->pc = 0x1EBBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBD4u;
            // 0x1ebbd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (runtime->hasFunction(0x1EA390u)) {
        auto targetFn = runtime->lookupFunction(0x1EA390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBDCu; }
        if (ctx->pc != 0x1EBBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA390_0x1ea390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBDCu; }
        if (ctx->pc != 0x1EBBDCu) { return; }
    }
    ctx->pc = 0x1EBBDCu;
label_1ebbdc:
    // 0x1ebbdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ebbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ebbe0:
    // 0x1ebbe0: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1ebbe4:
    // 0x1ebbe4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1ebbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1ebbe8:
    // 0x1ebbe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebbec:
    // 0x1ebbec: 0x3e00008  jr          $ra
label_1ebbf0:
    if (ctx->pc == 0x1EBBF0u) {
        ctx->pc = 0x1EBBF0u;
            // 0x1ebbf0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1EBBF4u;
        goto label_1ebbf4;
    }
    ctx->pc = 0x1EBBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBECu;
            // 0x1ebbf0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBBF4u;
label_1ebbf4:
    // 0x1ebbf4: 0x0  nop
    ctx->pc = 0x1ebbf4u;
    // NOP
label_1ebbf8:
    // 0x1ebbf8: 0x0  nop
    ctx->pc = 0x1ebbf8u;
    // NOP
label_1ebbfc:
    // 0x1ebbfc: 0x0  nop
    ctx->pc = 0x1ebbfcu;
    // NOP
label_1ebc00:
    // 0x1ebc00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ebc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1ebc04:
    // 0x1ebc04: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ebc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1ebc08:
    // 0x1ebc08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebc0c:
    // 0x1ebc0c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1ebc0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc10:
    // 0x1ebc10: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1ebc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ebc14:
    // 0x1ebc14: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ebc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1ebc18:
    // 0x1ebc18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebc1c:
    // 0x1ebc1c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1ebc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1ebc20:
    // 0x1ebc20: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1ebc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1ebc24:
    // 0x1ebc24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebc28:
    // 0x1ebc28: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1ebc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebc2c:
    // 0x1ebc2c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1ebc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1ebc30:
    // 0x1ebc30: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1ebc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1ebc34:
    // 0x1ebc34: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1ebc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1ebc38:
    // 0x1ebc38: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1ebc3c:
    // 0x1ebc3c: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1ebc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_1ebc40:
    // 0x1ebc40: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1ebc40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1ebc44:
    // 0x1ebc44: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1ebc44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_1ebc48:
    // 0x1ebc48: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1ebc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1ebc4c:
    // 0x1ebc4c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1ebc4cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ebc50:
    // 0x1ebc50: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1ebc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ebc54:
    // 0x1ebc54: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1ebc54u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1ebc58:
    // 0x1ebc58: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1ebc58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1ebc5c:
    // 0x1ebc5c: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1ebc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ebc60:
    // 0x1ebc60: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1ebc60u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1ebc64:
    // 0x1ebc64: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1ebc64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1ebc68:
    // 0x1ebc68: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1ebc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ebc6c:
    // 0x1ebc6c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1ebc6cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1ebc70:
    // 0x1ebc70: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1ebc70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1ebc74:
    // 0x1ebc74: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1ebc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ebc78:
    // 0x1ebc78: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1ebc78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1ebc7c:
    // 0x1ebc7c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1ebc7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1ebc80:
    // 0x1ebc80: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1ebc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ebc84:
    // 0x1ebc84: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1ebc84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1ebc88:
    // 0x1ebc88: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1ebc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1ebc8c:
    // 0x1ebc8c: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1ebc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1ebc90:
    // 0x1ebc90: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1ebc90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ebc94:
    // 0x1ebc94: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1ebc94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1ebc98:
    // 0x1ebc98: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1ebc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1ebc9c:
    // 0x1ebc9c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1ebc9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1ebca0:
    // 0x1ebca0: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1ebca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1ebca4:
    // 0x1ebca4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1ebca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1ebca8:
    // 0x1ebca8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ebca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1ebcac:
    // 0x1ebcac: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1ebcacu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1ebcb0:
    // 0x1ebcb0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1ebcb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1ebcb4:
    // 0x1ebcb4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1ebcb4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ebcb8:
    // 0x1ebcb8: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
label_1ebcbc:
    if (ctx->pc == 0x1EBCBCu) {
        ctx->pc = 0x1EBCBCu;
            // 0x1ebcbc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1EBCC0u;
        goto label_1ebcc0;
    }
    ctx->pc = 0x1EBCB8u;
    {
        const bool branch_taken_0x1ebcb8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCB8u;
            // 0x1ebcbc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcb8) {
            ctx->pc = 0x1EBD04u;
            goto label_1ebd04;
        }
    }
    ctx->pc = 0x1EBCC0u;
label_1ebcc0:
    // 0x1ebcc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ebcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ebcc4:
    // 0x1ebcc4: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1ebcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1ebcc8:
    // 0x1ebcc8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1ebcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1ebccc:
    // 0x1ebccc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ebcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1ebcd0:
    // 0x1ebcd0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1ebcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1ebcd4:
    // 0x1ebcd4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1ebcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ebcd8:
    // 0x1ebcd8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1ebcd8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ebcdc:
    // 0x1ebcdc: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1ebcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ebce0:
    // 0x1ebce0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1ebce0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1ebce4:
    // 0x1ebce4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1ebce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ebce8:
    // 0x1ebce8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1ebce8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ebcec:
    // 0x1ebcec: 0xc07d630  jal         func_1F58C0
label_1ebcf0:
    if (ctx->pc == 0x1EBCF0u) {
        ctx->pc = 0x1EBCF0u;
            // 0x1ebcf0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1EBCF4u;
        goto label_1ebcf4;
    }
    ctx->pc = 0x1EBCECu;
    SET_GPR_U32(ctx, 31, 0x1EBCF4u);
    ctx->pc = 0x1EBCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCECu;
            // 0x1ebcf0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F58C0u;
    if (runtime->hasFunction(0x1F58C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F58C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCF4u; }
        if (ctx->pc != 0x1EBCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F58C0_0x1f58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCF4u; }
        if (ctx->pc != 0x1EBCF4u) { return; }
    }
    ctx->pc = 0x1EBCF4u;
label_1ebcf4:
    // 0x1ebcf4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ebcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ebcf8:
    // 0x1ebcf8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ebcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1ebcfc:
    // 0x1ebcfc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ebd00:
    if (ctx->pc == 0x1EBD00u) {
        ctx->pc = 0x1EBD00u;
            // 0x1ebd00: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1EBD04u;
        goto label_1ebd04;
    }
    ctx->pc = 0x1EBCFCu;
    {
        const bool branch_taken_0x1ebcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCFCu;
            // 0x1ebd00: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcfc) {
            ctx->pc = 0x1EBD1Cu;
            goto label_1ebd1c;
        }
    }
    ctx->pc = 0x1EBD04u;
label_1ebd04:
    // 0x1ebd04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ebd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd08:
    // 0x1ebd08: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1ebd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ebd0c:
    // 0x1ebd0c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1ebd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd10:
    // 0x1ebd10: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1ebd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ebd14:
    // 0x1ebd14: 0xc07d630  jal         func_1F58C0
label_1ebd18:
    if (ctx->pc == 0x1EBD18u) {
        ctx->pc = 0x1EBD18u;
            // 0x1ebd18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD1Cu;
        goto label_1ebd1c;
    }
    ctx->pc = 0x1EBD14u;
    SET_GPR_U32(ctx, 31, 0x1EBD1Cu);
    ctx->pc = 0x1EBD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD14u;
            // 0x1ebd18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F58C0u;
    if (runtime->hasFunction(0x1F58C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F58C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD1Cu; }
        if (ctx->pc != 0x1EBD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F58C0_0x1f58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD1Cu; }
        if (ctx->pc != 0x1EBD1Cu) { return; }
    }
    ctx->pc = 0x1EBD1Cu;
label_1ebd1c:
    // 0x1ebd1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ebd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ebd20:
    // 0x1ebd20: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ebd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1ebd24:
    // 0x1ebd24: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1ebd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1ebd28:
    // 0x1ebd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebd2c:
    // 0x1ebd2c: 0x3e00008  jr          $ra
label_1ebd30:
    if (ctx->pc == 0x1EBD30u) {
        ctx->pc = 0x1EBD30u;
            // 0x1ebd30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1EBD34u;
        goto label_1ebd34;
    }
    ctx->pc = 0x1EBD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD2Cu;
            // 0x1ebd30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBD34u;
label_1ebd34:
    // 0x1ebd34: 0x0  nop
    ctx->pc = 0x1ebd34u;
    // NOP
label_1ebd38:
    // 0x1ebd38: 0x0  nop
    ctx->pc = 0x1ebd38u;
    // NOP
label_1ebd3c:
    // 0x1ebd3c: 0x0  nop
    ctx->pc = 0x1ebd3cu;
    // NOP
}
