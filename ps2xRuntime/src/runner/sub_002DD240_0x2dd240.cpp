#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DD240
// Address: 0x2dd240 - 0x2ddb70
void sub_002DD240_0x2dd240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD240_0x2dd240");
#endif

    switch (ctx->pc) {
        case 0x2dd240u: goto label_2dd240;
        case 0x2dd244u: goto label_2dd244;
        case 0x2dd248u: goto label_2dd248;
        case 0x2dd24cu: goto label_2dd24c;
        case 0x2dd250u: goto label_2dd250;
        case 0x2dd254u: goto label_2dd254;
        case 0x2dd258u: goto label_2dd258;
        case 0x2dd25cu: goto label_2dd25c;
        case 0x2dd260u: goto label_2dd260;
        case 0x2dd264u: goto label_2dd264;
        case 0x2dd268u: goto label_2dd268;
        case 0x2dd26cu: goto label_2dd26c;
        case 0x2dd270u: goto label_2dd270;
        case 0x2dd274u: goto label_2dd274;
        case 0x2dd278u: goto label_2dd278;
        case 0x2dd27cu: goto label_2dd27c;
        case 0x2dd280u: goto label_2dd280;
        case 0x2dd284u: goto label_2dd284;
        case 0x2dd288u: goto label_2dd288;
        case 0x2dd28cu: goto label_2dd28c;
        case 0x2dd290u: goto label_2dd290;
        case 0x2dd294u: goto label_2dd294;
        case 0x2dd298u: goto label_2dd298;
        case 0x2dd29cu: goto label_2dd29c;
        case 0x2dd2a0u: goto label_2dd2a0;
        case 0x2dd2a4u: goto label_2dd2a4;
        case 0x2dd2a8u: goto label_2dd2a8;
        case 0x2dd2acu: goto label_2dd2ac;
        case 0x2dd2b0u: goto label_2dd2b0;
        case 0x2dd2b4u: goto label_2dd2b4;
        case 0x2dd2b8u: goto label_2dd2b8;
        case 0x2dd2bcu: goto label_2dd2bc;
        case 0x2dd2c0u: goto label_2dd2c0;
        case 0x2dd2c4u: goto label_2dd2c4;
        case 0x2dd2c8u: goto label_2dd2c8;
        case 0x2dd2ccu: goto label_2dd2cc;
        case 0x2dd2d0u: goto label_2dd2d0;
        case 0x2dd2d4u: goto label_2dd2d4;
        case 0x2dd2d8u: goto label_2dd2d8;
        case 0x2dd2dcu: goto label_2dd2dc;
        case 0x2dd2e0u: goto label_2dd2e0;
        case 0x2dd2e4u: goto label_2dd2e4;
        case 0x2dd2e8u: goto label_2dd2e8;
        case 0x2dd2ecu: goto label_2dd2ec;
        case 0x2dd2f0u: goto label_2dd2f0;
        case 0x2dd2f4u: goto label_2dd2f4;
        case 0x2dd2f8u: goto label_2dd2f8;
        case 0x2dd2fcu: goto label_2dd2fc;
        case 0x2dd300u: goto label_2dd300;
        case 0x2dd304u: goto label_2dd304;
        case 0x2dd308u: goto label_2dd308;
        case 0x2dd30cu: goto label_2dd30c;
        case 0x2dd310u: goto label_2dd310;
        case 0x2dd314u: goto label_2dd314;
        case 0x2dd318u: goto label_2dd318;
        case 0x2dd31cu: goto label_2dd31c;
        case 0x2dd320u: goto label_2dd320;
        case 0x2dd324u: goto label_2dd324;
        case 0x2dd328u: goto label_2dd328;
        case 0x2dd32cu: goto label_2dd32c;
        case 0x2dd330u: goto label_2dd330;
        case 0x2dd334u: goto label_2dd334;
        case 0x2dd338u: goto label_2dd338;
        case 0x2dd33cu: goto label_2dd33c;
        case 0x2dd340u: goto label_2dd340;
        case 0x2dd344u: goto label_2dd344;
        case 0x2dd348u: goto label_2dd348;
        case 0x2dd34cu: goto label_2dd34c;
        case 0x2dd350u: goto label_2dd350;
        case 0x2dd354u: goto label_2dd354;
        case 0x2dd358u: goto label_2dd358;
        case 0x2dd35cu: goto label_2dd35c;
        case 0x2dd360u: goto label_2dd360;
        case 0x2dd364u: goto label_2dd364;
        case 0x2dd368u: goto label_2dd368;
        case 0x2dd36cu: goto label_2dd36c;
        case 0x2dd370u: goto label_2dd370;
        case 0x2dd374u: goto label_2dd374;
        case 0x2dd378u: goto label_2dd378;
        case 0x2dd37cu: goto label_2dd37c;
        case 0x2dd380u: goto label_2dd380;
        case 0x2dd384u: goto label_2dd384;
        case 0x2dd388u: goto label_2dd388;
        case 0x2dd38cu: goto label_2dd38c;
        case 0x2dd390u: goto label_2dd390;
        case 0x2dd394u: goto label_2dd394;
        case 0x2dd398u: goto label_2dd398;
        case 0x2dd39cu: goto label_2dd39c;
        case 0x2dd3a0u: goto label_2dd3a0;
        case 0x2dd3a4u: goto label_2dd3a4;
        case 0x2dd3a8u: goto label_2dd3a8;
        case 0x2dd3acu: goto label_2dd3ac;
        case 0x2dd3b0u: goto label_2dd3b0;
        case 0x2dd3b4u: goto label_2dd3b4;
        case 0x2dd3b8u: goto label_2dd3b8;
        case 0x2dd3bcu: goto label_2dd3bc;
        case 0x2dd3c0u: goto label_2dd3c0;
        case 0x2dd3c4u: goto label_2dd3c4;
        case 0x2dd3c8u: goto label_2dd3c8;
        case 0x2dd3ccu: goto label_2dd3cc;
        case 0x2dd3d0u: goto label_2dd3d0;
        case 0x2dd3d4u: goto label_2dd3d4;
        case 0x2dd3d8u: goto label_2dd3d8;
        case 0x2dd3dcu: goto label_2dd3dc;
        case 0x2dd3e0u: goto label_2dd3e0;
        case 0x2dd3e4u: goto label_2dd3e4;
        case 0x2dd3e8u: goto label_2dd3e8;
        case 0x2dd3ecu: goto label_2dd3ec;
        case 0x2dd3f0u: goto label_2dd3f0;
        case 0x2dd3f4u: goto label_2dd3f4;
        case 0x2dd3f8u: goto label_2dd3f8;
        case 0x2dd3fcu: goto label_2dd3fc;
        case 0x2dd400u: goto label_2dd400;
        case 0x2dd404u: goto label_2dd404;
        case 0x2dd408u: goto label_2dd408;
        case 0x2dd40cu: goto label_2dd40c;
        case 0x2dd410u: goto label_2dd410;
        case 0x2dd414u: goto label_2dd414;
        case 0x2dd418u: goto label_2dd418;
        case 0x2dd41cu: goto label_2dd41c;
        case 0x2dd420u: goto label_2dd420;
        case 0x2dd424u: goto label_2dd424;
        case 0x2dd428u: goto label_2dd428;
        case 0x2dd42cu: goto label_2dd42c;
        case 0x2dd430u: goto label_2dd430;
        case 0x2dd434u: goto label_2dd434;
        case 0x2dd438u: goto label_2dd438;
        case 0x2dd43cu: goto label_2dd43c;
        case 0x2dd440u: goto label_2dd440;
        case 0x2dd444u: goto label_2dd444;
        case 0x2dd448u: goto label_2dd448;
        case 0x2dd44cu: goto label_2dd44c;
        case 0x2dd450u: goto label_2dd450;
        case 0x2dd454u: goto label_2dd454;
        case 0x2dd458u: goto label_2dd458;
        case 0x2dd45cu: goto label_2dd45c;
        case 0x2dd460u: goto label_2dd460;
        case 0x2dd464u: goto label_2dd464;
        case 0x2dd468u: goto label_2dd468;
        case 0x2dd46cu: goto label_2dd46c;
        case 0x2dd470u: goto label_2dd470;
        case 0x2dd474u: goto label_2dd474;
        case 0x2dd478u: goto label_2dd478;
        case 0x2dd47cu: goto label_2dd47c;
        case 0x2dd480u: goto label_2dd480;
        case 0x2dd484u: goto label_2dd484;
        case 0x2dd488u: goto label_2dd488;
        case 0x2dd48cu: goto label_2dd48c;
        case 0x2dd490u: goto label_2dd490;
        case 0x2dd494u: goto label_2dd494;
        case 0x2dd498u: goto label_2dd498;
        case 0x2dd49cu: goto label_2dd49c;
        case 0x2dd4a0u: goto label_2dd4a0;
        case 0x2dd4a4u: goto label_2dd4a4;
        case 0x2dd4a8u: goto label_2dd4a8;
        case 0x2dd4acu: goto label_2dd4ac;
        case 0x2dd4b0u: goto label_2dd4b0;
        case 0x2dd4b4u: goto label_2dd4b4;
        case 0x2dd4b8u: goto label_2dd4b8;
        case 0x2dd4bcu: goto label_2dd4bc;
        case 0x2dd4c0u: goto label_2dd4c0;
        case 0x2dd4c4u: goto label_2dd4c4;
        case 0x2dd4c8u: goto label_2dd4c8;
        case 0x2dd4ccu: goto label_2dd4cc;
        case 0x2dd4d0u: goto label_2dd4d0;
        case 0x2dd4d4u: goto label_2dd4d4;
        case 0x2dd4d8u: goto label_2dd4d8;
        case 0x2dd4dcu: goto label_2dd4dc;
        case 0x2dd4e0u: goto label_2dd4e0;
        case 0x2dd4e4u: goto label_2dd4e4;
        case 0x2dd4e8u: goto label_2dd4e8;
        case 0x2dd4ecu: goto label_2dd4ec;
        case 0x2dd4f0u: goto label_2dd4f0;
        case 0x2dd4f4u: goto label_2dd4f4;
        case 0x2dd4f8u: goto label_2dd4f8;
        case 0x2dd4fcu: goto label_2dd4fc;
        case 0x2dd500u: goto label_2dd500;
        case 0x2dd504u: goto label_2dd504;
        case 0x2dd508u: goto label_2dd508;
        case 0x2dd50cu: goto label_2dd50c;
        case 0x2dd510u: goto label_2dd510;
        case 0x2dd514u: goto label_2dd514;
        case 0x2dd518u: goto label_2dd518;
        case 0x2dd51cu: goto label_2dd51c;
        case 0x2dd520u: goto label_2dd520;
        case 0x2dd524u: goto label_2dd524;
        case 0x2dd528u: goto label_2dd528;
        case 0x2dd52cu: goto label_2dd52c;
        case 0x2dd530u: goto label_2dd530;
        case 0x2dd534u: goto label_2dd534;
        case 0x2dd538u: goto label_2dd538;
        case 0x2dd53cu: goto label_2dd53c;
        case 0x2dd540u: goto label_2dd540;
        case 0x2dd544u: goto label_2dd544;
        case 0x2dd548u: goto label_2dd548;
        case 0x2dd54cu: goto label_2dd54c;
        case 0x2dd550u: goto label_2dd550;
        case 0x2dd554u: goto label_2dd554;
        case 0x2dd558u: goto label_2dd558;
        case 0x2dd55cu: goto label_2dd55c;
        case 0x2dd560u: goto label_2dd560;
        case 0x2dd564u: goto label_2dd564;
        case 0x2dd568u: goto label_2dd568;
        case 0x2dd56cu: goto label_2dd56c;
        case 0x2dd570u: goto label_2dd570;
        case 0x2dd574u: goto label_2dd574;
        case 0x2dd578u: goto label_2dd578;
        case 0x2dd57cu: goto label_2dd57c;
        case 0x2dd580u: goto label_2dd580;
        case 0x2dd584u: goto label_2dd584;
        case 0x2dd588u: goto label_2dd588;
        case 0x2dd58cu: goto label_2dd58c;
        case 0x2dd590u: goto label_2dd590;
        case 0x2dd594u: goto label_2dd594;
        case 0x2dd598u: goto label_2dd598;
        case 0x2dd59cu: goto label_2dd59c;
        case 0x2dd5a0u: goto label_2dd5a0;
        case 0x2dd5a4u: goto label_2dd5a4;
        case 0x2dd5a8u: goto label_2dd5a8;
        case 0x2dd5acu: goto label_2dd5ac;
        case 0x2dd5b0u: goto label_2dd5b0;
        case 0x2dd5b4u: goto label_2dd5b4;
        case 0x2dd5b8u: goto label_2dd5b8;
        case 0x2dd5bcu: goto label_2dd5bc;
        case 0x2dd5c0u: goto label_2dd5c0;
        case 0x2dd5c4u: goto label_2dd5c4;
        case 0x2dd5c8u: goto label_2dd5c8;
        case 0x2dd5ccu: goto label_2dd5cc;
        case 0x2dd5d0u: goto label_2dd5d0;
        case 0x2dd5d4u: goto label_2dd5d4;
        case 0x2dd5d8u: goto label_2dd5d8;
        case 0x2dd5dcu: goto label_2dd5dc;
        case 0x2dd5e0u: goto label_2dd5e0;
        case 0x2dd5e4u: goto label_2dd5e4;
        case 0x2dd5e8u: goto label_2dd5e8;
        case 0x2dd5ecu: goto label_2dd5ec;
        case 0x2dd5f0u: goto label_2dd5f0;
        case 0x2dd5f4u: goto label_2dd5f4;
        case 0x2dd5f8u: goto label_2dd5f8;
        case 0x2dd5fcu: goto label_2dd5fc;
        case 0x2dd600u: goto label_2dd600;
        case 0x2dd604u: goto label_2dd604;
        case 0x2dd608u: goto label_2dd608;
        case 0x2dd60cu: goto label_2dd60c;
        case 0x2dd610u: goto label_2dd610;
        case 0x2dd614u: goto label_2dd614;
        case 0x2dd618u: goto label_2dd618;
        case 0x2dd61cu: goto label_2dd61c;
        case 0x2dd620u: goto label_2dd620;
        case 0x2dd624u: goto label_2dd624;
        case 0x2dd628u: goto label_2dd628;
        case 0x2dd62cu: goto label_2dd62c;
        case 0x2dd630u: goto label_2dd630;
        case 0x2dd634u: goto label_2dd634;
        case 0x2dd638u: goto label_2dd638;
        case 0x2dd63cu: goto label_2dd63c;
        case 0x2dd640u: goto label_2dd640;
        case 0x2dd644u: goto label_2dd644;
        case 0x2dd648u: goto label_2dd648;
        case 0x2dd64cu: goto label_2dd64c;
        case 0x2dd650u: goto label_2dd650;
        case 0x2dd654u: goto label_2dd654;
        case 0x2dd658u: goto label_2dd658;
        case 0x2dd65cu: goto label_2dd65c;
        case 0x2dd660u: goto label_2dd660;
        case 0x2dd664u: goto label_2dd664;
        case 0x2dd668u: goto label_2dd668;
        case 0x2dd66cu: goto label_2dd66c;
        case 0x2dd670u: goto label_2dd670;
        case 0x2dd674u: goto label_2dd674;
        case 0x2dd678u: goto label_2dd678;
        case 0x2dd67cu: goto label_2dd67c;
        case 0x2dd680u: goto label_2dd680;
        case 0x2dd684u: goto label_2dd684;
        case 0x2dd688u: goto label_2dd688;
        case 0x2dd68cu: goto label_2dd68c;
        case 0x2dd690u: goto label_2dd690;
        case 0x2dd694u: goto label_2dd694;
        case 0x2dd698u: goto label_2dd698;
        case 0x2dd69cu: goto label_2dd69c;
        case 0x2dd6a0u: goto label_2dd6a0;
        case 0x2dd6a4u: goto label_2dd6a4;
        case 0x2dd6a8u: goto label_2dd6a8;
        case 0x2dd6acu: goto label_2dd6ac;
        case 0x2dd6b0u: goto label_2dd6b0;
        case 0x2dd6b4u: goto label_2dd6b4;
        case 0x2dd6b8u: goto label_2dd6b8;
        case 0x2dd6bcu: goto label_2dd6bc;
        case 0x2dd6c0u: goto label_2dd6c0;
        case 0x2dd6c4u: goto label_2dd6c4;
        case 0x2dd6c8u: goto label_2dd6c8;
        case 0x2dd6ccu: goto label_2dd6cc;
        case 0x2dd6d0u: goto label_2dd6d0;
        case 0x2dd6d4u: goto label_2dd6d4;
        case 0x2dd6d8u: goto label_2dd6d8;
        case 0x2dd6dcu: goto label_2dd6dc;
        case 0x2dd6e0u: goto label_2dd6e0;
        case 0x2dd6e4u: goto label_2dd6e4;
        case 0x2dd6e8u: goto label_2dd6e8;
        case 0x2dd6ecu: goto label_2dd6ec;
        case 0x2dd6f0u: goto label_2dd6f0;
        case 0x2dd6f4u: goto label_2dd6f4;
        case 0x2dd6f8u: goto label_2dd6f8;
        case 0x2dd6fcu: goto label_2dd6fc;
        case 0x2dd700u: goto label_2dd700;
        case 0x2dd704u: goto label_2dd704;
        case 0x2dd708u: goto label_2dd708;
        case 0x2dd70cu: goto label_2dd70c;
        case 0x2dd710u: goto label_2dd710;
        case 0x2dd714u: goto label_2dd714;
        case 0x2dd718u: goto label_2dd718;
        case 0x2dd71cu: goto label_2dd71c;
        case 0x2dd720u: goto label_2dd720;
        case 0x2dd724u: goto label_2dd724;
        case 0x2dd728u: goto label_2dd728;
        case 0x2dd72cu: goto label_2dd72c;
        case 0x2dd730u: goto label_2dd730;
        case 0x2dd734u: goto label_2dd734;
        case 0x2dd738u: goto label_2dd738;
        case 0x2dd73cu: goto label_2dd73c;
        case 0x2dd740u: goto label_2dd740;
        case 0x2dd744u: goto label_2dd744;
        case 0x2dd748u: goto label_2dd748;
        case 0x2dd74cu: goto label_2dd74c;
        case 0x2dd750u: goto label_2dd750;
        case 0x2dd754u: goto label_2dd754;
        case 0x2dd758u: goto label_2dd758;
        case 0x2dd75cu: goto label_2dd75c;
        case 0x2dd760u: goto label_2dd760;
        case 0x2dd764u: goto label_2dd764;
        case 0x2dd768u: goto label_2dd768;
        case 0x2dd76cu: goto label_2dd76c;
        case 0x2dd770u: goto label_2dd770;
        case 0x2dd774u: goto label_2dd774;
        case 0x2dd778u: goto label_2dd778;
        case 0x2dd77cu: goto label_2dd77c;
        case 0x2dd780u: goto label_2dd780;
        case 0x2dd784u: goto label_2dd784;
        case 0x2dd788u: goto label_2dd788;
        case 0x2dd78cu: goto label_2dd78c;
        case 0x2dd790u: goto label_2dd790;
        case 0x2dd794u: goto label_2dd794;
        case 0x2dd798u: goto label_2dd798;
        case 0x2dd79cu: goto label_2dd79c;
        case 0x2dd7a0u: goto label_2dd7a0;
        case 0x2dd7a4u: goto label_2dd7a4;
        case 0x2dd7a8u: goto label_2dd7a8;
        case 0x2dd7acu: goto label_2dd7ac;
        case 0x2dd7b0u: goto label_2dd7b0;
        case 0x2dd7b4u: goto label_2dd7b4;
        case 0x2dd7b8u: goto label_2dd7b8;
        case 0x2dd7bcu: goto label_2dd7bc;
        case 0x2dd7c0u: goto label_2dd7c0;
        case 0x2dd7c4u: goto label_2dd7c4;
        case 0x2dd7c8u: goto label_2dd7c8;
        case 0x2dd7ccu: goto label_2dd7cc;
        case 0x2dd7d0u: goto label_2dd7d0;
        case 0x2dd7d4u: goto label_2dd7d4;
        case 0x2dd7d8u: goto label_2dd7d8;
        case 0x2dd7dcu: goto label_2dd7dc;
        case 0x2dd7e0u: goto label_2dd7e0;
        case 0x2dd7e4u: goto label_2dd7e4;
        case 0x2dd7e8u: goto label_2dd7e8;
        case 0x2dd7ecu: goto label_2dd7ec;
        case 0x2dd7f0u: goto label_2dd7f0;
        case 0x2dd7f4u: goto label_2dd7f4;
        case 0x2dd7f8u: goto label_2dd7f8;
        case 0x2dd7fcu: goto label_2dd7fc;
        case 0x2dd800u: goto label_2dd800;
        case 0x2dd804u: goto label_2dd804;
        case 0x2dd808u: goto label_2dd808;
        case 0x2dd80cu: goto label_2dd80c;
        case 0x2dd810u: goto label_2dd810;
        case 0x2dd814u: goto label_2dd814;
        case 0x2dd818u: goto label_2dd818;
        case 0x2dd81cu: goto label_2dd81c;
        case 0x2dd820u: goto label_2dd820;
        case 0x2dd824u: goto label_2dd824;
        case 0x2dd828u: goto label_2dd828;
        case 0x2dd82cu: goto label_2dd82c;
        case 0x2dd830u: goto label_2dd830;
        case 0x2dd834u: goto label_2dd834;
        case 0x2dd838u: goto label_2dd838;
        case 0x2dd83cu: goto label_2dd83c;
        case 0x2dd840u: goto label_2dd840;
        case 0x2dd844u: goto label_2dd844;
        case 0x2dd848u: goto label_2dd848;
        case 0x2dd84cu: goto label_2dd84c;
        case 0x2dd850u: goto label_2dd850;
        case 0x2dd854u: goto label_2dd854;
        case 0x2dd858u: goto label_2dd858;
        case 0x2dd85cu: goto label_2dd85c;
        case 0x2dd860u: goto label_2dd860;
        case 0x2dd864u: goto label_2dd864;
        case 0x2dd868u: goto label_2dd868;
        case 0x2dd86cu: goto label_2dd86c;
        case 0x2dd870u: goto label_2dd870;
        case 0x2dd874u: goto label_2dd874;
        case 0x2dd878u: goto label_2dd878;
        case 0x2dd87cu: goto label_2dd87c;
        case 0x2dd880u: goto label_2dd880;
        case 0x2dd884u: goto label_2dd884;
        case 0x2dd888u: goto label_2dd888;
        case 0x2dd88cu: goto label_2dd88c;
        case 0x2dd890u: goto label_2dd890;
        case 0x2dd894u: goto label_2dd894;
        case 0x2dd898u: goto label_2dd898;
        case 0x2dd89cu: goto label_2dd89c;
        case 0x2dd8a0u: goto label_2dd8a0;
        case 0x2dd8a4u: goto label_2dd8a4;
        case 0x2dd8a8u: goto label_2dd8a8;
        case 0x2dd8acu: goto label_2dd8ac;
        case 0x2dd8b0u: goto label_2dd8b0;
        case 0x2dd8b4u: goto label_2dd8b4;
        case 0x2dd8b8u: goto label_2dd8b8;
        case 0x2dd8bcu: goto label_2dd8bc;
        case 0x2dd8c0u: goto label_2dd8c0;
        case 0x2dd8c4u: goto label_2dd8c4;
        case 0x2dd8c8u: goto label_2dd8c8;
        case 0x2dd8ccu: goto label_2dd8cc;
        case 0x2dd8d0u: goto label_2dd8d0;
        case 0x2dd8d4u: goto label_2dd8d4;
        case 0x2dd8d8u: goto label_2dd8d8;
        case 0x2dd8dcu: goto label_2dd8dc;
        case 0x2dd8e0u: goto label_2dd8e0;
        case 0x2dd8e4u: goto label_2dd8e4;
        case 0x2dd8e8u: goto label_2dd8e8;
        case 0x2dd8ecu: goto label_2dd8ec;
        case 0x2dd8f0u: goto label_2dd8f0;
        case 0x2dd8f4u: goto label_2dd8f4;
        case 0x2dd8f8u: goto label_2dd8f8;
        case 0x2dd8fcu: goto label_2dd8fc;
        case 0x2dd900u: goto label_2dd900;
        case 0x2dd904u: goto label_2dd904;
        case 0x2dd908u: goto label_2dd908;
        case 0x2dd90cu: goto label_2dd90c;
        case 0x2dd910u: goto label_2dd910;
        case 0x2dd914u: goto label_2dd914;
        case 0x2dd918u: goto label_2dd918;
        case 0x2dd91cu: goto label_2dd91c;
        case 0x2dd920u: goto label_2dd920;
        case 0x2dd924u: goto label_2dd924;
        case 0x2dd928u: goto label_2dd928;
        case 0x2dd92cu: goto label_2dd92c;
        case 0x2dd930u: goto label_2dd930;
        case 0x2dd934u: goto label_2dd934;
        case 0x2dd938u: goto label_2dd938;
        case 0x2dd93cu: goto label_2dd93c;
        case 0x2dd940u: goto label_2dd940;
        case 0x2dd944u: goto label_2dd944;
        case 0x2dd948u: goto label_2dd948;
        case 0x2dd94cu: goto label_2dd94c;
        case 0x2dd950u: goto label_2dd950;
        case 0x2dd954u: goto label_2dd954;
        case 0x2dd958u: goto label_2dd958;
        case 0x2dd95cu: goto label_2dd95c;
        case 0x2dd960u: goto label_2dd960;
        case 0x2dd964u: goto label_2dd964;
        case 0x2dd968u: goto label_2dd968;
        case 0x2dd96cu: goto label_2dd96c;
        case 0x2dd970u: goto label_2dd970;
        case 0x2dd974u: goto label_2dd974;
        case 0x2dd978u: goto label_2dd978;
        case 0x2dd97cu: goto label_2dd97c;
        case 0x2dd980u: goto label_2dd980;
        case 0x2dd984u: goto label_2dd984;
        case 0x2dd988u: goto label_2dd988;
        case 0x2dd98cu: goto label_2dd98c;
        case 0x2dd990u: goto label_2dd990;
        case 0x2dd994u: goto label_2dd994;
        case 0x2dd998u: goto label_2dd998;
        case 0x2dd99cu: goto label_2dd99c;
        case 0x2dd9a0u: goto label_2dd9a0;
        case 0x2dd9a4u: goto label_2dd9a4;
        case 0x2dd9a8u: goto label_2dd9a8;
        case 0x2dd9acu: goto label_2dd9ac;
        case 0x2dd9b0u: goto label_2dd9b0;
        case 0x2dd9b4u: goto label_2dd9b4;
        case 0x2dd9b8u: goto label_2dd9b8;
        case 0x2dd9bcu: goto label_2dd9bc;
        case 0x2dd9c0u: goto label_2dd9c0;
        case 0x2dd9c4u: goto label_2dd9c4;
        case 0x2dd9c8u: goto label_2dd9c8;
        case 0x2dd9ccu: goto label_2dd9cc;
        case 0x2dd9d0u: goto label_2dd9d0;
        case 0x2dd9d4u: goto label_2dd9d4;
        case 0x2dd9d8u: goto label_2dd9d8;
        case 0x2dd9dcu: goto label_2dd9dc;
        case 0x2dd9e0u: goto label_2dd9e0;
        case 0x2dd9e4u: goto label_2dd9e4;
        case 0x2dd9e8u: goto label_2dd9e8;
        case 0x2dd9ecu: goto label_2dd9ec;
        case 0x2dd9f0u: goto label_2dd9f0;
        case 0x2dd9f4u: goto label_2dd9f4;
        case 0x2dd9f8u: goto label_2dd9f8;
        case 0x2dd9fcu: goto label_2dd9fc;
        case 0x2dda00u: goto label_2dda00;
        case 0x2dda04u: goto label_2dda04;
        case 0x2dda08u: goto label_2dda08;
        case 0x2dda0cu: goto label_2dda0c;
        case 0x2dda10u: goto label_2dda10;
        case 0x2dda14u: goto label_2dda14;
        case 0x2dda18u: goto label_2dda18;
        case 0x2dda1cu: goto label_2dda1c;
        case 0x2dda20u: goto label_2dda20;
        case 0x2dda24u: goto label_2dda24;
        case 0x2dda28u: goto label_2dda28;
        case 0x2dda2cu: goto label_2dda2c;
        case 0x2dda30u: goto label_2dda30;
        case 0x2dda34u: goto label_2dda34;
        case 0x2dda38u: goto label_2dda38;
        case 0x2dda3cu: goto label_2dda3c;
        case 0x2dda40u: goto label_2dda40;
        case 0x2dda44u: goto label_2dda44;
        case 0x2dda48u: goto label_2dda48;
        case 0x2dda4cu: goto label_2dda4c;
        case 0x2dda50u: goto label_2dda50;
        case 0x2dda54u: goto label_2dda54;
        case 0x2dda58u: goto label_2dda58;
        case 0x2dda5cu: goto label_2dda5c;
        case 0x2dda60u: goto label_2dda60;
        case 0x2dda64u: goto label_2dda64;
        case 0x2dda68u: goto label_2dda68;
        case 0x2dda6cu: goto label_2dda6c;
        case 0x2dda70u: goto label_2dda70;
        case 0x2dda74u: goto label_2dda74;
        case 0x2dda78u: goto label_2dda78;
        case 0x2dda7cu: goto label_2dda7c;
        case 0x2dda80u: goto label_2dda80;
        case 0x2dda84u: goto label_2dda84;
        case 0x2dda88u: goto label_2dda88;
        case 0x2dda8cu: goto label_2dda8c;
        case 0x2dda90u: goto label_2dda90;
        case 0x2dda94u: goto label_2dda94;
        case 0x2dda98u: goto label_2dda98;
        case 0x2dda9cu: goto label_2dda9c;
        case 0x2ddaa0u: goto label_2ddaa0;
        case 0x2ddaa4u: goto label_2ddaa4;
        case 0x2ddaa8u: goto label_2ddaa8;
        case 0x2ddaacu: goto label_2ddaac;
        case 0x2ddab0u: goto label_2ddab0;
        case 0x2ddab4u: goto label_2ddab4;
        case 0x2ddab8u: goto label_2ddab8;
        case 0x2ddabcu: goto label_2ddabc;
        case 0x2ddac0u: goto label_2ddac0;
        case 0x2ddac4u: goto label_2ddac4;
        case 0x2ddac8u: goto label_2ddac8;
        case 0x2ddaccu: goto label_2ddacc;
        case 0x2ddad0u: goto label_2ddad0;
        case 0x2ddad4u: goto label_2ddad4;
        case 0x2ddad8u: goto label_2ddad8;
        case 0x2ddadcu: goto label_2ddadc;
        case 0x2ddae0u: goto label_2ddae0;
        case 0x2ddae4u: goto label_2ddae4;
        case 0x2ddae8u: goto label_2ddae8;
        case 0x2ddaecu: goto label_2ddaec;
        case 0x2ddaf0u: goto label_2ddaf0;
        case 0x2ddaf4u: goto label_2ddaf4;
        case 0x2ddaf8u: goto label_2ddaf8;
        case 0x2ddafcu: goto label_2ddafc;
        case 0x2ddb00u: goto label_2ddb00;
        case 0x2ddb04u: goto label_2ddb04;
        case 0x2ddb08u: goto label_2ddb08;
        case 0x2ddb0cu: goto label_2ddb0c;
        case 0x2ddb10u: goto label_2ddb10;
        case 0x2ddb14u: goto label_2ddb14;
        case 0x2ddb18u: goto label_2ddb18;
        case 0x2ddb1cu: goto label_2ddb1c;
        case 0x2ddb20u: goto label_2ddb20;
        case 0x2ddb24u: goto label_2ddb24;
        case 0x2ddb28u: goto label_2ddb28;
        case 0x2ddb2cu: goto label_2ddb2c;
        case 0x2ddb30u: goto label_2ddb30;
        case 0x2ddb34u: goto label_2ddb34;
        case 0x2ddb38u: goto label_2ddb38;
        case 0x2ddb3cu: goto label_2ddb3c;
        case 0x2ddb40u: goto label_2ddb40;
        case 0x2ddb44u: goto label_2ddb44;
        case 0x2ddb48u: goto label_2ddb48;
        case 0x2ddb4cu: goto label_2ddb4c;
        case 0x2ddb50u: goto label_2ddb50;
        case 0x2ddb54u: goto label_2ddb54;
        case 0x2ddb58u: goto label_2ddb58;
        case 0x2ddb5cu: goto label_2ddb5c;
        case 0x2ddb60u: goto label_2ddb60;
        case 0x2ddb64u: goto label_2ddb64;
        case 0x2ddb68u: goto label_2ddb68;
        case 0x2ddb6cu: goto label_2ddb6c;
        default: break;
    }

    ctx->pc = 0x2dd240u;

label_2dd240:
    // 0x2dd240: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x2dd240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_2dd244:
    // 0x2dd244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dd244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2dd248:
    // 0x2dd248: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dd248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2dd24c:
    // 0x2dd24c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dd24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2dd250:
    // 0x2dd250: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dd250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2dd254:
    // 0x2dd254: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2dd254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2dd258:
    // 0x2dd258: 0x908305a8  lbu         $v1, 0x5A8($a0)
    ctx->pc = 0x2dd258u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1448)));
label_2dd25c:
    // 0x2dd25c: 0x10600200  beqz        $v1, . + 4 + (0x200 << 2)
label_2dd260:
    if (ctx->pc == 0x2DD260u) {
        ctx->pc = 0x2DD260u;
            // 0x2dd260: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD264u;
        goto label_2dd264;
    }
    ctx->pc = 0x2DD25Cu;
    {
        const bool branch_taken_0x2dd25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD25Cu;
            // 0x2dd260: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd25c) {
            ctx->pc = 0x2DDA60u;
            goto label_2dda60;
        }
    }
    ctx->pc = 0x2DD264u;
label_2dd264:
    // 0x2dd264: 0xc6210654  lwc1        $f1, 0x654($s1)
    ctx->pc = 0x2dd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd268:
    // 0x2dd268: 0xc6200610  lwc1        $f0, 0x610($s1)
    ctx->pc = 0x2dd268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd26c:
    // 0x2dd26c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dd26cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd270:
    // 0x2dd270: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
label_2dd274:
    if (ctx->pc == 0x2DD274u) {
        ctx->pc = 0x2DD274u;
            // 0x2dd274: 0xc6220614  lwc1        $f2, 0x614($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2DD278u;
        goto label_2dd278;
    }
    ctx->pc = 0x2DD270u;
    {
        const bool branch_taken_0x2dd270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd270) {
            ctx->pc = 0x2DD274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD270u;
            // 0x2dd274: 0xc6220614  lwc1        $f2, 0x614($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD304u;
            goto label_2dd304;
        }
    }
    ctx->pc = 0x2DD278u;
label_2dd278:
    // 0x2dd278: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2dd278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_2dd27c:
    // 0x2dd27c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2dd27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2dd280:
    // 0x2dd280: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x2dd280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_2dd284:
    // 0x2dd284: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2dd284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd288:
    // 0x2dd288: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd28c:
    // 0x2dd28c: 0xe6200654  swc1        $f0, 0x654($s1)
    ctx->pc = 0x2dd28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1620), bits); }
label_2dd290:
    // 0x2dd290: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2dd290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2dd294:
    // 0x2dd294: 0xc6200658  lwc1        $f0, 0x658($s1)
    ctx->pc = 0x2dd294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd298:
    // 0x2dd298: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2dd298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd29c:
    // 0x2dd29c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dd29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dd2a0:
    // 0x2dd2a0: 0xe6200658  swc1        $f0, 0x658($s1)
    ctx->pc = 0x2dd2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1624), bits); }
label_2dd2a4:
    // 0x2dd2a4: 0xc6210610  lwc1        $f1, 0x610($s1)
    ctx->pc = 0x2dd2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd2a8:
    // 0x2dd2a8: 0xc6200654  lwc1        $f0, 0x654($s1)
    ctx->pc = 0x2dd2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd2ac:
    // 0x2dd2ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2dd2acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd2b0:
    // 0x2dd2b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dd2b4:
    if (ctx->pc == 0x2DD2B4u) {
        ctx->pc = 0x2DD2B4u;
            // 0x2dd2b4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DD2B8u;
        goto label_2dd2b8;
    }
    ctx->pc = 0x2DD2B0u;
    {
        const bool branch_taken_0x2dd2b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd2b0) {
            ctx->pc = 0x2DD2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD2B0u;
            // 0x2dd2b4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD2B8u;
            goto label_2dd2b8;
        }
    }
    ctx->pc = 0x2DD2B8u;
label_2dd2b8:
    // 0x2dd2b8: 0xe6210654  swc1        $f1, 0x654($s1)
    ctx->pc = 0x2dd2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1620), bits); }
label_2dd2bc:
    // 0x2dd2bc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2dd2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2dd2c0:
    // 0x2dd2c0: 0xc6210610  lwc1        $f1, 0x610($s1)
    ctx->pc = 0x2dd2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd2c4:
    // 0x2dd2c4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2dd2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dd2c8:
    // 0x2dd2c8: 0xc6200654  lwc1        $f0, 0x654($s1)
    ctx->pc = 0x2dd2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd2cc:
    // 0x2dd2cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dd2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2dd2d0:
    // 0x2dd2d0: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x2dd2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_2dd2d4:
    // 0x2dd2d4: 0x8c63e468  lw          $v1, -0x1B98($v1)
    ctx->pc = 0x2dd2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960232)));
label_2dd2d8:
    // 0x2dd2d8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2dd2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2dd2dc:
    // 0x2dd2dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2dd2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2dd2e0:
    // 0x2dd2e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2dd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2dd2e4:
    // 0x2dd2e4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dd2e8:
    // 0x2dd2e8: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x2dd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_2dd2ec:
    // 0x2dd2ec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dd2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dd2f0:
    // 0x2dd2f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2dd2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2dd2f4:
    // 0x2dd2f4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_2dd2f8:
    if (ctx->pc == 0x2DD2F8u) {
        ctx->pc = 0x2DD2F8u;
            // 0x2dd2f8: 0x46010503  div.s       $f20, $f0, $f1 (Delay Slot)
        if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
        ctx->pc = 0x2DD2FCu;
        goto label_2dd2fc;
    }
    ctx->pc = 0x2DD2F4u;
    {
        const bool branch_taken_0x2dd2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD2F4u;
            // 0x2dd2f8: 0x46010503  div.s       $f20, $f0, $f1 (Delay Slot)
        if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2f4) {
            ctx->pc = 0x2DD488u;
            goto label_2dd488;
        }
    }
    ctx->pc = 0x2DD2FCu;
label_2dd2fc:
    // 0x2dd2fc: 0x10000062  b           . + 4 + (0x62 << 2)
label_2dd300:
    if (ctx->pc == 0x2DD300u) {
        ctx->pc = 0x2DD300u;
            // 0x2dd300: 0xe6210654  swc1        $f1, 0x654($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1620), bits); }
        ctx->pc = 0x2DD304u;
        goto label_2dd304;
    }
    ctx->pc = 0x2DD2FCu;
    {
        const bool branch_taken_0x2dd2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD2FCu;
            // 0x2dd300: 0xe6210654  swc1        $f1, 0x654($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2fc) {
            ctx->pc = 0x2DD488u;
            goto label_2dd488;
        }
    }
    ctx->pc = 0x2DD304u;
label_2dd304:
    // 0x2dd304: 0xc6210658  lwc1        $f1, 0x658($s1)
    ctx->pc = 0x2dd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd308:
    // 0x2dd308: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2dd308u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd30c:
    // 0x2dd30c: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
label_2dd310:
    if (ctx->pc == 0x2DD310u) {
        ctx->pc = 0x2DD310u;
            // 0x2dd310: 0xc621065c  lwc1        $f1, 0x65C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2DD314u;
        goto label_2dd314;
    }
    ctx->pc = 0x2DD30Cu;
    {
        const bool branch_taken_0x2dd30c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd30c) {
            ctx->pc = 0x2DD310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD30Cu;
            // 0x2dd310: 0xc621065c  lwc1        $f1, 0x65C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD424u;
            goto label_2dd424;
        }
    }
    ctx->pc = 0x2DD314u;
label_2dd314:
    // 0x2dd314: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2dd314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2dd318:
    // 0x2dd318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd31c:
    // 0x2dd31c: 0x0  nop
    ctx->pc = 0x2dd31cu;
    // NOP
label_2dd320:
    // 0x2dd320: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2dd320u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd324:
    // 0x2dd324: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_2dd328:
    if (ctx->pc == 0x2DD328u) {
        ctx->pc = 0x2DD328u;
            // 0x2dd328: 0xc6210658  lwc1        $f1, 0x658($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2DD32Cu;
        goto label_2dd32c;
    }
    ctx->pc = 0x2DD324u;
    {
        const bool branch_taken_0x2dd324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd324) {
            ctx->pc = 0x2DD328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD324u;
            // 0x2dd328: 0xc6210658  lwc1        $f1, 0x658($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD35Cu;
            goto label_2dd35c;
        }
    }
    ctx->pc = 0x2DD32Cu;
label_2dd32c:
    // 0x2dd32c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2dd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2dd330:
    // 0x2dd330: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2dd330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2dd334:
    // 0x2dd334: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2dd334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd338:
    // 0x2dd338: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd33c:
    // 0x2dd33c: 0xe6200658  swc1        $f0, 0x658($s1)
    ctx->pc = 0x2dd33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1624), bits); }
label_2dd340:
    // 0x2dd340: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x2dd340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd344:
    // 0x2dd344: 0xc6200658  lwc1        $f0, 0x658($s1)
    ctx->pc = 0x2dd344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd348:
    // 0x2dd348: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2dd348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd34c:
    // 0x2dd34c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dd350:
    if (ctx->pc == 0x2DD350u) {
        ctx->pc = 0x2DD350u;
            // 0x2dd350: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DD354u;
        goto label_2dd354;
    }
    ctx->pc = 0x2DD34Cu;
    {
        const bool branch_taken_0x2dd34c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd34c) {
            ctx->pc = 0x2DD350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD34Cu;
            // 0x2dd350: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD354u;
            goto label_2dd354;
        }
    }
    ctx->pc = 0x2DD354u;
label_2dd354:
    // 0x2dd354: 0xe6210658  swc1        $f1, 0x658($s1)
    ctx->pc = 0x2dd354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1624), bits); }
label_2dd358:
    // 0x2dd358: 0xc6210658  lwc1        $f1, 0x658($s1)
    ctx->pc = 0x2dd358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd35c:
    // 0x2dd35c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dd35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2dd360:
    // 0x2dd360: 0xc6200614  lwc1        $f0, 0x614($s1)
    ctx->pc = 0x2dd360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd364:
    // 0x2dd364: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2dd364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dd368:
    // 0x2dd368: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dd368u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd36c:
    // 0x2dd36c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_2dd370:
    if (ctx->pc == 0x2DD370u) {
        ctx->pc = 0x2DD370u;
            // 0x2dd370: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2DD374u;
        goto label_2dd374;
    }
    ctx->pc = 0x2DD36Cu;
    {
        const bool branch_taken_0x2dd36c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd36c) {
            ctx->pc = 0x2DD370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD36Cu;
            // 0x2dd370: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD3A8u;
            goto label_2dd3a8;
        }
    }
    ctx->pc = 0x2DD374u;
label_2dd374:
    // 0x2dd374: 0xc0b76dc  jal         func_2DDB70
label_2dd378:
    if (ctx->pc == 0x2DD378u) {
        ctx->pc = 0x2DD378u;
            // 0x2dd378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD37Cu;
        goto label_2dd37c;
    }
    ctx->pc = 0x2DD374u;
    SET_GPR_U32(ctx, 31, 0x2DD37Cu);
    ctx->pc = 0x2DD378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD374u;
            // 0x2dd378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB70u;
    if (runtime->hasFunction(0x2DDB70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD37Cu; }
        if (ctx->pc != 0x2DD37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDB70_0x2ddb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD37Cu; }
        if (ctx->pc != 0x2DD37Cu) { return; }
    }
    ctx->pc = 0x2DD37Cu;
label_2dd37c:
    // 0x2dd37c: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2dd37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd380:
    // 0x2dd380: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dd380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dd384:
    // 0x2dd384: 0x0  nop
    ctx->pc = 0x2dd384u;
    // NOP
label_2dd388:
    // 0x2dd388: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x2dd388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd38c:
    // 0x2dd38c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2dd390:
    if (ctx->pc == 0x2DD390u) {
        ctx->pc = 0x2DD390u;
            // 0x2dd390: 0xc620065c  lwc1        $f0, 0x65C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2DD394u;
        goto label_2dd394;
    }
    ctx->pc = 0x2DD38Cu;
    {
        const bool branch_taken_0x2dd38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd38c) {
            ctx->pc = 0x2DD390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD38Cu;
            // 0x2dd390: 0xc620065c  lwc1        $f0, 0x65C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD39Cu;
            goto label_2dd39c;
        }
    }
    ctx->pc = 0x2DD394u;
label_2dd394:
    // 0x2dd394: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dd398:
    if (ctx->pc == 0x2DD398u) {
        ctx->pc = 0x2DD39Cu;
        goto label_2dd39c;
    }
    ctx->pc = 0x2DD394u;
    {
        const bool branch_taken_0x2dd394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd394) {
            ctx->pc = 0x2DD3A4u;
            goto label_2dd3a4;
        }
    }
    ctx->pc = 0x2DD39Cu;
label_2dd39c:
    // 0x2dd39c: 0x0  nop
    ctx->pc = 0x2dd39cu;
    // NOP
label_2dd3a0:
    // 0x2dd3a0: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2dd3a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_2dd3a4:
    // 0x2dd3a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2dd3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dd3a8:
    // 0x2dd3a8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2dd3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2dd3ac:
    // 0x2dd3ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dd3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2dd3b0:
    // 0x2dd3b0: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x2dd3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_2dd3b4:
    // 0x2dd3b4: 0x8c63e470  lw          $v1, -0x1B90($v1)
    ctx->pc = 0x2dd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960240)));
label_2dd3b8:
    // 0x2dd3b8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2dd3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2dd3bc:
    // 0x2dd3bc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2dd3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2dd3c0:
    // 0x2dd3c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2dd3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2dd3c4:
    // 0x2dd3c4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dd3c8:
    // 0x2dd3c8: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x2dd3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_2dd3cc:
    // 0x2dd3cc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dd3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dd3d0:
    // 0x2dd3d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2dd3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2dd3d4:
    // 0x2dd3d4: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
label_2dd3d8:
    if (ctx->pc == 0x2DD3D8u) {
        ctx->pc = 0x2DD3D8u;
            // 0x2dd3d8: 0x922305a8  lbu         $v1, 0x5A8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1448)));
        ctx->pc = 0x2DD3DCu;
        goto label_2dd3dc;
    }
    ctx->pc = 0x2DD3D4u;
    {
        const bool branch_taken_0x2dd3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd3d4) {
            ctx->pc = 0x2DD3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD3D4u;
            // 0x2dd3d8: 0x922305a8  lbu         $v1, 0x5A8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD48Cu;
            goto label_2dd48c;
        }
    }
    ctx->pc = 0x2DD3DCu;
label_2dd3dc:
    // 0x2dd3dc: 0xc6200610  lwc1        $f0, 0x610($s1)
    ctx->pc = 0x2dd3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd3e0:
    // 0x2dd3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd3e4:
    // 0x2dd3e4: 0xc0b76dc  jal         func_2DDB70
label_2dd3e8:
    if (ctx->pc == 0x2DD3E8u) {
        ctx->pc = 0x2DD3E8u;
            // 0x2dd3e8: 0xe6200654  swc1        $f0, 0x654($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1620), bits); }
        ctx->pc = 0x2DD3ECu;
        goto label_2dd3ec;
    }
    ctx->pc = 0x2DD3E4u;
    SET_GPR_U32(ctx, 31, 0x2DD3ECu);
    ctx->pc = 0x2DD3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD3E4u;
            // 0x2dd3e8: 0xe6200654  swc1        $f0, 0x654($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1620), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB70u;
    if (runtime->hasFunction(0x2DDB70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD3ECu; }
        if (ctx->pc != 0x2DD3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDB70_0x2ddb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD3ECu; }
        if (ctx->pc != 0x2DD3ECu) { return; }
    }
    ctx->pc = 0x2DD3ECu;
label_2dd3ec:
    // 0x2dd3ec: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2dd3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd3f0:
    // 0x2dd3f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dd3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dd3f4:
    // 0x2dd3f4: 0x0  nop
    ctx->pc = 0x2dd3f4u;
    // NOP
label_2dd3f8:
    // 0x2dd3f8: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x2dd3f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd3fc:
    // 0x2dd3fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2dd400:
    if (ctx->pc == 0x2DD400u) {
        ctx->pc = 0x2DD400u;
            // 0x2dd400: 0xc620065c  lwc1        $f0, 0x65C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2DD404u;
        goto label_2dd404;
    }
    ctx->pc = 0x2DD3FCu;
    {
        const bool branch_taken_0x2dd3fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd3fc) {
            ctx->pc = 0x2DD400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD3FCu;
            // 0x2dd400: 0xc620065c  lwc1        $f0, 0x65C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD40Cu;
            goto label_2dd40c;
        }
    }
    ctx->pc = 0x2DD404u;
label_2dd404:
    // 0x2dd404: 0x10000020  b           . + 4 + (0x20 << 2)
label_2dd408:
    if (ctx->pc == 0x2DD408u) {
        ctx->pc = 0x2DD40Cu;
        goto label_2dd40c;
    }
    ctx->pc = 0x2DD404u;
    {
        const bool branch_taken_0x2dd404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd404) {
            ctx->pc = 0x2DD488u;
            goto label_2dd488;
        }
    }
    ctx->pc = 0x2DD40Cu;
label_2dd40c:
    // 0x2dd40c: 0x0  nop
    ctx->pc = 0x2dd40cu;
    // NOP
label_2dd410:
    // 0x2dd410: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2dd410u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_2dd414:
    // 0x2dd414: 0x0  nop
    ctx->pc = 0x2dd414u;
    // NOP
label_2dd418:
    // 0x2dd418: 0x0  nop
    ctx->pc = 0x2dd418u;
    // NOP
label_2dd41c:
    // 0x2dd41c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2dd420:
    if (ctx->pc == 0x2DD420u) {
        ctx->pc = 0x2DD424u;
        goto label_2dd424;
    }
    ctx->pc = 0x2DD41Cu;
    {
        const bool branch_taken_0x2dd41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd41c) {
            ctx->pc = 0x2DD488u;
            goto label_2dd488;
        }
    }
    ctx->pc = 0x2DD424u;
label_2dd424:
    // 0x2dd424: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x2dd424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd428:
    // 0x2dd428: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dd428u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd42c:
    // 0x2dd42c: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_2dd430:
    if (ctx->pc == 0x2DD430u) {
        ctx->pc = 0x2DD430u;
            // 0x2dd430: 0x262405ac  addiu       $a0, $s1, 0x5AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
        ctx->pc = 0x2DD434u;
        goto label_2dd434;
    }
    ctx->pc = 0x2DD42Cu;
    {
        const bool branch_taken_0x2dd42c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd42c) {
            ctx->pc = 0x2DD430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD42Cu;
            // 0x2dd430: 0x262405ac  addiu       $a0, $s1, 0x5AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD478u;
            goto label_2dd478;
        }
    }
    ctx->pc = 0x2DD434u;
label_2dd434:
    // 0x2dd434: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2dd434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2dd438:
    // 0x2dd438: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2dd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2dd43c:
    // 0x2dd43c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2dd43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd440:
    // 0x2dd440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd444:
    // 0x2dd444: 0xe620065c  swc1        $f0, 0x65C($s1)
    ctx->pc = 0x2dd444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1628), bits); }
label_2dd448:
    // 0x2dd448: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2dd448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd44c:
    // 0x2dd44c: 0xc620065c  lwc1        $f0, 0x65C($s1)
    ctx->pc = 0x2dd44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd450:
    // 0x2dd450: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2dd450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd454:
    // 0x2dd454: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dd458:
    if (ctx->pc == 0x2DD458u) {
        ctx->pc = 0x2DD458u;
            // 0x2dd458: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DD45Cu;
        goto label_2dd45c;
    }
    ctx->pc = 0x2DD454u;
    {
        const bool branch_taken_0x2dd454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd454) {
            ctx->pc = 0x2DD458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD454u;
            // 0x2dd458: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD45Cu;
            goto label_2dd45c;
        }
    }
    ctx->pc = 0x2DD45Cu;
label_2dd45c:
    // 0x2dd45c: 0xe621065c  swc1        $f1, 0x65C($s1)
    ctx->pc = 0x2dd45cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1628), bits); }
label_2dd460:
    // 0x2dd460: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x2dd460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd464:
    // 0x2dd464: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2dd464u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2dd468:
    // 0x2dd468: 0x0  nop
    ctx->pc = 0x2dd468u;
    // NOP
label_2dd46c:
    // 0x2dd46c: 0x0  nop
    ctx->pc = 0x2dd46cu;
    // NOP
label_2dd470:
    // 0x2dd470: 0x10000005  b           . + 4 + (0x5 << 2)
label_2dd474:
    if (ctx->pc == 0x2DD474u) {
        ctx->pc = 0x2DD478u;
        goto label_2dd478;
    }
    ctx->pc = 0x2DD470u;
    {
        const bool branch_taken_0x2dd470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd470) {
            ctx->pc = 0x2DD488u;
            goto label_2dd488;
        }
    }
    ctx->pc = 0x2DD478u;
label_2dd478:
    // 0x2dd478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd47c:
    // 0x2dd47c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2dd47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2dd480:
    // 0x2dd480: 0xc04a576  jal         func_1295D8
label_2dd484:
    if (ctx->pc == 0x2DD484u) {
        ctx->pc = 0x2DD484u;
            // 0x2dd484: 0xa22005a8  sb          $zero, 0x5A8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1448), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2DD488u;
        goto label_2dd488;
    }
    ctx->pc = 0x2DD480u;
    SET_GPR_U32(ctx, 31, 0x2DD488u);
    ctx->pc = 0x2DD484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD480u;
            // 0x2dd484: 0xa22005a8  sb          $zero, 0x5A8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1448), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD488u; }
        if (ctx->pc != 0x2DD488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD488u; }
        if (ctx->pc != 0x2DD488u) { return; }
    }
    ctx->pc = 0x2DD488u;
label_2dd488:
    // 0x2dd488: 0x922305a8  lbu         $v1, 0x5A8($s1)
    ctx->pc = 0x2dd488u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1448)));
label_2dd48c:
    // 0x2dd48c: 0x50600153  beql        $v1, $zero, . + 4 + (0x153 << 2)
label_2dd490:
    if (ctx->pc == 0x2DD490u) {
        ctx->pc = 0x2DD490u;
            // 0x2dd490: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->pc = 0x2DD494u;
        goto label_2dd494;
    }
    ctx->pc = 0x2DD48Cu;
    {
        const bool branch_taken_0x2dd48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd48c) {
            ctx->pc = 0x2DD490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD48Cu;
            // 0x2dd490: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9DCu;
            goto label_2dd9dc;
        }
    }
    ctx->pc = 0x2DD494u;
label_2dd494:
    // 0x2dd494: 0x8e2305e0  lw          $v1, 0x5E0($s1)
    ctx->pc = 0x2dd494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
label_2dd498:
    // 0x2dd498: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
label_2dd49c:
    if (ctx->pc == 0x2DD49Cu) {
        ctx->pc = 0x2DD49Cu;
            // 0x2dd49c: 0x263005ac  addiu       $s0, $s1, 0x5AC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
        ctx->pc = 0x2DD4A0u;
        goto label_2dd4a0;
    }
    ctx->pc = 0x2DD498u;
    {
        const bool branch_taken_0x2dd498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd498) {
            ctx->pc = 0x2DD49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD498u;
            // 0x2dd49c: 0x263005ac  addiu       $s0, $s1, 0x5AC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD578u;
            goto label_2dd578;
        }
    }
    ctx->pc = 0x2DD4A0u;
label_2dd4a0:
    // 0x2dd4a0: 0xc62205ac  lwc1        $f2, 0x5AC($s1)
    ctx->pc = 0x2dd4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd4a4:
    // 0x2dd4a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2dd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2dd4a8:
    // 0x2dd4a8: 0xc62105b0  lwc1        $f1, 0x5B0($s1)
    ctx->pc = 0x2dd4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd4ac:
    // 0x2dd4ac: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x2dd4acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_2dd4b0:
    // 0x2dd4b0: 0xc62005b4  lwc1        $f0, 0x5B4($s1)
    ctx->pc = 0x2dd4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd4b4:
    // 0x2dd4b4: 0x2442e458  addiu       $v0, $v0, -0x1BA8
    ctx->pc = 0x2dd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960216));
label_2dd4b8:
    // 0x2dd4b8: 0x24e70e84  addiu       $a3, $a3, 0xE84
    ctx->pc = 0x2dd4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3716));
label_2dd4bc:
    // 0x2dd4bc: 0x262505ac  addiu       $a1, $s1, 0x5AC
    ctx->pc = 0x2dd4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1452));
label_2dd4c0:
    // 0x2dd4c0: 0xe7a20240  swc1        $f2, 0x240($sp)
    ctx->pc = 0x2dd4c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_2dd4c4:
    // 0x2dd4c4: 0xe7a10244  swc1        $f1, 0x244($sp)
    ctx->pc = 0x2dd4c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_2dd4c8:
    // 0x2dd4c8: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2dd4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2dd4cc:
    // 0x2dd4cc: 0xc62205b8  lwc1        $f2, 0x5B8($s1)
    ctx->pc = 0x2dd4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd4d0:
    // 0x2dd4d0: 0xc62105bc  lwc1        $f1, 0x5BC($s1)
    ctx->pc = 0x2dd4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd4d4:
    // 0x2dd4d4: 0xc62005c0  lwc1        $f0, 0x5C0($s1)
    ctx->pc = 0x2dd4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd4d8:
    // 0x2dd4d8: 0xe7a2024c  swc1        $f2, 0x24C($sp)
    ctx->pc = 0x2dd4d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_2dd4dc:
    // 0x2dd4dc: 0xe7a10250  swc1        $f1, 0x250($sp)
    ctx->pc = 0x2dd4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_2dd4e0:
    // 0x2dd4e0: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x2dd4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_2dd4e4:
    // 0x2dd4e4: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x2dd4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd4e8:
    // 0x2dd4e8: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x2dd4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_2dd4ec:
    // 0x2dd4ec: 0x822305c8  lb          $v1, 0x5C8($s1)
    ctx->pc = 0x2dd4ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1480)));
label_2dd4f0:
    // 0x2dd4f0: 0xa3a3025c  sb          $v1, 0x25C($sp)
    ctx->pc = 0x2dd4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 604), (uint8_t)GPR_U32(ctx, 3));
label_2dd4f4:
    // 0x2dd4f4: 0x822305c9  lb          $v1, 0x5C9($s1)
    ctx->pc = 0x2dd4f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1481)));
label_2dd4f8:
    // 0x2dd4f8: 0xa3a3025d  sb          $v1, 0x25D($sp)
    ctx->pc = 0x2dd4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 605), (uint8_t)GPR_U32(ctx, 3));
label_2dd4fc:
    // 0x2dd4fc: 0x822305ca  lb          $v1, 0x5CA($s1)
    ctx->pc = 0x2dd4fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1482)));
label_2dd500:
    // 0x2dd500: 0xa3a3025e  sb          $v1, 0x25E($sp)
    ctx->pc = 0x2dd500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 606), (uint8_t)GPR_U32(ctx, 3));
label_2dd504:
    // 0x2dd504: 0x822305cb  lb          $v1, 0x5CB($s1)
    ctx->pc = 0x2dd504u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1483)));
label_2dd508:
    // 0x2dd508: 0xa3a3025f  sb          $v1, 0x25F($sp)
    ctx->pc = 0x2dd508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 607), (uint8_t)GPR_U32(ctx, 3));
label_2dd50c:
    // 0x2dd50c: 0x8e2305cc  lw          $v1, 0x5CC($s1)
    ctx->pc = 0x2dd50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1484)));
label_2dd510:
    // 0x2dd510: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x2dd510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
label_2dd514:
    // 0x2dd514: 0xc62005d0  lwc1        $f0, 0x5D0($s1)
    ctx->pc = 0x2dd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd518:
    // 0x2dd518: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x2dd518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_2dd51c:
    // 0x2dd51c: 0xc62005d4  lwc1        $f0, 0x5D4($s1)
    ctx->pc = 0x2dd51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd520:
    // 0x2dd520: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x2dd520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_2dd524:
    // 0x2dd524: 0xc62005d8  lwc1        $f0, 0x5D8($s1)
    ctx->pc = 0x2dd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd528:
    // 0x2dd528: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x2dd528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_2dd52c:
    // 0x2dd52c: 0xc62005dc  lwc1        $f0, 0x5DC($s1)
    ctx->pc = 0x2dd52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd530:
    // 0x2dd530: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x2dd530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_2dd534:
    // 0x2dd534: 0x8e2305e0  lw          $v1, 0x5E0($s1)
    ctx->pc = 0x2dd534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
label_2dd538:
    // 0x2dd538: 0xafa30274  sw          $v1, 0x274($sp)
    ctx->pc = 0x2dd538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
label_2dd53c:
    // 0x2dd53c: 0x8e2305e4  lw          $v1, 0x5E4($s1)
    ctx->pc = 0x2dd53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1508)));
label_2dd540:
    // 0x2dd540: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x2dd540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
label_2dd544:
    // 0x2dd544: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2dd544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dd548:
    // 0x2dd548: 0x8e2305e0  lw          $v1, 0x5E0($s1)
    ctx->pc = 0x2dd548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
label_2dd54c:
    // 0x2dd54c: 0x8e2605e4  lw          $a2, 0x5E4($s1)
    ctx->pc = 0x2dd54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1508)));
label_2dd550:
    // 0x2dd550: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x2dd550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_2dd554:
    // 0x2dd554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2dd554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2dd558:
    // 0x2dd558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dd55c:
    // 0x2dd55c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2dd55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2dd560:
    // 0x2dd560: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dd560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dd564:
    // 0x2dd564: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2dd564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2dd568:
    // 0x2dd568: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dd56c:
    // 0x2dd56c: 0x40f809  jalr        $v0
label_2dd570:
    if (ctx->pc == 0x2DD570u) {
        ctx->pc = 0x2DD570u;
            // 0x2dd570: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x2DD574u;
        goto label_2dd574;
    }
    ctx->pc = 0x2DD56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD574u);
        ctx->pc = 0x2DD570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD56Cu;
            // 0x2dd570: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD574u; }
            if (ctx->pc != 0x2DD574u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD574u;
label_2dd574:
    // 0x2dd574: 0x27b00240  addiu       $s0, $sp, 0x240
    ctx->pc = 0x2dd574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2dd578:
    // 0x2dd578: 0x8e23061c  lw          $v1, 0x61C($s1)
    ctx->pc = 0x2dd578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
label_2dd57c:
    // 0x2dd57c: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
label_2dd580:
    if (ctx->pc == 0x2DD580u) {
        ctx->pc = 0x2DD580u;
            // 0x2dd580: 0x262505e8  addiu       $a1, $s1, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1512));
        ctx->pc = 0x2DD584u;
        goto label_2dd584;
    }
    ctx->pc = 0x2DD57Cu;
    {
        const bool branch_taken_0x2dd57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd57c) {
            ctx->pc = 0x2DD580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD57Cu;
            // 0x2dd580: 0x262505e8  addiu       $a1, $s1, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD65Cu;
            goto label_2dd65c;
        }
    }
    ctx->pc = 0x2DD584u;
label_2dd584:
    // 0x2dd584: 0xc62205e8  lwc1        $f2, 0x5E8($s1)
    ctx->pc = 0x2dd584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd588:
    // 0x2dd588: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2dd588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2dd58c:
    // 0x2dd58c: 0xc62105ec  lwc1        $f1, 0x5EC($s1)
    ctx->pc = 0x2dd58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd590:
    // 0x2dd590: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x2dd590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_2dd594:
    // 0x2dd594: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2dd594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd598:
    // 0x2dd598: 0x2442e458  addiu       $v0, $v0, -0x1BA8
    ctx->pc = 0x2dd598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960216));
label_2dd59c:
    // 0x2dd59c: 0x24e70e84  addiu       $a3, $a3, 0xE84
    ctx->pc = 0x2dd59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3716));
label_2dd5a0:
    // 0x2dd5a0: 0x262505e8  addiu       $a1, $s1, 0x5E8
    ctx->pc = 0x2dd5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1512));
label_2dd5a4:
    // 0x2dd5a4: 0xe7a2027c  swc1        $f2, 0x27C($sp)
    ctx->pc = 0x2dd5a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_2dd5a8:
    // 0x2dd5a8: 0xe7a10280  swc1        $f1, 0x280($sp)
    ctx->pc = 0x2dd5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_2dd5ac:
    // 0x2dd5ac: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x2dd5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_2dd5b0:
    // 0x2dd5b0: 0xc62205f4  lwc1        $f2, 0x5F4($s1)
    ctx->pc = 0x2dd5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd5b4:
    // 0x2dd5b4: 0xc62105f8  lwc1        $f1, 0x5F8($s1)
    ctx->pc = 0x2dd5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd5b8:
    // 0x2dd5b8: 0xc62005fc  lwc1        $f0, 0x5FC($s1)
    ctx->pc = 0x2dd5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd5bc:
    // 0x2dd5bc: 0xe7a20288  swc1        $f2, 0x288($sp)
    ctx->pc = 0x2dd5bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_2dd5c0:
    // 0x2dd5c0: 0xe7a1028c  swc1        $f1, 0x28C($sp)
    ctx->pc = 0x2dd5c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_2dd5c4:
    // 0x2dd5c4: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x2dd5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_2dd5c8:
    // 0x2dd5c8: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x2dd5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd5cc:
    // 0x2dd5cc: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x2dd5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_2dd5d0:
    // 0x2dd5d0: 0x82230604  lb          $v1, 0x604($s1)
    ctx->pc = 0x2dd5d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1540)));
label_2dd5d4:
    // 0x2dd5d4: 0xa3a30298  sb          $v1, 0x298($sp)
    ctx->pc = 0x2dd5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 664), (uint8_t)GPR_U32(ctx, 3));
label_2dd5d8:
    // 0x2dd5d8: 0x82230605  lb          $v1, 0x605($s1)
    ctx->pc = 0x2dd5d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1541)));
label_2dd5dc:
    // 0x2dd5dc: 0xa3a30299  sb          $v1, 0x299($sp)
    ctx->pc = 0x2dd5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 665), (uint8_t)GPR_U32(ctx, 3));
label_2dd5e0:
    // 0x2dd5e0: 0x82230606  lb          $v1, 0x606($s1)
    ctx->pc = 0x2dd5e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1542)));
label_2dd5e4:
    // 0x2dd5e4: 0xa3a3029a  sb          $v1, 0x29A($sp)
    ctx->pc = 0x2dd5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 666), (uint8_t)GPR_U32(ctx, 3));
label_2dd5e8:
    // 0x2dd5e8: 0x82230607  lb          $v1, 0x607($s1)
    ctx->pc = 0x2dd5e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1543)));
label_2dd5ec:
    // 0x2dd5ec: 0xa3a3029b  sb          $v1, 0x29B($sp)
    ctx->pc = 0x2dd5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 667), (uint8_t)GPR_U32(ctx, 3));
label_2dd5f0:
    // 0x2dd5f0: 0x8e230608  lw          $v1, 0x608($s1)
    ctx->pc = 0x2dd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
label_2dd5f4:
    // 0x2dd5f4: 0xafa3029c  sw          $v1, 0x29C($sp)
    ctx->pc = 0x2dd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
label_2dd5f8:
    // 0x2dd5f8: 0xc620060c  lwc1        $f0, 0x60C($s1)
    ctx->pc = 0x2dd5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd5fc:
    // 0x2dd5fc: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2dd5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_2dd600:
    // 0x2dd600: 0xc6200610  lwc1        $f0, 0x610($s1)
    ctx->pc = 0x2dd600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd604:
    // 0x2dd604: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x2dd604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_2dd608:
    // 0x2dd608: 0xc6200614  lwc1        $f0, 0x614($s1)
    ctx->pc = 0x2dd608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd60c:
    // 0x2dd60c: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x2dd60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_2dd610:
    // 0x2dd610: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x2dd610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd614:
    // 0x2dd614: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x2dd614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_2dd618:
    // 0x2dd618: 0x8e23061c  lw          $v1, 0x61C($s1)
    ctx->pc = 0x2dd618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
label_2dd61c:
    // 0x2dd61c: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x2dd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
label_2dd620:
    // 0x2dd620: 0x8e230620  lw          $v1, 0x620($s1)
    ctx->pc = 0x2dd620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_2dd624:
    // 0x2dd624: 0xafa302b4  sw          $v1, 0x2B4($sp)
    ctx->pc = 0x2dd624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 3));
label_2dd628:
    // 0x2dd628: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2dd628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dd62c:
    // 0x2dd62c: 0x8e23061c  lw          $v1, 0x61C($s1)
    ctx->pc = 0x2dd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
label_2dd630:
    // 0x2dd630: 0x8e260620  lw          $a2, 0x620($s1)
    ctx->pc = 0x2dd630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_2dd634:
    // 0x2dd634: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x2dd634u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_2dd638:
    // 0x2dd638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2dd638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2dd63c:
    // 0x2dd63c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dd640:
    // 0x2dd640: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2dd640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2dd644:
    // 0x2dd644: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dd644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dd648:
    // 0x2dd648: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2dd648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2dd64c:
    // 0x2dd64c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2dd64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dd650:
    // 0x2dd650: 0x40f809  jalr        $v0
label_2dd654:
    if (ctx->pc == 0x2DD654u) {
        ctx->pc = 0x2DD654u;
            // 0x2dd654: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x2DD658u;
        goto label_2dd658;
    }
    ctx->pc = 0x2DD650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD658u);
        ctx->pc = 0x2DD654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD650u;
            // 0x2dd654: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD658u; }
            if (ctx->pc != 0x2DD658u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD658u;
label_2dd658:
    // 0x2dd658: 0x27a5027c  addiu       $a1, $sp, 0x27C
    ctx->pc = 0x2dd658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_2dd65c:
    // 0x2dd65c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2dd660:
    // 0x2dd660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd664:
    // 0x2dd664: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2dd664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd668:
    // 0x2dd668: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2dd668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2dd66c:
    // 0x2dd66c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2dd66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd670:
    // 0x2dd670: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd670u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd674:
    // 0x2dd674: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd678:
    // 0x2dd678: 0xe6210638  swc1        $f1, 0x638($s1)
    ctx->pc = 0x2dd678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1592), bits); }
label_2dd67c:
    // 0x2dd67c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2dd67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd680:
    // 0x2dd680: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2dd680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd684:
    // 0x2dd684: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd684u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd688:
    // 0x2dd688: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd68c:
    // 0x2dd68c: 0xe621063c  swc1        $f1, 0x63C($s1)
    ctx->pc = 0x2dd68cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1596), bits); }
label_2dd690:
    // 0x2dd690: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2dd690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd694:
    // 0x2dd694: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2dd694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd698:
    // 0x2dd698: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd698u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd69c:
    // 0x2dd69c: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd69cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd6a0:
    // 0x2dd6a0: 0xe6210640  swc1        $f1, 0x640($s1)
    ctx->pc = 0x2dd6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1600), bits); }
label_2dd6a4:
    // 0x2dd6a4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2dd6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd6a8:
    // 0x2dd6a8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2dd6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd6ac:
    // 0x2dd6ac: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd6acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd6b0:
    // 0x2dd6b0: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd6b4:
    // 0x2dd6b4: 0xe621062c  swc1        $f1, 0x62C($s1)
    ctx->pc = 0x2dd6b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1580), bits); }
label_2dd6b8:
    // 0x2dd6b8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2dd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd6bc:
    // 0x2dd6bc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2dd6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd6c0:
    // 0x2dd6c0: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd6c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd6c4:
    // 0x2dd6c4: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd6c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd6c8:
    // 0x2dd6c8: 0xe6210630  swc1        $f1, 0x630($s1)
    ctx->pc = 0x2dd6c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
label_2dd6cc:
    // 0x2dd6cc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2dd6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd6d0:
    // 0x2dd6d0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2dd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd6d4:
    // 0x2dd6d4: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd6d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd6d8:
    // 0x2dd6d8: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd6d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd6dc:
    // 0x2dd6dc: 0xe6210634  swc1        $f1, 0x634($s1)
    ctx->pc = 0x2dd6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1588), bits); }
label_2dd6e0:
    // 0x2dd6e0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2dd6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd6e4:
    // 0x2dd6e4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2dd6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd6e8:
    // 0x2dd6e8: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd6e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd6ec:
    // 0x2dd6ec: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd6ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd6f0:
    // 0x2dd6f0: 0xe6210644  swc1        $f1, 0x644($s1)
    ctx->pc = 0x2dd6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
label_2dd6f4:
    // 0x2dd6f4: 0x8204001c  lb          $a0, 0x1C($s0)
    ctx->pc = 0x2dd6f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_2dd6f8:
    // 0x2dd6f8: 0x80a3001c  lb          $v1, 0x1C($a1)
    ctx->pc = 0x2dd6f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
label_2dd6fc:
    // 0x2dd6fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dd6fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd700:
    // 0x2dd700: 0x0  nop
    ctx->pc = 0x2dd700u;
    // NOP
label_2dd704:
    // 0x2dd704: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2dd704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2dd708:
    // 0x2dd708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd70c:
    // 0x2dd70c: 0x0  nop
    ctx->pc = 0x2dd70cu;
    // NOP
label_2dd710:
    // 0x2dd710: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2dd714:
    // 0x2dd714: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd714u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd718:
    // 0x2dd718: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd71c:
    // 0x2dd71c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2dd720:
    // 0x2dd720: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2dd720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2dd724:
    // 0x2dd724: 0x0  nop
    ctx->pc = 0x2dd724u;
    // NOP
label_2dd728:
    // 0x2dd728: 0xa2230648  sb          $v1, 0x648($s1)
    ctx->pc = 0x2dd728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 3));
label_2dd72c:
    // 0x2dd72c: 0x8204001d  lb          $a0, 0x1D($s0)
    ctx->pc = 0x2dd72cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
label_2dd730:
    // 0x2dd730: 0x80a3001d  lb          $v1, 0x1D($a1)
    ctx->pc = 0x2dd730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 29)));
label_2dd734:
    // 0x2dd734: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dd734u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd738:
    // 0x2dd738: 0x0  nop
    ctx->pc = 0x2dd738u;
    // NOP
label_2dd73c:
    // 0x2dd73c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2dd73cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2dd740:
    // 0x2dd740: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd744:
    // 0x2dd744: 0x0  nop
    ctx->pc = 0x2dd744u;
    // NOP
label_2dd748:
    // 0x2dd748: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2dd74c:
    // 0x2dd74c: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd74cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd750:
    // 0x2dd750: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd750u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd754:
    // 0x2dd754: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2dd758:
    // 0x2dd758: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2dd758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2dd75c:
    // 0x2dd75c: 0x0  nop
    ctx->pc = 0x2dd75cu;
    // NOP
label_2dd760:
    // 0x2dd760: 0xa2230649  sb          $v1, 0x649($s1)
    ctx->pc = 0x2dd760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 3));
label_2dd764:
    // 0x2dd764: 0x8204001e  lb          $a0, 0x1E($s0)
    ctx->pc = 0x2dd764u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
label_2dd768:
    // 0x2dd768: 0x80a3001e  lb          $v1, 0x1E($a1)
    ctx->pc = 0x2dd768u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
label_2dd76c:
    // 0x2dd76c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dd76cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd770:
    // 0x2dd770: 0x0  nop
    ctx->pc = 0x2dd770u;
    // NOP
label_2dd774:
    // 0x2dd774: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2dd774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2dd778:
    // 0x2dd778: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd77c:
    // 0x2dd77c: 0x0  nop
    ctx->pc = 0x2dd77cu;
    // NOP
label_2dd780:
    // 0x2dd780: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2dd784:
    // 0x2dd784: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd784u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd788:
    // 0x2dd788: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd78c:
    // 0x2dd78c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd78cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2dd790:
    // 0x2dd790: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2dd790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2dd794:
    // 0x2dd794: 0x0  nop
    ctx->pc = 0x2dd794u;
    // NOP
label_2dd798:
    // 0x2dd798: 0xa223064a  sb          $v1, 0x64A($s1)
    ctx->pc = 0x2dd798u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1610), (uint8_t)GPR_U32(ctx, 3));
label_2dd79c:
    // 0x2dd79c: 0x8204001f  lb          $a0, 0x1F($s0)
    ctx->pc = 0x2dd79cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
label_2dd7a0:
    // 0x2dd7a0: 0x80a3001f  lb          $v1, 0x1F($a1)
    ctx->pc = 0x2dd7a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_2dd7a4:
    // 0x2dd7a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dd7a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd7a8:
    // 0x2dd7a8: 0x0  nop
    ctx->pc = 0x2dd7a8u;
    // NOP
label_2dd7ac:
    // 0x2dd7ac: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2dd7acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2dd7b0:
    // 0x2dd7b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dd7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd7b4:
    // 0x2dd7b4: 0x0  nop
    ctx->pc = 0x2dd7b4u;
    // NOP
label_2dd7b8:
    // 0x2dd7b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2dd7bc:
    // 0x2dd7bc: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd7bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd7c0:
    // 0x2dd7c0: 0x4600105c  madd.s      $f1, $f2, $f0
    ctx->pc = 0x2dd7c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd7c4:
    // 0x2dd7c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd7c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2dd7c8:
    // 0x2dd7c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2dd7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2dd7cc:
    // 0x2dd7cc: 0x0  nop
    ctx->pc = 0x2dd7ccu;
    // NOP
label_2dd7d0:
    // 0x2dd7d0: 0xa223064b  sb          $v1, 0x64B($s1)
    ctx->pc = 0x2dd7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1611), (uint8_t)GPR_U32(ctx, 3));
label_2dd7d4:
    // 0x2dd7d4: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2dd7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd7d8:
    // 0x2dd7d8: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x2dd7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd7dc:
    // 0x2dd7dc: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x2dd7dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dd7e0:
    // 0x2dd7e0: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x2dd7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2dd7e4:
    // 0x2dd7e4: 0xe6200650  swc1        $f0, 0x650($s1)
    ctx->pc = 0x2dd7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1616), bits); }
label_2dd7e8:
    // 0x2dd7e8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2dd7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2dd7ec:
    // 0x2dd7ec: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2dd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2dd7f0:
    // 0x2dd7f0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2dd7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dd7f4:
    // 0x2dd7f4: 0xae23064c  sw          $v1, 0x64C($s1)
    ctx->pc = 0x2dd7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 3));
label_2dd7f8:
    // 0x2dd7f8: 0x922305a9  lbu         $v1, 0x5A9($s1)
    ctx->pc = 0x2dd7f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1449)));
label_2dd7fc:
    // 0x2dd7fc: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
label_2dd800:
    if (ctx->pc == 0x2DD800u) {
        ctx->pc = 0x2DD800u;
            // 0x2dd800: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->pc = 0x2DD804u;
        goto label_2dd804;
    }
    ctx->pc = 0x2DD7FCu;
    {
        const bool branch_taken_0x2dd7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7fc) {
            ctx->pc = 0x2DD800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD7FCu;
            // 0x2dd800: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD8C8u;
            goto label_2dd8c8;
        }
    }
    ctx->pc = 0x2DD804u;
label_2dd804:
    // 0x2dd804: 0xc6210638  lwc1        $f1, 0x638($s1)
    ctx->pc = 0x2dd804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd808:
    // 0x2dd808: 0xc6200674  lwc1        $f0, 0x674($s1)
    ctx->pc = 0x2dd808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd80c:
    // 0x2dd80c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd810:
    // 0x2dd810: 0xe6200638  swc1        $f0, 0x638($s1)
    ctx->pc = 0x2dd810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1592), bits); }
label_2dd814:
    // 0x2dd814: 0xc621063c  lwc1        $f1, 0x63C($s1)
    ctx->pc = 0x2dd814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd818:
    // 0x2dd818: 0xc6200678  lwc1        $f0, 0x678($s1)
    ctx->pc = 0x2dd818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd81c:
    // 0x2dd81c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd820:
    // 0x2dd820: 0xe620063c  swc1        $f0, 0x63C($s1)
    ctx->pc = 0x2dd820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1596), bits); }
label_2dd824:
    // 0x2dd824: 0xc6210640  lwc1        $f1, 0x640($s1)
    ctx->pc = 0x2dd824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd828:
    // 0x2dd828: 0xc620067c  lwc1        $f0, 0x67C($s1)
    ctx->pc = 0x2dd828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd82c:
    // 0x2dd82c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd830:
    // 0x2dd830: 0xe6200640  swc1        $f0, 0x640($s1)
    ctx->pc = 0x2dd830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1600), bits); }
label_2dd834:
    // 0x2dd834: 0xc621062c  lwc1        $f1, 0x62C($s1)
    ctx->pc = 0x2dd834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd838:
    // 0x2dd838: 0xc6200668  lwc1        $f0, 0x668($s1)
    ctx->pc = 0x2dd838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd83c:
    // 0x2dd83c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd840:
    // 0x2dd840: 0xe620062c  swc1        $f0, 0x62C($s1)
    ctx->pc = 0x2dd840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1580), bits); }
label_2dd844:
    // 0x2dd844: 0xc6210630  lwc1        $f1, 0x630($s1)
    ctx->pc = 0x2dd844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd848:
    // 0x2dd848: 0xc620066c  lwc1        $f0, 0x66C($s1)
    ctx->pc = 0x2dd848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd84c:
    // 0x2dd84c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd84cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd850:
    // 0x2dd850: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x2dd850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
label_2dd854:
    // 0x2dd854: 0xc6210634  lwc1        $f1, 0x634($s1)
    ctx->pc = 0x2dd854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd858:
    // 0x2dd858: 0xc6200670  lwc1        $f0, 0x670($s1)
    ctx->pc = 0x2dd858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd85c:
    // 0x2dd85c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd85cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dd860:
    // 0x2dd860: 0xe6200634  swc1        $f0, 0x634($s1)
    ctx->pc = 0x2dd860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1588), bits); }
label_2dd864:
    // 0x2dd864: 0xc6210680  lwc1        $f1, 0x680($s1)
    ctx->pc = 0x2dd864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd868:
    // 0x2dd868: 0xc6200644  lwc1        $f0, 0x644($s1)
    ctx->pc = 0x2dd868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd86c:
    // 0x2dd86c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dd86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dd870:
    // 0x2dd870: 0xe6200644  swc1        $f0, 0x644($s1)
    ctx->pc = 0x2dd870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
label_2dd874:
    // 0x2dd874: 0x82240648  lb          $a0, 0x648($s1)
    ctx->pc = 0x2dd874u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
label_2dd878:
    // 0x2dd878: 0x82230684  lb          $v1, 0x684($s1)
    ctx->pc = 0x2dd878u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1668)));
label_2dd87c:
    // 0x2dd87c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2dd87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2dd880:
    // 0x2dd880: 0xa2230648  sb          $v1, 0x648($s1)
    ctx->pc = 0x2dd880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 3));
label_2dd884:
    // 0x2dd884: 0x82240649  lb          $a0, 0x649($s1)
    ctx->pc = 0x2dd884u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
label_2dd888:
    // 0x2dd888: 0x82230685  lb          $v1, 0x685($s1)
    ctx->pc = 0x2dd888u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1669)));
label_2dd88c:
    // 0x2dd88c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2dd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2dd890:
    // 0x2dd890: 0xa2230649  sb          $v1, 0x649($s1)
    ctx->pc = 0x2dd890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 3));
label_2dd894:
    // 0x2dd894: 0x8224064a  lb          $a0, 0x64A($s1)
    ctx->pc = 0x2dd894u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1610)));
label_2dd898:
    // 0x2dd898: 0x82230686  lb          $v1, 0x686($s1)
    ctx->pc = 0x2dd898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1670)));
label_2dd89c:
    // 0x2dd89c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2dd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2dd8a0:
    // 0x2dd8a0: 0xa223064a  sb          $v1, 0x64A($s1)
    ctx->pc = 0x2dd8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1610), (uint8_t)GPR_U32(ctx, 3));
label_2dd8a4:
    // 0x2dd8a4: 0x8224064b  lb          $a0, 0x64B($s1)
    ctx->pc = 0x2dd8a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1611)));
label_2dd8a8:
    // 0x2dd8a8: 0x82230687  lb          $v1, 0x687($s1)
    ctx->pc = 0x2dd8a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1671)));
label_2dd8ac:
    // 0x2dd8ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2dd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2dd8b0:
    // 0x2dd8b0: 0xa223064b  sb          $v1, 0x64B($s1)
    ctx->pc = 0x2dd8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1611), (uint8_t)GPR_U32(ctx, 3));
label_2dd8b4:
    // 0x2dd8b4: 0xc621068c  lwc1        $f1, 0x68C($s1)
    ctx->pc = 0x2dd8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd8b8:
    // 0x2dd8b8: 0xc6200650  lwc1        $f0, 0x650($s1)
    ctx->pc = 0x2dd8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd8bc:
    // 0x2dd8bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dd8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dd8c0:
    // 0x2dd8c0: 0xe6200650  swc1        $f0, 0x650($s1)
    ctx->pc = 0x2dd8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1616), bits); }
label_2dd8c4:
    // 0x2dd8c4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2dd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2dd8c8:
    // 0x2dd8c8: 0x2624062c  addiu       $a0, $s1, 0x62C
    ctx->pc = 0x2dd8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1580));
label_2dd8cc:
    // 0x2dd8cc: 0xafa301c4  sw          $v1, 0x1C4($sp)
    ctx->pc = 0x2dd8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 3));
label_2dd8d0:
    // 0x2dd8d0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2dd8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dd8d4:
    // 0x2dd8d4: 0xafa40228  sw          $a0, 0x228($sp)
    ctx->pc = 0x2dd8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 4));
label_2dd8d8:
    // 0x2dd8d8: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x2dd8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
label_2dd8dc:
    // 0x2dd8dc: 0xafa401b4  sw          $a0, 0x1B4($sp)
    ctx->pc = 0x2dd8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 4));
label_2dd8e0:
    // 0x2dd8e0: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x2dd8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2dd8e4:
    // 0x2dd8e4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_2dd8e8:
    if (ctx->pc == 0x2DD8E8u) {
        ctx->pc = 0x2DD8E8u;
            // 0x2dd8e8: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2DD8ECu;
        goto label_2dd8ec;
    }
    ctx->pc = 0x2DD8E4u;
    {
        const bool branch_taken_0x2dd8e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD8E4u;
            // 0x2dd8e8: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8e4) {
            ctx->pc = 0x2DD924u;
            goto label_2dd924;
        }
    }
    ctx->pc = 0x2DD8ECu;
label_2dd8ec:
    // 0x2dd8ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dd8ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd8f0:
    // 0x2dd8f0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2dd8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2dd8f4:
    // 0x2dd8f4: 0x320f809  jalr        $t9
label_2dd8f8:
    if (ctx->pc == 0x2DD8F8u) {
        ctx->pc = 0x2DD8F8u;
            // 0x2dd8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8FCu;
        goto label_2dd8fc;
    }
    ctx->pc = 0x2DD8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD8FCu);
        ctx->pc = 0x2DD8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD8F4u;
            // 0x2dd8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD8FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD8FCu; }
            if (ctx->pc != 0x2DD8FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DD8FCu;
label_2dd8fc:
    // 0x2dd8fc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dd8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd900:
    // 0x2dd900: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2dd904:
    if (ctx->pc == 0x2DD904u) {
        ctx->pc = 0x2DD908u;
        goto label_2dd908;
    }
    ctx->pc = 0x2DD900u;
    {
        const bool branch_taken_0x2dd900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd900) {
            ctx->pc = 0x2DD924u;
            goto label_2dd924;
        }
    }
    ctx->pc = 0x2DD908u;
label_2dd908:
    // 0x2dd908: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dd908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd90c:
    // 0x2dd90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd910:
    // 0x2dd910: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2dd910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2dd914:
    // 0x2dd914: 0x320f809  jalr        $t9
label_2dd918:
    if (ctx->pc == 0x2DD918u) {
        ctx->pc = 0x2DD918u;
            // 0x2dd918: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2DD91Cu;
        goto label_2dd91c;
    }
    ctx->pc = 0x2DD914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD91Cu);
        ctx->pc = 0x2DD918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD914u;
            // 0x2dd918: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD91Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD91Cu; }
            if (ctx->pc != 0x2DD91Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DD91Cu;
label_2dd91c:
    // 0x2dd91c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2dd920:
    if (ctx->pc == 0x2DD920u) {
        ctx->pc = 0x2DD924u;
        goto label_2dd924;
    }
    ctx->pc = 0x2DD91Cu;
    {
        const bool branch_taken_0x2dd91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd91c) {
            ctx->pc = 0x2DD95Cu;
            goto label_2dd95c;
        }
    }
    ctx->pc = 0x2DD924u;
label_2dd924:
    // 0x2dd924: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2dd928:
    if (ctx->pc == 0x2DD928u) {
        ctx->pc = 0x2DD92Cu;
        goto label_2dd92c;
    }
    ctx->pc = 0x2DD924u;
    {
        const bool branch_taken_0x2dd924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd924) {
            ctx->pc = 0x2DD95Cu;
            goto label_2dd95c;
        }
    }
    ctx->pc = 0x2DD92Cu;
label_2dd92c:
    // 0x2dd92c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dd92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd930:
    // 0x2dd930: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2dd930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2dd934:
    // 0x2dd934: 0x320f809  jalr        $t9
label_2dd938:
    if (ctx->pc == 0x2DD938u) {
        ctx->pc = 0x2DD938u;
            // 0x2dd938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD93Cu;
        goto label_2dd93c;
    }
    ctx->pc = 0x2DD934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD93Cu);
        ctx->pc = 0x2DD938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD934u;
            // 0x2dd938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD93Cu; }
            if (ctx->pc != 0x2DD93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DD93Cu;
label_2dd93c:
    // 0x2dd93c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2dd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2dd940:
    // 0x2dd940: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2dd944:
    if (ctx->pc == 0x2DD944u) {
        ctx->pc = 0x2DD948u;
        goto label_2dd948;
    }
    ctx->pc = 0x2DD940u;
    {
        const bool branch_taken_0x2dd940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd940) {
            ctx->pc = 0x2DD95Cu;
            goto label_2dd95c;
        }
    }
    ctx->pc = 0x2DD948u;
label_2dd948:
    // 0x2dd948: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dd948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd94c:
    // 0x2dd94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd950:
    // 0x2dd950: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2dd950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2dd954:
    // 0x2dd954: 0x320f809  jalr        $t9
label_2dd958:
    if (ctx->pc == 0x2DD958u) {
        ctx->pc = 0x2DD958u;
            // 0x2dd958: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2DD95Cu;
        goto label_2dd95c;
    }
    ctx->pc = 0x2DD954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD95Cu);
        ctx->pc = 0x2DD958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD954u;
            // 0x2dd958: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD95Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD95Cu; }
            if (ctx->pc != 0x2DD95Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DD95Cu;
label_2dd95c:
    // 0x2dd95c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2dd960:
    if (ctx->pc == 0x2DD960u) {
        ctx->pc = 0x2DD964u;
        goto label_2dd964;
    }
    ctx->pc = 0x2DD95Cu;
    {
        const bool branch_taken_0x2dd95c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd95c) {
            ctx->pc = 0x2DD99Cu;
            goto label_2dd99c;
        }
    }
    ctx->pc = 0x2DD964u;
label_2dd964:
    // 0x2dd964: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd968:
    // 0x2dd968: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2dd968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2dd96c:
    // 0x2dd96c: 0x320f809  jalr        $t9
label_2dd970:
    if (ctx->pc == 0x2DD970u) {
        ctx->pc = 0x2DD970u;
            // 0x2dd970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD974u;
        goto label_2dd974;
    }
    ctx->pc = 0x2DD96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD974u);
        ctx->pc = 0x2DD970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD96Cu;
            // 0x2dd970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD974u; }
            if (ctx->pc != 0x2DD974u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD974u;
label_2dd974:
    // 0x2dd974: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dd974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd978:
    // 0x2dd978: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2dd97c:
    if (ctx->pc == 0x2DD97Cu) {
        ctx->pc = 0x2DD980u;
        goto label_2dd980;
    }
    ctx->pc = 0x2DD978u;
    {
        const bool branch_taken_0x2dd978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd978) {
            ctx->pc = 0x2DD99Cu;
            goto label_2dd99c;
        }
    }
    ctx->pc = 0x2DD980u;
label_2dd980:
    // 0x2dd980: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd984:
    // 0x2dd984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd988:
    // 0x2dd988: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2dd988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2dd98c:
    // 0x2dd98c: 0x320f809  jalr        $t9
label_2dd990:
    if (ctx->pc == 0x2DD990u) {
        ctx->pc = 0x2DD990u;
            // 0x2dd990: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2DD994u;
        goto label_2dd994;
    }
    ctx->pc = 0x2DD98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD994u);
        ctx->pc = 0x2DD990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD98Cu;
            // 0x2dd990: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD994u; }
            if (ctx->pc != 0x2DD994u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD994u;
label_2dd994:
    // 0x2dd994: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2dd998:
    if (ctx->pc == 0x2DD998u) {
        ctx->pc = 0x2DD998u;
            // 0x2dd998: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2DD99Cu;
        goto label_2dd99c;
    }
    ctx->pc = 0x2DD994u;
    {
        const bool branch_taken_0x2dd994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD994u;
            // 0x2dd998: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd994) {
            ctx->pc = 0x2DDB54u;
            goto label_2ddb54;
        }
    }
    ctx->pc = 0x2DD99Cu;
label_2dd99c:
    // 0x2dd99c: 0x1200006c  beqz        $s0, . + 4 + (0x6C << 2)
label_2dd9a0:
    if (ctx->pc == 0x2DD9A0u) {
        ctx->pc = 0x2DD9A4u;
        goto label_2dd9a4;
    }
    ctx->pc = 0x2DD99Cu;
    {
        const bool branch_taken_0x2dd99c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd99c) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DD9A4u;
label_2dd9a4:
    // 0x2dd9a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd9a8:
    // 0x2dd9a8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2dd9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2dd9ac:
    // 0x2dd9ac: 0x320f809  jalr        $t9
label_2dd9b0:
    if (ctx->pc == 0x2DD9B0u) {
        ctx->pc = 0x2DD9B0u;
            // 0x2dd9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9B4u;
        goto label_2dd9b4;
    }
    ctx->pc = 0x2DD9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD9B4u);
        ctx->pc = 0x2DD9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9ACu;
            // 0x2dd9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD9B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD9B4u; }
            if (ctx->pc != 0x2DD9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD9B4u;
label_2dd9b4:
    // 0x2dd9b4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2dd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2dd9b8:
    // 0x2dd9b8: 0x14430065  bne         $v0, $v1, . + 4 + (0x65 << 2)
label_2dd9bc:
    if (ctx->pc == 0x2DD9BCu) {
        ctx->pc = 0x2DD9C0u;
        goto label_2dd9c0;
    }
    ctx->pc = 0x2DD9B8u;
    {
        const bool branch_taken_0x2dd9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd9b8) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DD9C0u;
label_2dd9c0:
    // 0x2dd9c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd9c4:
    // 0x2dd9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd9c8:
    // 0x2dd9c8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2dd9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2dd9cc:
    // 0x2dd9cc: 0x320f809  jalr        $t9
label_2dd9d0:
    if (ctx->pc == 0x2DD9D0u) {
        ctx->pc = 0x2DD9D0u;
            // 0x2dd9d0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2DD9D4u;
        goto label_2dd9d4;
    }
    ctx->pc = 0x2DD9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD9D4u);
        ctx->pc = 0x2DD9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9CCu;
            // 0x2dd9d0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD9D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD9D4u; }
            if (ctx->pc != 0x2DD9D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD9D4u;
label_2dd9d4:
    // 0x2dd9d4: 0x1000005e  b           . + 4 + (0x5E << 2)
label_2dd9d8:
    if (ctx->pc == 0x2DD9D8u) {
        ctx->pc = 0x2DD9DCu;
        goto label_2dd9dc;
    }
    ctx->pc = 0x2DD9D4u;
    {
        const bool branch_taken_0x2dd9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9d4) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DD9DCu;
label_2dd9dc:
    // 0x2dd9dc: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x2dd9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_2dd9e0:
    // 0x2dd9e0: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x2dd9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_2dd9e4:
    // 0x2dd9e4: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x2dd9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2dd9e8:
    // 0x2dd9e8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2dd9ec:
    if (ctx->pc == 0x2DD9ECu) {
        ctx->pc = 0x2DD9ECu;
            // 0x2dd9ec: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2DD9F0u;
        goto label_2dd9f0;
    }
    ctx->pc = 0x2DD9E8u;
    {
        const bool branch_taken_0x2dd9e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9E8u;
            // 0x2dd9ec: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9e8) {
            ctx->pc = 0x2DDA20u;
            goto label_2dda20;
        }
    }
    ctx->pc = 0x2DD9F0u;
label_2dd9f0:
    // 0x2dd9f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dd9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd9f4:
    // 0x2dd9f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2dd9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2dd9f8:
    // 0x2dd9f8: 0x320f809  jalr        $t9
label_2dd9fc:
    if (ctx->pc == 0x2DD9FCu) {
        ctx->pc = 0x2DD9FCu;
            // 0x2dd9fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA00u;
        goto label_2dda00;
    }
    ctx->pc = 0x2DD9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDA00u);
        ctx->pc = 0x2DD9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9F8u;
            // 0x2dd9fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDA00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA00u; }
            if (ctx->pc != 0x2DDA00u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDA00u;
label_2dda00:
    // 0x2dda00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dda00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dda04:
    // 0x2dda04: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2dda08:
    if (ctx->pc == 0x2DDA08u) {
        ctx->pc = 0x2DDA0Cu;
        goto label_2dda0c;
    }
    ctx->pc = 0x2DDA04u;
    {
        const bool branch_taken_0x2dda04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dda04) {
            ctx->pc = 0x2DDA20u;
            goto label_2dda20;
        }
    }
    ctx->pc = 0x2DDA0Cu;
label_2dda0c:
    // 0x2dda0c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dda0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dda10:
    // 0x2dda10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dda10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dda14:
    // 0x2dda14: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2dda14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2dda18:
    // 0x2dda18: 0x320f809  jalr        $t9
label_2dda1c:
    if (ctx->pc == 0x2DDA1Cu) {
        ctx->pc = 0x2DDA1Cu;
            // 0x2dda1c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2DDA20u;
        goto label_2dda20;
    }
    ctx->pc = 0x2DDA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDA20u);
        ctx->pc = 0x2DDA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDA18u;
            // 0x2dda1c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDA20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA20u; }
            if (ctx->pc != 0x2DDA20u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDA20u;
label_2dda20:
    // 0x2dda20: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
label_2dda24:
    if (ctx->pc == 0x2DDA24u) {
        ctx->pc = 0x2DDA28u;
        goto label_2dda28;
    }
    ctx->pc = 0x2DDA20u;
    {
        const bool branch_taken_0x2dda20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda20) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDA28u;
label_2dda28:
    // 0x2dda28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dda28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dda2c:
    // 0x2dda2c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2dda2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2dda30:
    // 0x2dda30: 0x320f809  jalr        $t9
label_2dda34:
    if (ctx->pc == 0x2DDA34u) {
        ctx->pc = 0x2DDA34u;
            // 0x2dda34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA38u;
        goto label_2dda38;
    }
    ctx->pc = 0x2DDA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDA38u);
        ctx->pc = 0x2DDA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDA30u;
            // 0x2dda34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDA38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA38u; }
            if (ctx->pc != 0x2DDA38u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDA38u;
label_2dda38:
    // 0x2dda38: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dda38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dda3c:
    // 0x2dda3c: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_2dda40:
    if (ctx->pc == 0x2DDA40u) {
        ctx->pc = 0x2DDA44u;
        goto label_2dda44;
    }
    ctx->pc = 0x2DDA3Cu;
    {
        const bool branch_taken_0x2dda3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dda3c) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDA44u;
label_2dda44:
    // 0x2dda44: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dda44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dda48:
    // 0x2dda48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dda48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dda4c:
    // 0x2dda4c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2dda4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2dda50:
    // 0x2dda50: 0x320f809  jalr        $t9
label_2dda54:
    if (ctx->pc == 0x2DDA54u) {
        ctx->pc = 0x2DDA54u;
            // 0x2dda54: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2DDA58u;
        goto label_2dda58;
    }
    ctx->pc = 0x2DDA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDA58u);
        ctx->pc = 0x2DDA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDA50u;
            // 0x2dda54: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDA58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA58u; }
            if (ctx->pc != 0x2DDA58u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDA58u;
label_2dda58:
    // 0x2dda58: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2dda5c:
    if (ctx->pc == 0x2DDA5Cu) {
        ctx->pc = 0x2DDA60u;
        goto label_2dda60;
    }
    ctx->pc = 0x2DDA58u;
    {
        const bool branch_taken_0x2dda58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda58) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDA60u;
label_2dda60:
    // 0x2dda60: 0x922305a9  lbu         $v1, 0x5A9($s1)
    ctx->pc = 0x2dda60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1449)));
label_2dda64:
    // 0x2dda64: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_2dda68:
    if (ctx->pc == 0x2DDA68u) {
        ctx->pc = 0x2DDA6Cu;
        goto label_2dda6c;
    }
    ctx->pc = 0x2DDA64u;
    {
        const bool branch_taken_0x2dda64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda64) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDA6Cu;
label_2dda6c:
    // 0x2dda6c: 0xc6200674  lwc1        $f0, 0x674($s1)
    ctx->pc = 0x2dda6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dda70:
    // 0x2dda70: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2dda70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_2dda74:
    // 0x2dda74: 0x2623062c  addiu       $v1, $s1, 0x62C
    ctx->pc = 0x2dda74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1580));
label_2dda78:
    // 0x2dda78: 0xe6200638  swc1        $f0, 0x638($s1)
    ctx->pc = 0x2dda78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1592), bits); }
label_2dda7c:
    // 0x2dda7c: 0xc6200678  lwc1        $f0, 0x678($s1)
    ctx->pc = 0x2dda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dda80:
    // 0x2dda80: 0xe620063c  swc1        $f0, 0x63C($s1)
    ctx->pc = 0x2dda80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1596), bits); }
label_2dda84:
    // 0x2dda84: 0xc620067c  lwc1        $f0, 0x67C($s1)
    ctx->pc = 0x2dda84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dda88:
    // 0x2dda88: 0xe6200640  swc1        $f0, 0x640($s1)
    ctx->pc = 0x2dda88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1600), bits); }
label_2dda8c:
    // 0x2dda8c: 0xc6200668  lwc1        $f0, 0x668($s1)
    ctx->pc = 0x2dda8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dda90:
    // 0x2dda90: 0xe620062c  swc1        $f0, 0x62C($s1)
    ctx->pc = 0x2dda90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1580), bits); }
label_2dda94:
    // 0x2dda94: 0xc620066c  lwc1        $f0, 0x66C($s1)
    ctx->pc = 0x2dda94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dda98:
    // 0x2dda98: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x2dda98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
label_2dda9c:
    // 0x2dda9c: 0xc6200670  lwc1        $f0, 0x670($s1)
    ctx->pc = 0x2dda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddaa0:
    // 0x2ddaa0: 0xe6200634  swc1        $f0, 0x634($s1)
    ctx->pc = 0x2ddaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1588), bits); }
label_2ddaa4:
    // 0x2ddaa4: 0xc6200680  lwc1        $f0, 0x680($s1)
    ctx->pc = 0x2ddaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddaa8:
    // 0x2ddaa8: 0xe6200644  swc1        $f0, 0x644($s1)
    ctx->pc = 0x2ddaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
label_2ddaac:
    // 0x2ddaac: 0x82250684  lb          $a1, 0x684($s1)
    ctx->pc = 0x2ddaacu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1668)));
label_2ddab0:
    // 0x2ddab0: 0xa2250648  sb          $a1, 0x648($s1)
    ctx->pc = 0x2ddab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 5));
label_2ddab4:
    // 0x2ddab4: 0x82250685  lb          $a1, 0x685($s1)
    ctx->pc = 0x2ddab4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1669)));
label_2ddab8:
    // 0x2ddab8: 0xa2250649  sb          $a1, 0x649($s1)
    ctx->pc = 0x2ddab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 5));
label_2ddabc:
    // 0x2ddabc: 0x82250686  lb          $a1, 0x686($s1)
    ctx->pc = 0x2ddabcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1670)));
label_2ddac0:
    // 0x2ddac0: 0xa225064a  sb          $a1, 0x64A($s1)
    ctx->pc = 0x2ddac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1610), (uint8_t)GPR_U32(ctx, 5));
label_2ddac4:
    // 0x2ddac4: 0x82250687  lb          $a1, 0x687($s1)
    ctx->pc = 0x2ddac4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1671)));
label_2ddac8:
    // 0x2ddac8: 0xa225064b  sb          $a1, 0x64B($s1)
    ctx->pc = 0x2ddac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1611), (uint8_t)GPR_U32(ctx, 5));
label_2ddacc:
    // 0x2ddacc: 0xc620068c  lwc1        $f0, 0x68C($s1)
    ctx->pc = 0x2ddaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddad0:
    // 0x2ddad0: 0xe6200650  swc1        $f0, 0x650($s1)
    ctx->pc = 0x2ddad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1616), bits); }
label_2ddad4:
    // 0x2ddad4: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2ddad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
label_2ddad8:
    // 0x2ddad8: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2ddad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_2ddadc:
    // 0x2ddadc: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x2ddadcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ddae0:
    // 0x2ddae0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2ddae4:
    if (ctx->pc == 0x2DDAE4u) {
        ctx->pc = 0x2DDAE4u;
            // 0x2ddae4: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2DDAE8u;
        goto label_2ddae8;
    }
    ctx->pc = 0x2DDAE0u;
    {
        const bool branch_taken_0x2ddae0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDAE0u;
            // 0x2ddae4: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddae0) {
            ctx->pc = 0x2DDB18u;
            goto label_2ddb18;
        }
    }
    ctx->pc = 0x2DDAE8u;
label_2ddae8:
    // 0x2ddae8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ddae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ddaec:
    // 0x2ddaec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2ddaecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2ddaf0:
    // 0x2ddaf0: 0x320f809  jalr        $t9
label_2ddaf4:
    if (ctx->pc == 0x2DDAF4u) {
        ctx->pc = 0x2DDAF4u;
            // 0x2ddaf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAF8u;
        goto label_2ddaf8;
    }
    ctx->pc = 0x2DDAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDAF8u);
        ctx->pc = 0x2DDAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDAF0u;
            // 0x2ddaf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDAF8u; }
            if (ctx->pc != 0x2DDAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDAF8u;
label_2ddaf8:
    // 0x2ddaf8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ddaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ddafc:
    // 0x2ddafc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2ddb00:
    if (ctx->pc == 0x2DDB00u) {
        ctx->pc = 0x2DDB04u;
        goto label_2ddb04;
    }
    ctx->pc = 0x2DDAFCu;
    {
        const bool branch_taken_0x2ddafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddafc) {
            ctx->pc = 0x2DDB18u;
            goto label_2ddb18;
        }
    }
    ctx->pc = 0x2DDB04u;
label_2ddb04:
    // 0x2ddb04: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ddb04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ddb08:
    // 0x2ddb08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ddb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ddb0c:
    // 0x2ddb0c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ddb0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ddb10:
    // 0x2ddb10: 0x320f809  jalr        $t9
label_2ddb14:
    if (ctx->pc == 0x2DDB14u) {
        ctx->pc = 0x2DDB14u;
            // 0x2ddb14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DDB18u;
        goto label_2ddb18;
    }
    ctx->pc = 0x2DDB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDB18u);
        ctx->pc = 0x2DDB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB10u;
            // 0x2ddb14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDB18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDB18u; }
            if (ctx->pc != 0x2DDB18u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDB18u;
label_2ddb18:
    // 0x2ddb18: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2ddb1c:
    if (ctx->pc == 0x2DDB1Cu) {
        ctx->pc = 0x2DDB20u;
        goto label_2ddb20;
    }
    ctx->pc = 0x2DDB18u;
    {
        const bool branch_taken_0x2ddb18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb18) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDB20u;
label_2ddb20:
    // 0x2ddb20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ddb20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ddb24:
    // 0x2ddb24: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2ddb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2ddb28:
    // 0x2ddb28: 0x320f809  jalr        $t9
label_2ddb2c:
    if (ctx->pc == 0x2DDB2Cu) {
        ctx->pc = 0x2DDB2Cu;
            // 0x2ddb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB30u;
        goto label_2ddb30;
    }
    ctx->pc = 0x2DDB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDB30u);
        ctx->pc = 0x2DDB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB28u;
            // 0x2ddb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDB30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDB30u; }
            if (ctx->pc != 0x2DDB30u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDB30u;
label_2ddb30:
    // 0x2ddb30: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ddb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ddb34:
    // 0x2ddb34: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2ddb38:
    if (ctx->pc == 0x2DDB38u) {
        ctx->pc = 0x2DDB3Cu;
        goto label_2ddb3c;
    }
    ctx->pc = 0x2DDB34u;
    {
        const bool branch_taken_0x2ddb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddb34) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDB3Cu;
label_2ddb3c:
    // 0x2ddb3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ddb3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ddb40:
    // 0x2ddb40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ddb44:
    // 0x2ddb44: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ddb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ddb48:
    // 0x2ddb48: 0x320f809  jalr        $t9
label_2ddb4c:
    if (ctx->pc == 0x2DDB4Cu) {
        ctx->pc = 0x2DDB4Cu;
            // 0x2ddb4c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DDB50u;
        goto label_2ddb50;
    }
    ctx->pc = 0x2DDB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DDB50u);
        ctx->pc = 0x2DDB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB48u;
            // 0x2ddb4c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DDB50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DDB50u; }
            if (ctx->pc != 0x2DDB50u) { return; }
        }
        }
    }
    ctx->pc = 0x2DDB50u;
label_2ddb50:
    // 0x2ddb50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ddb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ddb54:
    // 0x2ddb54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ddb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ddb58:
    // 0x2ddb58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ddb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ddb5c:
    // 0x2ddb5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ddb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ddb60:
    // 0x2ddb60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ddb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ddb64:
    // 0x2ddb64: 0x3e00008  jr          $ra
label_2ddb68:
    if (ctx->pc == 0x2DDB68u) {
        ctx->pc = 0x2DDB68u;
            // 0x2ddb68: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x2DDB6Cu;
        goto label_2ddb6c;
    }
    ctx->pc = 0x2DDB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB64u;
            // 0x2ddb68: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DDB6Cu;
label_2ddb6c:
    // 0x2ddb6c: 0x0  nop
    ctx->pc = 0x2ddb6cu;
    // NOP
}
