#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AAFE0
// Address: 0x4aafe0 - 0x4ab9a0
void sub_004AAFE0_0x4aafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAFE0_0x4aafe0");
#endif

    switch (ctx->pc) {
        case 0x4aafe0u: goto label_4aafe0;
        case 0x4aafe4u: goto label_4aafe4;
        case 0x4aafe8u: goto label_4aafe8;
        case 0x4aafecu: goto label_4aafec;
        case 0x4aaff0u: goto label_4aaff0;
        case 0x4aaff4u: goto label_4aaff4;
        case 0x4aaff8u: goto label_4aaff8;
        case 0x4aaffcu: goto label_4aaffc;
        case 0x4ab000u: goto label_4ab000;
        case 0x4ab004u: goto label_4ab004;
        case 0x4ab008u: goto label_4ab008;
        case 0x4ab00cu: goto label_4ab00c;
        case 0x4ab010u: goto label_4ab010;
        case 0x4ab014u: goto label_4ab014;
        case 0x4ab018u: goto label_4ab018;
        case 0x4ab01cu: goto label_4ab01c;
        case 0x4ab020u: goto label_4ab020;
        case 0x4ab024u: goto label_4ab024;
        case 0x4ab028u: goto label_4ab028;
        case 0x4ab02cu: goto label_4ab02c;
        case 0x4ab030u: goto label_4ab030;
        case 0x4ab034u: goto label_4ab034;
        case 0x4ab038u: goto label_4ab038;
        case 0x4ab03cu: goto label_4ab03c;
        case 0x4ab040u: goto label_4ab040;
        case 0x4ab044u: goto label_4ab044;
        case 0x4ab048u: goto label_4ab048;
        case 0x4ab04cu: goto label_4ab04c;
        case 0x4ab050u: goto label_4ab050;
        case 0x4ab054u: goto label_4ab054;
        case 0x4ab058u: goto label_4ab058;
        case 0x4ab05cu: goto label_4ab05c;
        case 0x4ab060u: goto label_4ab060;
        case 0x4ab064u: goto label_4ab064;
        case 0x4ab068u: goto label_4ab068;
        case 0x4ab06cu: goto label_4ab06c;
        case 0x4ab070u: goto label_4ab070;
        case 0x4ab074u: goto label_4ab074;
        case 0x4ab078u: goto label_4ab078;
        case 0x4ab07cu: goto label_4ab07c;
        case 0x4ab080u: goto label_4ab080;
        case 0x4ab084u: goto label_4ab084;
        case 0x4ab088u: goto label_4ab088;
        case 0x4ab08cu: goto label_4ab08c;
        case 0x4ab090u: goto label_4ab090;
        case 0x4ab094u: goto label_4ab094;
        case 0x4ab098u: goto label_4ab098;
        case 0x4ab09cu: goto label_4ab09c;
        case 0x4ab0a0u: goto label_4ab0a0;
        case 0x4ab0a4u: goto label_4ab0a4;
        case 0x4ab0a8u: goto label_4ab0a8;
        case 0x4ab0acu: goto label_4ab0ac;
        case 0x4ab0b0u: goto label_4ab0b0;
        case 0x4ab0b4u: goto label_4ab0b4;
        case 0x4ab0b8u: goto label_4ab0b8;
        case 0x4ab0bcu: goto label_4ab0bc;
        case 0x4ab0c0u: goto label_4ab0c0;
        case 0x4ab0c4u: goto label_4ab0c4;
        case 0x4ab0c8u: goto label_4ab0c8;
        case 0x4ab0ccu: goto label_4ab0cc;
        case 0x4ab0d0u: goto label_4ab0d0;
        case 0x4ab0d4u: goto label_4ab0d4;
        case 0x4ab0d8u: goto label_4ab0d8;
        case 0x4ab0dcu: goto label_4ab0dc;
        case 0x4ab0e0u: goto label_4ab0e0;
        case 0x4ab0e4u: goto label_4ab0e4;
        case 0x4ab0e8u: goto label_4ab0e8;
        case 0x4ab0ecu: goto label_4ab0ec;
        case 0x4ab0f0u: goto label_4ab0f0;
        case 0x4ab0f4u: goto label_4ab0f4;
        case 0x4ab0f8u: goto label_4ab0f8;
        case 0x4ab0fcu: goto label_4ab0fc;
        case 0x4ab100u: goto label_4ab100;
        case 0x4ab104u: goto label_4ab104;
        case 0x4ab108u: goto label_4ab108;
        case 0x4ab10cu: goto label_4ab10c;
        case 0x4ab110u: goto label_4ab110;
        case 0x4ab114u: goto label_4ab114;
        case 0x4ab118u: goto label_4ab118;
        case 0x4ab11cu: goto label_4ab11c;
        case 0x4ab120u: goto label_4ab120;
        case 0x4ab124u: goto label_4ab124;
        case 0x4ab128u: goto label_4ab128;
        case 0x4ab12cu: goto label_4ab12c;
        case 0x4ab130u: goto label_4ab130;
        case 0x4ab134u: goto label_4ab134;
        case 0x4ab138u: goto label_4ab138;
        case 0x4ab13cu: goto label_4ab13c;
        case 0x4ab140u: goto label_4ab140;
        case 0x4ab144u: goto label_4ab144;
        case 0x4ab148u: goto label_4ab148;
        case 0x4ab14cu: goto label_4ab14c;
        case 0x4ab150u: goto label_4ab150;
        case 0x4ab154u: goto label_4ab154;
        case 0x4ab158u: goto label_4ab158;
        case 0x4ab15cu: goto label_4ab15c;
        case 0x4ab160u: goto label_4ab160;
        case 0x4ab164u: goto label_4ab164;
        case 0x4ab168u: goto label_4ab168;
        case 0x4ab16cu: goto label_4ab16c;
        case 0x4ab170u: goto label_4ab170;
        case 0x4ab174u: goto label_4ab174;
        case 0x4ab178u: goto label_4ab178;
        case 0x4ab17cu: goto label_4ab17c;
        case 0x4ab180u: goto label_4ab180;
        case 0x4ab184u: goto label_4ab184;
        case 0x4ab188u: goto label_4ab188;
        case 0x4ab18cu: goto label_4ab18c;
        case 0x4ab190u: goto label_4ab190;
        case 0x4ab194u: goto label_4ab194;
        case 0x4ab198u: goto label_4ab198;
        case 0x4ab19cu: goto label_4ab19c;
        case 0x4ab1a0u: goto label_4ab1a0;
        case 0x4ab1a4u: goto label_4ab1a4;
        case 0x4ab1a8u: goto label_4ab1a8;
        case 0x4ab1acu: goto label_4ab1ac;
        case 0x4ab1b0u: goto label_4ab1b0;
        case 0x4ab1b4u: goto label_4ab1b4;
        case 0x4ab1b8u: goto label_4ab1b8;
        case 0x4ab1bcu: goto label_4ab1bc;
        case 0x4ab1c0u: goto label_4ab1c0;
        case 0x4ab1c4u: goto label_4ab1c4;
        case 0x4ab1c8u: goto label_4ab1c8;
        case 0x4ab1ccu: goto label_4ab1cc;
        case 0x4ab1d0u: goto label_4ab1d0;
        case 0x4ab1d4u: goto label_4ab1d4;
        case 0x4ab1d8u: goto label_4ab1d8;
        case 0x4ab1dcu: goto label_4ab1dc;
        case 0x4ab1e0u: goto label_4ab1e0;
        case 0x4ab1e4u: goto label_4ab1e4;
        case 0x4ab1e8u: goto label_4ab1e8;
        case 0x4ab1ecu: goto label_4ab1ec;
        case 0x4ab1f0u: goto label_4ab1f0;
        case 0x4ab1f4u: goto label_4ab1f4;
        case 0x4ab1f8u: goto label_4ab1f8;
        case 0x4ab1fcu: goto label_4ab1fc;
        case 0x4ab200u: goto label_4ab200;
        case 0x4ab204u: goto label_4ab204;
        case 0x4ab208u: goto label_4ab208;
        case 0x4ab20cu: goto label_4ab20c;
        case 0x4ab210u: goto label_4ab210;
        case 0x4ab214u: goto label_4ab214;
        case 0x4ab218u: goto label_4ab218;
        case 0x4ab21cu: goto label_4ab21c;
        case 0x4ab220u: goto label_4ab220;
        case 0x4ab224u: goto label_4ab224;
        case 0x4ab228u: goto label_4ab228;
        case 0x4ab22cu: goto label_4ab22c;
        case 0x4ab230u: goto label_4ab230;
        case 0x4ab234u: goto label_4ab234;
        case 0x4ab238u: goto label_4ab238;
        case 0x4ab23cu: goto label_4ab23c;
        case 0x4ab240u: goto label_4ab240;
        case 0x4ab244u: goto label_4ab244;
        case 0x4ab248u: goto label_4ab248;
        case 0x4ab24cu: goto label_4ab24c;
        case 0x4ab250u: goto label_4ab250;
        case 0x4ab254u: goto label_4ab254;
        case 0x4ab258u: goto label_4ab258;
        case 0x4ab25cu: goto label_4ab25c;
        case 0x4ab260u: goto label_4ab260;
        case 0x4ab264u: goto label_4ab264;
        case 0x4ab268u: goto label_4ab268;
        case 0x4ab26cu: goto label_4ab26c;
        case 0x4ab270u: goto label_4ab270;
        case 0x4ab274u: goto label_4ab274;
        case 0x4ab278u: goto label_4ab278;
        case 0x4ab27cu: goto label_4ab27c;
        case 0x4ab280u: goto label_4ab280;
        case 0x4ab284u: goto label_4ab284;
        case 0x4ab288u: goto label_4ab288;
        case 0x4ab28cu: goto label_4ab28c;
        case 0x4ab290u: goto label_4ab290;
        case 0x4ab294u: goto label_4ab294;
        case 0x4ab298u: goto label_4ab298;
        case 0x4ab29cu: goto label_4ab29c;
        case 0x4ab2a0u: goto label_4ab2a0;
        case 0x4ab2a4u: goto label_4ab2a4;
        case 0x4ab2a8u: goto label_4ab2a8;
        case 0x4ab2acu: goto label_4ab2ac;
        case 0x4ab2b0u: goto label_4ab2b0;
        case 0x4ab2b4u: goto label_4ab2b4;
        case 0x4ab2b8u: goto label_4ab2b8;
        case 0x4ab2bcu: goto label_4ab2bc;
        case 0x4ab2c0u: goto label_4ab2c0;
        case 0x4ab2c4u: goto label_4ab2c4;
        case 0x4ab2c8u: goto label_4ab2c8;
        case 0x4ab2ccu: goto label_4ab2cc;
        case 0x4ab2d0u: goto label_4ab2d0;
        case 0x4ab2d4u: goto label_4ab2d4;
        case 0x4ab2d8u: goto label_4ab2d8;
        case 0x4ab2dcu: goto label_4ab2dc;
        case 0x4ab2e0u: goto label_4ab2e0;
        case 0x4ab2e4u: goto label_4ab2e4;
        case 0x4ab2e8u: goto label_4ab2e8;
        case 0x4ab2ecu: goto label_4ab2ec;
        case 0x4ab2f0u: goto label_4ab2f0;
        case 0x4ab2f4u: goto label_4ab2f4;
        case 0x4ab2f8u: goto label_4ab2f8;
        case 0x4ab2fcu: goto label_4ab2fc;
        case 0x4ab300u: goto label_4ab300;
        case 0x4ab304u: goto label_4ab304;
        case 0x4ab308u: goto label_4ab308;
        case 0x4ab30cu: goto label_4ab30c;
        case 0x4ab310u: goto label_4ab310;
        case 0x4ab314u: goto label_4ab314;
        case 0x4ab318u: goto label_4ab318;
        case 0x4ab31cu: goto label_4ab31c;
        case 0x4ab320u: goto label_4ab320;
        case 0x4ab324u: goto label_4ab324;
        case 0x4ab328u: goto label_4ab328;
        case 0x4ab32cu: goto label_4ab32c;
        case 0x4ab330u: goto label_4ab330;
        case 0x4ab334u: goto label_4ab334;
        case 0x4ab338u: goto label_4ab338;
        case 0x4ab33cu: goto label_4ab33c;
        case 0x4ab340u: goto label_4ab340;
        case 0x4ab344u: goto label_4ab344;
        case 0x4ab348u: goto label_4ab348;
        case 0x4ab34cu: goto label_4ab34c;
        case 0x4ab350u: goto label_4ab350;
        case 0x4ab354u: goto label_4ab354;
        case 0x4ab358u: goto label_4ab358;
        case 0x4ab35cu: goto label_4ab35c;
        case 0x4ab360u: goto label_4ab360;
        case 0x4ab364u: goto label_4ab364;
        case 0x4ab368u: goto label_4ab368;
        case 0x4ab36cu: goto label_4ab36c;
        case 0x4ab370u: goto label_4ab370;
        case 0x4ab374u: goto label_4ab374;
        case 0x4ab378u: goto label_4ab378;
        case 0x4ab37cu: goto label_4ab37c;
        case 0x4ab380u: goto label_4ab380;
        case 0x4ab384u: goto label_4ab384;
        case 0x4ab388u: goto label_4ab388;
        case 0x4ab38cu: goto label_4ab38c;
        case 0x4ab390u: goto label_4ab390;
        case 0x4ab394u: goto label_4ab394;
        case 0x4ab398u: goto label_4ab398;
        case 0x4ab39cu: goto label_4ab39c;
        case 0x4ab3a0u: goto label_4ab3a0;
        case 0x4ab3a4u: goto label_4ab3a4;
        case 0x4ab3a8u: goto label_4ab3a8;
        case 0x4ab3acu: goto label_4ab3ac;
        case 0x4ab3b0u: goto label_4ab3b0;
        case 0x4ab3b4u: goto label_4ab3b4;
        case 0x4ab3b8u: goto label_4ab3b8;
        case 0x4ab3bcu: goto label_4ab3bc;
        case 0x4ab3c0u: goto label_4ab3c0;
        case 0x4ab3c4u: goto label_4ab3c4;
        case 0x4ab3c8u: goto label_4ab3c8;
        case 0x4ab3ccu: goto label_4ab3cc;
        case 0x4ab3d0u: goto label_4ab3d0;
        case 0x4ab3d4u: goto label_4ab3d4;
        case 0x4ab3d8u: goto label_4ab3d8;
        case 0x4ab3dcu: goto label_4ab3dc;
        case 0x4ab3e0u: goto label_4ab3e0;
        case 0x4ab3e4u: goto label_4ab3e4;
        case 0x4ab3e8u: goto label_4ab3e8;
        case 0x4ab3ecu: goto label_4ab3ec;
        case 0x4ab3f0u: goto label_4ab3f0;
        case 0x4ab3f4u: goto label_4ab3f4;
        case 0x4ab3f8u: goto label_4ab3f8;
        case 0x4ab3fcu: goto label_4ab3fc;
        case 0x4ab400u: goto label_4ab400;
        case 0x4ab404u: goto label_4ab404;
        case 0x4ab408u: goto label_4ab408;
        case 0x4ab40cu: goto label_4ab40c;
        case 0x4ab410u: goto label_4ab410;
        case 0x4ab414u: goto label_4ab414;
        case 0x4ab418u: goto label_4ab418;
        case 0x4ab41cu: goto label_4ab41c;
        case 0x4ab420u: goto label_4ab420;
        case 0x4ab424u: goto label_4ab424;
        case 0x4ab428u: goto label_4ab428;
        case 0x4ab42cu: goto label_4ab42c;
        case 0x4ab430u: goto label_4ab430;
        case 0x4ab434u: goto label_4ab434;
        case 0x4ab438u: goto label_4ab438;
        case 0x4ab43cu: goto label_4ab43c;
        case 0x4ab440u: goto label_4ab440;
        case 0x4ab444u: goto label_4ab444;
        case 0x4ab448u: goto label_4ab448;
        case 0x4ab44cu: goto label_4ab44c;
        case 0x4ab450u: goto label_4ab450;
        case 0x4ab454u: goto label_4ab454;
        case 0x4ab458u: goto label_4ab458;
        case 0x4ab45cu: goto label_4ab45c;
        case 0x4ab460u: goto label_4ab460;
        case 0x4ab464u: goto label_4ab464;
        case 0x4ab468u: goto label_4ab468;
        case 0x4ab46cu: goto label_4ab46c;
        case 0x4ab470u: goto label_4ab470;
        case 0x4ab474u: goto label_4ab474;
        case 0x4ab478u: goto label_4ab478;
        case 0x4ab47cu: goto label_4ab47c;
        case 0x4ab480u: goto label_4ab480;
        case 0x4ab484u: goto label_4ab484;
        case 0x4ab488u: goto label_4ab488;
        case 0x4ab48cu: goto label_4ab48c;
        case 0x4ab490u: goto label_4ab490;
        case 0x4ab494u: goto label_4ab494;
        case 0x4ab498u: goto label_4ab498;
        case 0x4ab49cu: goto label_4ab49c;
        case 0x4ab4a0u: goto label_4ab4a0;
        case 0x4ab4a4u: goto label_4ab4a4;
        case 0x4ab4a8u: goto label_4ab4a8;
        case 0x4ab4acu: goto label_4ab4ac;
        case 0x4ab4b0u: goto label_4ab4b0;
        case 0x4ab4b4u: goto label_4ab4b4;
        case 0x4ab4b8u: goto label_4ab4b8;
        case 0x4ab4bcu: goto label_4ab4bc;
        case 0x4ab4c0u: goto label_4ab4c0;
        case 0x4ab4c4u: goto label_4ab4c4;
        case 0x4ab4c8u: goto label_4ab4c8;
        case 0x4ab4ccu: goto label_4ab4cc;
        case 0x4ab4d0u: goto label_4ab4d0;
        case 0x4ab4d4u: goto label_4ab4d4;
        case 0x4ab4d8u: goto label_4ab4d8;
        case 0x4ab4dcu: goto label_4ab4dc;
        case 0x4ab4e0u: goto label_4ab4e0;
        case 0x4ab4e4u: goto label_4ab4e4;
        case 0x4ab4e8u: goto label_4ab4e8;
        case 0x4ab4ecu: goto label_4ab4ec;
        case 0x4ab4f0u: goto label_4ab4f0;
        case 0x4ab4f4u: goto label_4ab4f4;
        case 0x4ab4f8u: goto label_4ab4f8;
        case 0x4ab4fcu: goto label_4ab4fc;
        case 0x4ab500u: goto label_4ab500;
        case 0x4ab504u: goto label_4ab504;
        case 0x4ab508u: goto label_4ab508;
        case 0x4ab50cu: goto label_4ab50c;
        case 0x4ab510u: goto label_4ab510;
        case 0x4ab514u: goto label_4ab514;
        case 0x4ab518u: goto label_4ab518;
        case 0x4ab51cu: goto label_4ab51c;
        case 0x4ab520u: goto label_4ab520;
        case 0x4ab524u: goto label_4ab524;
        case 0x4ab528u: goto label_4ab528;
        case 0x4ab52cu: goto label_4ab52c;
        case 0x4ab530u: goto label_4ab530;
        case 0x4ab534u: goto label_4ab534;
        case 0x4ab538u: goto label_4ab538;
        case 0x4ab53cu: goto label_4ab53c;
        case 0x4ab540u: goto label_4ab540;
        case 0x4ab544u: goto label_4ab544;
        case 0x4ab548u: goto label_4ab548;
        case 0x4ab54cu: goto label_4ab54c;
        case 0x4ab550u: goto label_4ab550;
        case 0x4ab554u: goto label_4ab554;
        case 0x4ab558u: goto label_4ab558;
        case 0x4ab55cu: goto label_4ab55c;
        case 0x4ab560u: goto label_4ab560;
        case 0x4ab564u: goto label_4ab564;
        case 0x4ab568u: goto label_4ab568;
        case 0x4ab56cu: goto label_4ab56c;
        case 0x4ab570u: goto label_4ab570;
        case 0x4ab574u: goto label_4ab574;
        case 0x4ab578u: goto label_4ab578;
        case 0x4ab57cu: goto label_4ab57c;
        case 0x4ab580u: goto label_4ab580;
        case 0x4ab584u: goto label_4ab584;
        case 0x4ab588u: goto label_4ab588;
        case 0x4ab58cu: goto label_4ab58c;
        case 0x4ab590u: goto label_4ab590;
        case 0x4ab594u: goto label_4ab594;
        case 0x4ab598u: goto label_4ab598;
        case 0x4ab59cu: goto label_4ab59c;
        case 0x4ab5a0u: goto label_4ab5a0;
        case 0x4ab5a4u: goto label_4ab5a4;
        case 0x4ab5a8u: goto label_4ab5a8;
        case 0x4ab5acu: goto label_4ab5ac;
        case 0x4ab5b0u: goto label_4ab5b0;
        case 0x4ab5b4u: goto label_4ab5b4;
        case 0x4ab5b8u: goto label_4ab5b8;
        case 0x4ab5bcu: goto label_4ab5bc;
        case 0x4ab5c0u: goto label_4ab5c0;
        case 0x4ab5c4u: goto label_4ab5c4;
        case 0x4ab5c8u: goto label_4ab5c8;
        case 0x4ab5ccu: goto label_4ab5cc;
        case 0x4ab5d0u: goto label_4ab5d0;
        case 0x4ab5d4u: goto label_4ab5d4;
        case 0x4ab5d8u: goto label_4ab5d8;
        case 0x4ab5dcu: goto label_4ab5dc;
        case 0x4ab5e0u: goto label_4ab5e0;
        case 0x4ab5e4u: goto label_4ab5e4;
        case 0x4ab5e8u: goto label_4ab5e8;
        case 0x4ab5ecu: goto label_4ab5ec;
        case 0x4ab5f0u: goto label_4ab5f0;
        case 0x4ab5f4u: goto label_4ab5f4;
        case 0x4ab5f8u: goto label_4ab5f8;
        case 0x4ab5fcu: goto label_4ab5fc;
        case 0x4ab600u: goto label_4ab600;
        case 0x4ab604u: goto label_4ab604;
        case 0x4ab608u: goto label_4ab608;
        case 0x4ab60cu: goto label_4ab60c;
        case 0x4ab610u: goto label_4ab610;
        case 0x4ab614u: goto label_4ab614;
        case 0x4ab618u: goto label_4ab618;
        case 0x4ab61cu: goto label_4ab61c;
        case 0x4ab620u: goto label_4ab620;
        case 0x4ab624u: goto label_4ab624;
        case 0x4ab628u: goto label_4ab628;
        case 0x4ab62cu: goto label_4ab62c;
        case 0x4ab630u: goto label_4ab630;
        case 0x4ab634u: goto label_4ab634;
        case 0x4ab638u: goto label_4ab638;
        case 0x4ab63cu: goto label_4ab63c;
        case 0x4ab640u: goto label_4ab640;
        case 0x4ab644u: goto label_4ab644;
        case 0x4ab648u: goto label_4ab648;
        case 0x4ab64cu: goto label_4ab64c;
        case 0x4ab650u: goto label_4ab650;
        case 0x4ab654u: goto label_4ab654;
        case 0x4ab658u: goto label_4ab658;
        case 0x4ab65cu: goto label_4ab65c;
        case 0x4ab660u: goto label_4ab660;
        case 0x4ab664u: goto label_4ab664;
        case 0x4ab668u: goto label_4ab668;
        case 0x4ab66cu: goto label_4ab66c;
        case 0x4ab670u: goto label_4ab670;
        case 0x4ab674u: goto label_4ab674;
        case 0x4ab678u: goto label_4ab678;
        case 0x4ab67cu: goto label_4ab67c;
        case 0x4ab680u: goto label_4ab680;
        case 0x4ab684u: goto label_4ab684;
        case 0x4ab688u: goto label_4ab688;
        case 0x4ab68cu: goto label_4ab68c;
        case 0x4ab690u: goto label_4ab690;
        case 0x4ab694u: goto label_4ab694;
        case 0x4ab698u: goto label_4ab698;
        case 0x4ab69cu: goto label_4ab69c;
        case 0x4ab6a0u: goto label_4ab6a0;
        case 0x4ab6a4u: goto label_4ab6a4;
        case 0x4ab6a8u: goto label_4ab6a8;
        case 0x4ab6acu: goto label_4ab6ac;
        case 0x4ab6b0u: goto label_4ab6b0;
        case 0x4ab6b4u: goto label_4ab6b4;
        case 0x4ab6b8u: goto label_4ab6b8;
        case 0x4ab6bcu: goto label_4ab6bc;
        case 0x4ab6c0u: goto label_4ab6c0;
        case 0x4ab6c4u: goto label_4ab6c4;
        case 0x4ab6c8u: goto label_4ab6c8;
        case 0x4ab6ccu: goto label_4ab6cc;
        case 0x4ab6d0u: goto label_4ab6d0;
        case 0x4ab6d4u: goto label_4ab6d4;
        case 0x4ab6d8u: goto label_4ab6d8;
        case 0x4ab6dcu: goto label_4ab6dc;
        case 0x4ab6e0u: goto label_4ab6e0;
        case 0x4ab6e4u: goto label_4ab6e4;
        case 0x4ab6e8u: goto label_4ab6e8;
        case 0x4ab6ecu: goto label_4ab6ec;
        case 0x4ab6f0u: goto label_4ab6f0;
        case 0x4ab6f4u: goto label_4ab6f4;
        case 0x4ab6f8u: goto label_4ab6f8;
        case 0x4ab6fcu: goto label_4ab6fc;
        case 0x4ab700u: goto label_4ab700;
        case 0x4ab704u: goto label_4ab704;
        case 0x4ab708u: goto label_4ab708;
        case 0x4ab70cu: goto label_4ab70c;
        case 0x4ab710u: goto label_4ab710;
        case 0x4ab714u: goto label_4ab714;
        case 0x4ab718u: goto label_4ab718;
        case 0x4ab71cu: goto label_4ab71c;
        case 0x4ab720u: goto label_4ab720;
        case 0x4ab724u: goto label_4ab724;
        case 0x4ab728u: goto label_4ab728;
        case 0x4ab72cu: goto label_4ab72c;
        case 0x4ab730u: goto label_4ab730;
        case 0x4ab734u: goto label_4ab734;
        case 0x4ab738u: goto label_4ab738;
        case 0x4ab73cu: goto label_4ab73c;
        case 0x4ab740u: goto label_4ab740;
        case 0x4ab744u: goto label_4ab744;
        case 0x4ab748u: goto label_4ab748;
        case 0x4ab74cu: goto label_4ab74c;
        case 0x4ab750u: goto label_4ab750;
        case 0x4ab754u: goto label_4ab754;
        case 0x4ab758u: goto label_4ab758;
        case 0x4ab75cu: goto label_4ab75c;
        case 0x4ab760u: goto label_4ab760;
        case 0x4ab764u: goto label_4ab764;
        case 0x4ab768u: goto label_4ab768;
        case 0x4ab76cu: goto label_4ab76c;
        case 0x4ab770u: goto label_4ab770;
        case 0x4ab774u: goto label_4ab774;
        case 0x4ab778u: goto label_4ab778;
        case 0x4ab77cu: goto label_4ab77c;
        case 0x4ab780u: goto label_4ab780;
        case 0x4ab784u: goto label_4ab784;
        case 0x4ab788u: goto label_4ab788;
        case 0x4ab78cu: goto label_4ab78c;
        case 0x4ab790u: goto label_4ab790;
        case 0x4ab794u: goto label_4ab794;
        case 0x4ab798u: goto label_4ab798;
        case 0x4ab79cu: goto label_4ab79c;
        case 0x4ab7a0u: goto label_4ab7a0;
        case 0x4ab7a4u: goto label_4ab7a4;
        case 0x4ab7a8u: goto label_4ab7a8;
        case 0x4ab7acu: goto label_4ab7ac;
        case 0x4ab7b0u: goto label_4ab7b0;
        case 0x4ab7b4u: goto label_4ab7b4;
        case 0x4ab7b8u: goto label_4ab7b8;
        case 0x4ab7bcu: goto label_4ab7bc;
        case 0x4ab7c0u: goto label_4ab7c0;
        case 0x4ab7c4u: goto label_4ab7c4;
        case 0x4ab7c8u: goto label_4ab7c8;
        case 0x4ab7ccu: goto label_4ab7cc;
        case 0x4ab7d0u: goto label_4ab7d0;
        case 0x4ab7d4u: goto label_4ab7d4;
        case 0x4ab7d8u: goto label_4ab7d8;
        case 0x4ab7dcu: goto label_4ab7dc;
        case 0x4ab7e0u: goto label_4ab7e0;
        case 0x4ab7e4u: goto label_4ab7e4;
        case 0x4ab7e8u: goto label_4ab7e8;
        case 0x4ab7ecu: goto label_4ab7ec;
        case 0x4ab7f0u: goto label_4ab7f0;
        case 0x4ab7f4u: goto label_4ab7f4;
        case 0x4ab7f8u: goto label_4ab7f8;
        case 0x4ab7fcu: goto label_4ab7fc;
        case 0x4ab800u: goto label_4ab800;
        case 0x4ab804u: goto label_4ab804;
        case 0x4ab808u: goto label_4ab808;
        case 0x4ab80cu: goto label_4ab80c;
        case 0x4ab810u: goto label_4ab810;
        case 0x4ab814u: goto label_4ab814;
        case 0x4ab818u: goto label_4ab818;
        case 0x4ab81cu: goto label_4ab81c;
        case 0x4ab820u: goto label_4ab820;
        case 0x4ab824u: goto label_4ab824;
        case 0x4ab828u: goto label_4ab828;
        case 0x4ab82cu: goto label_4ab82c;
        case 0x4ab830u: goto label_4ab830;
        case 0x4ab834u: goto label_4ab834;
        case 0x4ab838u: goto label_4ab838;
        case 0x4ab83cu: goto label_4ab83c;
        case 0x4ab840u: goto label_4ab840;
        case 0x4ab844u: goto label_4ab844;
        case 0x4ab848u: goto label_4ab848;
        case 0x4ab84cu: goto label_4ab84c;
        case 0x4ab850u: goto label_4ab850;
        case 0x4ab854u: goto label_4ab854;
        case 0x4ab858u: goto label_4ab858;
        case 0x4ab85cu: goto label_4ab85c;
        case 0x4ab860u: goto label_4ab860;
        case 0x4ab864u: goto label_4ab864;
        case 0x4ab868u: goto label_4ab868;
        case 0x4ab86cu: goto label_4ab86c;
        case 0x4ab870u: goto label_4ab870;
        case 0x4ab874u: goto label_4ab874;
        case 0x4ab878u: goto label_4ab878;
        case 0x4ab87cu: goto label_4ab87c;
        case 0x4ab880u: goto label_4ab880;
        case 0x4ab884u: goto label_4ab884;
        case 0x4ab888u: goto label_4ab888;
        case 0x4ab88cu: goto label_4ab88c;
        case 0x4ab890u: goto label_4ab890;
        case 0x4ab894u: goto label_4ab894;
        case 0x4ab898u: goto label_4ab898;
        case 0x4ab89cu: goto label_4ab89c;
        case 0x4ab8a0u: goto label_4ab8a0;
        case 0x4ab8a4u: goto label_4ab8a4;
        case 0x4ab8a8u: goto label_4ab8a8;
        case 0x4ab8acu: goto label_4ab8ac;
        case 0x4ab8b0u: goto label_4ab8b0;
        case 0x4ab8b4u: goto label_4ab8b4;
        case 0x4ab8b8u: goto label_4ab8b8;
        case 0x4ab8bcu: goto label_4ab8bc;
        case 0x4ab8c0u: goto label_4ab8c0;
        case 0x4ab8c4u: goto label_4ab8c4;
        case 0x4ab8c8u: goto label_4ab8c8;
        case 0x4ab8ccu: goto label_4ab8cc;
        case 0x4ab8d0u: goto label_4ab8d0;
        case 0x4ab8d4u: goto label_4ab8d4;
        case 0x4ab8d8u: goto label_4ab8d8;
        case 0x4ab8dcu: goto label_4ab8dc;
        case 0x4ab8e0u: goto label_4ab8e0;
        case 0x4ab8e4u: goto label_4ab8e4;
        case 0x4ab8e8u: goto label_4ab8e8;
        case 0x4ab8ecu: goto label_4ab8ec;
        case 0x4ab8f0u: goto label_4ab8f0;
        case 0x4ab8f4u: goto label_4ab8f4;
        case 0x4ab8f8u: goto label_4ab8f8;
        case 0x4ab8fcu: goto label_4ab8fc;
        case 0x4ab900u: goto label_4ab900;
        case 0x4ab904u: goto label_4ab904;
        case 0x4ab908u: goto label_4ab908;
        case 0x4ab90cu: goto label_4ab90c;
        case 0x4ab910u: goto label_4ab910;
        case 0x4ab914u: goto label_4ab914;
        case 0x4ab918u: goto label_4ab918;
        case 0x4ab91cu: goto label_4ab91c;
        case 0x4ab920u: goto label_4ab920;
        case 0x4ab924u: goto label_4ab924;
        case 0x4ab928u: goto label_4ab928;
        case 0x4ab92cu: goto label_4ab92c;
        case 0x4ab930u: goto label_4ab930;
        case 0x4ab934u: goto label_4ab934;
        case 0x4ab938u: goto label_4ab938;
        case 0x4ab93cu: goto label_4ab93c;
        case 0x4ab940u: goto label_4ab940;
        case 0x4ab944u: goto label_4ab944;
        case 0x4ab948u: goto label_4ab948;
        case 0x4ab94cu: goto label_4ab94c;
        case 0x4ab950u: goto label_4ab950;
        case 0x4ab954u: goto label_4ab954;
        case 0x4ab958u: goto label_4ab958;
        case 0x4ab95cu: goto label_4ab95c;
        case 0x4ab960u: goto label_4ab960;
        case 0x4ab964u: goto label_4ab964;
        case 0x4ab968u: goto label_4ab968;
        case 0x4ab96cu: goto label_4ab96c;
        case 0x4ab970u: goto label_4ab970;
        case 0x4ab974u: goto label_4ab974;
        case 0x4ab978u: goto label_4ab978;
        case 0x4ab97cu: goto label_4ab97c;
        case 0x4ab980u: goto label_4ab980;
        case 0x4ab984u: goto label_4ab984;
        case 0x4ab988u: goto label_4ab988;
        case 0x4ab98cu: goto label_4ab98c;
        case 0x4ab990u: goto label_4ab990;
        case 0x4ab994u: goto label_4ab994;
        case 0x4ab998u: goto label_4ab998;
        case 0x4ab99cu: goto label_4ab99c;
        default: break;
    }

    ctx->pc = 0x4aafe0u;

label_4aafe0:
    // 0x4aafe0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4aafe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4aafe4:
    // 0x4aafe4: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x4aafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_4aafe8:
    // 0x4aafe8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4aafe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4aafec:
    // 0x4aafec: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4aafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4aaff0:
    // 0x4aaff0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4aaff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4aaff4:
    // 0x4aaff4: 0x24a5a850  addiu       $a1, $a1, -0x57B0
    ctx->pc = 0x4aaff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944848));
label_4aaff8:
    // 0x4aaff8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4aaff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4aaffc:
    // 0x4aaffc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4aaffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ab000:
    // 0x4ab000: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ab000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ab004:
    // 0x4ab004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ab004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ab008:
    // 0x4ab008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ab008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ab00c:
    // 0x4ab00c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ab00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ab010:
    // 0x4ab010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ab010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ab014:
    // 0x4ab014: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x4ab014u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_4ab018:
    // 0x4ab018: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x4ab018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4ab01c:
    // 0x4ab01c: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x4ab01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab020:
    // 0x4ab020: 0x8c52a988  lw          $s2, -0x5678($v0)
    ctx->pc = 0x4ab020u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945160)));
label_4ab024:
    // 0x4ab024: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x4ab024u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_4ab028:
    // 0x4ab028: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x4ab028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_4ab02c:
    // 0x4ab02c: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x4ab02cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_4ab030:
    // 0x4ab030: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ab030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ab034:
    // 0x4ab034: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x4ab034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4ab038:
    // 0x4ab038: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x4ab038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4ab03c:
    // 0x4ab03c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x4ab03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4ab040:
    // 0x4ab040: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ab040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ab044:
    // 0x4ab044: 0x8c430eac  lw          $v1, 0xEAC($v0)
    ctx->pc = 0x4ab044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4ab048:
    // 0x4ab048: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4ab048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4ab04c:
    // 0x4ab04c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4ab04cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4ab050:
    // 0x4ab050: 0x90820068  lbu         $v0, 0x68($a0)
    ctx->pc = 0x4ab050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
label_4ab054:
    // 0x4ab054: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x4ab054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_4ab058:
    // 0x4ab058: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x4ab058u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_4ab05c:
    // 0x4ab05c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x4ab05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4ab060:
    // 0x4ab060: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ab064:
    if (ctx->pc == 0x4AB064u) {
        ctx->pc = 0x4AB064u;
            // 0x4ab064: 0xa6a021  addu        $s4, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->pc = 0x4AB068u;
        goto label_4ab068;
    }
    ctx->pc = 0x4AB060u;
    {
        const bool branch_taken_0x4ab060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB060u;
            // 0x4ab064: 0xa6a021  addu        $s4, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab060) {
            ctx->pc = 0x4AB06Cu;
            goto label_4ab06c;
        }
    }
    ctx->pc = 0x4AB068u;
label_4ab068:
    // 0x4ab068: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4ab068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4ab06c:
    // 0x4ab06c: 0x82480023  lb          $t0, 0x23($s2)
    ctx->pc = 0x4ab06cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_4ab070:
    // 0x4ab070: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ab070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ab074:
    // 0x4ab074: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4ab074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4ab078:
    // 0x4ab078: 0x82470025  lb          $a3, 0x25($s2)
    ctx->pc = 0x4ab078u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_4ab07c:
    // 0x4ab07c: 0x92460026  lbu         $a2, 0x26($s2)
    ctx->pc = 0x4ab07cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_4ab080:
    // 0x4ab080: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x4ab080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4ab084:
    // 0x4ab084: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x4ab084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4ab088:
    // 0x4ab088: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4ab088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4ab08c:
    // 0x4ab08c: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_4ab090:
    if (ctx->pc == 0x4AB090u) {
        ctx->pc = 0x4AB090u;
            // 0x4ab090: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x4AB094u;
        goto label_4ab094;
    }
    ctx->pc = 0x4AB08Cu;
    {
        const bool branch_taken_0x4ab08c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AB090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB08Cu;
            // 0x4ab090: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab08c) {
            ctx->pc = 0x4AB0B4u;
            goto label_4ab0b4;
        }
    }
    ctx->pc = 0x4AB094u;
label_4ab094:
    // 0x4ab094: 0x8483006c  lh          $v1, 0x6C($a0)
    ctx->pc = 0x4ab094u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_4ab098:
    // 0x4ab098: 0x92460022  lbu         $a2, 0x22($s2)
    ctx->pc = 0x4ab098u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_4ab09c:
    // 0x4ab09c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4ab09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4ab0a0:
    // 0x4ab0a0: 0x92440020  lbu         $a0, 0x20($s2)
    ctx->pc = 0x4ab0a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_4ab0a4:
    // 0x4ab0a4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4ab0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4ab0a8:
    // 0x4ab0a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ab0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4ab0ac:
    // 0x4ab0ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ab0b0:
    if (ctx->pc == 0x4AB0B0u) {
        ctx->pc = 0x4AB0B0u;
            // 0x4ab0b0: 0x83b023  subu        $s6, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x4AB0B4u;
        goto label_4ab0b4;
    }
    ctx->pc = 0x4AB0ACu;
    {
        const bool branch_taken_0x4ab0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB0ACu;
            // 0x4ab0b0: 0x83b023  subu        $s6, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab0ac) {
            ctx->pc = 0x4AB0C8u;
            goto label_4ab0c8;
        }
    }
    ctx->pc = 0x4AB0B4u;
label_4ab0b4:
    // 0x4ab0b4: 0x8483006c  lh          $v1, 0x6C($a0)
    ctx->pc = 0x4ab0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_4ab0b8:
    // 0x4ab0b8: 0x92450020  lbu         $a1, 0x20($s2)
    ctx->pc = 0x4ab0b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_4ab0bc:
    // 0x4ab0bc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4ab0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4ab0c0:
    // 0x4ab0c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ab0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4ab0c4:
    // 0x4ab0c4: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x4ab0c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ab0c8:
    // 0x4ab0c8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4ab0c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab0cc:
    // 0x4ab0cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4ab0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ab0d0:
    // 0x4ab0d0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4ab0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4ab0d4:
    // 0x4ab0d4: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4ab0d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4ab0d8:
    // 0x4ab0d8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ab0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4ab0dc:
    // 0x4ab0dc: 0x26370390  addiu       $s7, $s1, 0x390
    ctx->pc = 0x4ab0dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
label_4ab0e0:
    // 0x4ab0e0: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x4ab0e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ab0e4:
    // 0x4ab0e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ab0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ab0e8:
    // 0x4ab0e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ab0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ab0ec:
    // 0x4ab0ec: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4ab0ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4ab0f0:
    // 0x4ab0f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4ab0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ab0f4:
    // 0x4ab0f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ab0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ab0f8:
    // 0x4ab0f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ab0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab0fc:
    // 0x4ab0fc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4ab0fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab100:
    // 0x4ab100: 0x0  nop
    ctx->pc = 0x4ab100u;
    // NOP
label_4ab104:
    // 0x4ab104: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ab104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ab108:
    // 0x4ab108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ab108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab10c:
    // 0x4ab10c: 0x0  nop
    ctx->pc = 0x4ab10cu;
    // NOP
label_4ab110:
    // 0x4ab110: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ab110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ab114:
    // 0x4ab114: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4ab114u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab118:
    // 0x4ab118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ab118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ab11c:
    // 0x4ab11c: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x4ab11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ab120:
    // 0x4ab120: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ab120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ab124:
    // 0x4ab124: 0xc6220398  lwc1        $f2, 0x398($s1)
    ctx->pc = 0x4ab124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ab128:
    // 0x4ab128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ab128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ab12c:
    // 0x4ab12c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4ab12cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_4ab130:
    // 0x4ab130: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4ab130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4ab134:
    // 0x4ab134: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x4ab134u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4ab138:
    // 0x4ab138: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x4ab138u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ab13c:
    // 0x4ab13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ab13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab140:
    // 0x4ab140: 0xc621039c  lwc1        $f1, 0x39C($s1)
    ctx->pc = 0x4ab140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab144:
    // 0x4ab144: 0x460f0018  adda.s      $f0, $f15
    ctx->pc = 0x4ab144u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
label_4ab148:
    // 0x4ab148: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ab148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ab14c:
    // 0x4ab14c: 0xc0bc284  jal         func_2F0A10
label_4ab150:
    if (ctx->pc == 0x4AB150u) {
        ctx->pc = 0x4AB150u;
            // 0x4ab150: 0x46030b5d  msub.s      $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->pc = 0x4AB154u;
        goto label_4ab154;
    }
    ctx->pc = 0x4AB14Cu;
    SET_GPR_U32(ctx, 31, 0x4AB154u);
    ctx->pc = 0x4AB150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB14Cu;
            // 0x4ab150: 0x46030b5d  msub.s      $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB154u; }
        if (ctx->pc != 0x4AB154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB154u; }
        if (ctx->pc != 0x4AB154u) { return; }
    }
    ctx->pc = 0x4AB154u;
label_4ab154:
    // 0x4ab154: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4ab154u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab158:
    // 0x4ab158: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4ab158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4ab15c:
    // 0x4ab15c: 0x82450024  lb          $a1, 0x24($s2)
    ctx->pc = 0x4ab15cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_4ab160:
    // 0x4ab160: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ab160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ab164:
    // 0x4ab164: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x4ab164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_4ab168:
    // 0x4ab168: 0x92430026  lbu         $v1, 0x26($s2)
    ctx->pc = 0x4ab168u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_4ab16c:
    // 0x4ab16c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x4ab16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_4ab170:
    // 0x4ab170: 0x1547c2  srl         $t0, $s5, 31
    ctx->pc = 0x4ab170u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_4ab174:
    // 0x4ab174: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ab174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4ab178:
    // 0x4ab178: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ab178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ab17c:
    // 0x4ab17c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4ab17cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4ab180:
    // 0x4ab180: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x4ab180u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ab184:
    // 0x4ab184: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x4ab184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4ab188:
    // 0x4ab188: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4ab188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4ab18c:
    // 0x4ab18c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ab18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ab190:
    // 0x4ab190: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ab190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ab194:
    // 0x4ab194: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4ab194u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab198:
    // 0x4ab198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ab198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab19c:
    // 0x4ab19c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ab19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ab1a0:
    // 0x4ab1a0: 0x2810  mfhi        $a1
    ctx->pc = 0x4ab1a0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4ab1a4:
    // 0x4ab1a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ab1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ab1a8:
    // 0x4ab1a8: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x4ab1a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_4ab1ac:
    // 0x4ab1ac: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x4ab1acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4ab1b0:
    // 0x4ab1b0: 0x2525002f  addiu       $a1, $t1, 0x2F
    ctx->pc = 0x4ab1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 47));
label_4ab1b4:
    // 0x4ab1b4: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x4ab1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4ab1b8:
    // 0x4ab1b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ab1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab1bc:
    // 0x4ab1bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4ab1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4ab1c0:
    // 0x4ab1c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ab1c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ab1c4:
    // 0x4ab1c4: 0x225a021  addu        $s4, $s1, $a1
    ctx->pc = 0x4ab1c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_4ab1c8:
    // 0x4ab1c8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4ab1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4ab1cc:
    // 0x4ab1cc: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x4ab1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4ab1d0:
    // 0x4ab1d0: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4ab1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4ab1d4:
    // 0x4ab1d4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4ab1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4ab1d8:
    // 0x4ab1d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ab1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ab1dc:
    // 0x4ab1dc: 0x2a8a823  subu        $s5, $s5, $t0
    ctx->pc = 0x4ab1dcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
label_4ab1e0:
    // 0x4ab1e0: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x4ab1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ab1e4:
    // 0x4ab1e4: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x4ab1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4ab1e8:
    // 0x4ab1e8: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x4ab1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4ab1ec:
    // 0x4ab1ec: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x4ab1ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4ab1f0:
    // 0x4ab1f0: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x4ab1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_4ab1f4:
    // 0x4ab1f4: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x4ab1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4ab1f8:
    // 0x4ab1f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ab1f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ab1fc:
    // 0x4ab1fc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4ab1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4ab200:
    // 0x4ab200: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x4ab200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_4ab204:
    // 0x4ab204: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4ab204u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab208:
    // 0x4ab208: 0x0  nop
    ctx->pc = 0x4ab208u;
    // NOP
label_4ab20c:
    // 0x4ab20c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4ab20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4ab210:
    // 0x4ab210: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x4ab210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab214:
    // 0x4ab214: 0x460f1018  adda.s      $f2, $f15
    ctx->pc = 0x4ab214u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
label_4ab218:
    // 0x4ab218: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x4ab218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab21c:
    // 0x4ab21c: 0x46050b5d  msub.s      $f13, $f1, $f5
    ctx->pc = 0x4ab21cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_4ab220:
    // 0x4ab220: 0x460c1018  adda.s      $f2, $f12
    ctx->pc = 0x4ab220u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_4ab224:
    // 0x4ab224: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ab224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ab228:
    // 0x4ab228: 0xc0bc284  jal         func_2F0A10
label_4ab22c:
    if (ctx->pc == 0x4AB22Cu) {
        ctx->pc = 0x4AB22Cu;
            // 0x4ab22c: 0x4605039c  madd.s      $f14, $f0, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->pc = 0x4AB230u;
        goto label_4ab230;
    }
    ctx->pc = 0x4AB228u;
    SET_GPR_U32(ctx, 31, 0x4AB230u);
    ctx->pc = 0x4AB22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB228u;
            // 0x4ab22c: 0x4605039c  madd.s      $f14, $f0, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB230u; }
        if (ctx->pc != 0x4AB230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB230u; }
        if (ctx->pc != 0x4AB230u) { return; }
    }
    ctx->pc = 0x4AB230u;
label_4ab230:
    // 0x4ab230: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x4ab230u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab234:
    // 0x4ab234: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x4ab234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_4ab238:
    // 0x4ab238: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ab238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ab23c:
    // 0x4ab23c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4ab23cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4ab240:
    // 0x4ab240: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x4ab240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_4ab244:
    // 0x4ab244: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4ab244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4ab248:
    // 0x4ab248: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x4ab248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4ab24c:
    // 0x4ab24c: 0x154fc2  srl         $t1, $s5, 31
    ctx->pc = 0x4ab24cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_4ab250:
    // 0x4ab250: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ab250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ab254:
    // 0x4ab254: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ab254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ab258:
    // 0x4ab258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ab258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab25c:
    // 0x4ab25c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4ab25cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab260:
    // 0x4ab260: 0x0  nop
    ctx->pc = 0x4ab260u;
    // NOP
label_4ab264:
    // 0x4ab264: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ab264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ab268:
    // 0x4ab268: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ab268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ab26c:
    // 0x4ab26c: 0x4010  mfhi        $t0
    ctx->pc = 0x4ab26cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_4ab270:
    // 0x4ab270: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x4ab270u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_4ab274:
    // 0x4ab274: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x4ab274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4ab278:
    // 0x4ab278: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x4ab278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4ab27c:
    // 0x4ab27c: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x4ab27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_4ab280:
    // 0x4ab280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ab280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab284:
    // 0x4ab284: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x4ab284u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4ab288:
    // 0x4ab288: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ab288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ab28c:
    // 0x4ab28c: 0x2525002f  addiu       $a1, $t1, 0x2F
    ctx->pc = 0x4ab28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 47));
label_4ab290:
    // 0x4ab290: 0x2a8b823  subu        $s7, $s5, $t0
    ctx->pc = 0x4ab290u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
label_4ab294:
    // 0x4ab294: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4ab294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4ab298:
    // 0x4ab298: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x4ab298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ab29c:
    // 0x4ab29c: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x4ab29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4ab2a0:
    // 0x4ab2a0: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x4ab2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4ab2a4:
    // 0x4ab2a4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ab2a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ab2a8:
    // 0x4ab2a8: 0x225a021  addu        $s4, $s1, $a1
    ctx->pc = 0x4ab2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_4ab2ac:
    // 0x4ab2ac: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x4ab2acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4ab2b0:
    // 0x4ab2b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ab2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ab2b4:
    // 0x4ab2b4: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x4ab2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_4ab2b8:
    // 0x4ab2b8: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x4ab2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4ab2bc:
    // 0x4ab2bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ab2bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ab2c0:
    // 0x4ab2c0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4ab2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4ab2c4:
    // 0x4ab2c4: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x4ab2c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_4ab2c8:
    // 0x4ab2c8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4ab2c8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab2cc:
    // 0x4ab2cc: 0x0  nop
    ctx->pc = 0x4ab2ccu;
    // NOP
label_4ab2d0:
    // 0x4ab2d0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4ab2d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4ab2d4:
    // 0x4ab2d4: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x4ab2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab2d8:
    // 0x4ab2d8: 0x460f1018  adda.s      $f2, $f15
    ctx->pc = 0x4ab2d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
label_4ab2dc:
    // 0x4ab2dc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x4ab2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab2e0:
    // 0x4ab2e0: 0x46050b5d  msub.s      $f13, $f1, $f5
    ctx->pc = 0x4ab2e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_4ab2e4:
    // 0x4ab2e4: 0x460c1018  adda.s      $f2, $f12
    ctx->pc = 0x4ab2e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_4ab2e8:
    // 0x4ab2e8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ab2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ab2ec:
    // 0x4ab2ec: 0xc0bc284  jal         func_2F0A10
label_4ab2f0:
    if (ctx->pc == 0x4AB2F0u) {
        ctx->pc = 0x4AB2F0u;
            // 0x4ab2f0: 0x4605039c  madd.s      $f14, $f0, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->pc = 0x4AB2F4u;
        goto label_4ab2f4;
    }
    ctx->pc = 0x4AB2ECu;
    SET_GPR_U32(ctx, 31, 0x4AB2F4u);
    ctx->pc = 0x4AB2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB2ECu;
            // 0x4ab2f0: 0x4605039c  madd.s      $f14, $f0, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB2F4u; }
        if (ctx->pc != 0x4AB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB2F4u; }
        if (ctx->pc != 0x4AB2F4u) { return; }
    }
    ctx->pc = 0x4AB2F4u;
label_4ab2f4:
    // 0x4ab2f4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x4ab2f4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab2f8:
    // 0x4ab2f8: 0x26e2002f  addiu       $v0, $s7, 0x2F
    ctx->pc = 0x4ab2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 47));
label_4ab2fc:
    // 0x4ab2fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ab2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ab300:
    // 0x4ab300: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4ab300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4ab304:
    // 0x4ab304: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x4ab304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4ab308:
    // 0x4ab308: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4ab308u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4ab30c:
    // 0x4ab30c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ab30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ab310:
    // 0x4ab310: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4ab310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4ab314:
    // 0x4ab314: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ab314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ab318:
    // 0x4ab318: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ab318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ab31c:
    // 0x4ab31c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ab31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab320:
    // 0x4ab320: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4ab320u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab324:
    // 0x4ab324: 0x0  nop
    ctx->pc = 0x4ab324u;
    // NOP
label_4ab328:
    // 0x4ab328: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4ab328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4ab32c:
    // 0x4ab32c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4ab32cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab330:
    // 0x4ab330: 0x0  nop
    ctx->pc = 0x4ab330u;
    // NOP
label_4ab334:
    // 0x4ab334: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ab334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ab338:
    // 0x4ab338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ab338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab33c:
    // 0x4ab33c: 0x0  nop
    ctx->pc = 0x4ab33cu;
    // NOP
label_4ab340:
    // 0x4ab340: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ab340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ab344:
    // 0x4ab344: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x4ab344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ab348:
    // 0x4ab348: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x4ab348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4ab34c:
    // 0x4ab34c: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x4ab34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4ab350:
    // 0x4ab350: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ab350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ab354:
    // 0x4ab354: 0x0  nop
    ctx->pc = 0x4ab354u;
    // NOP
label_4ab358:
    // 0x4ab358: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x4ab358u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4ab35c:
    // 0x4ab35c: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x4ab35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_4ab360:
    // 0x4ab360: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x4ab360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4ab364:
    // 0x4ab364: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ab364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ab368:
    // 0x4ab368: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4ab368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4ab36c:
    // 0x4ab36c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4ab36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab370:
    // 0x4ab370: 0x460f1018  adda.s      $f2, $f15
    ctx->pc = 0x4ab370u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
label_4ab374:
    // 0x4ab374: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4ab374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab378:
    // 0x4ab378: 0x46050b5d  msub.s      $f13, $f1, $f5
    ctx->pc = 0x4ab378u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_4ab37c:
    // 0x4ab37c: 0x460c1018  adda.s      $f2, $f12
    ctx->pc = 0x4ab37cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_4ab380:
    // 0x4ab380: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ab380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ab384:
    // 0x4ab384: 0xc0bc284  jal         func_2F0A10
label_4ab388:
    if (ctx->pc == 0x4AB388u) {
        ctx->pc = 0x4AB388u;
            // 0x4ab388: 0x4605039c  madd.s      $f14, $f0, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->pc = 0x4AB38Cu;
        goto label_4ab38c;
    }
    ctx->pc = 0x4AB384u;
    SET_GPR_U32(ctx, 31, 0x4AB38Cu);
    ctx->pc = 0x4AB388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB384u;
            // 0x4ab388: 0x4605039c  madd.s      $f14, $f0, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB38Cu; }
        if (ctx->pc != 0x4AB38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB38Cu; }
        if (ctx->pc != 0x4AB38Cu) { return; }
    }
    ctx->pc = 0x4AB38Cu;
label_4ab38c:
    // 0x4ab38c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4ab38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4ab390:
    // 0x4ab390: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4ab390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ab394:
    // 0x4ab394: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4ab394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ab398:
    // 0x4ab398: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4ab398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ab39c:
    // 0x4ab39c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ab39cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ab3a0:
    // 0x4ab3a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ab3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ab3a4:
    // 0x4ab3a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ab3a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ab3a8:
    // 0x4ab3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ab3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ab3ac:
    // 0x4ab3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ab3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ab3b0:
    // 0x4ab3b0: 0x3e00008  jr          $ra
label_4ab3b4:
    if (ctx->pc == 0x4AB3B4u) {
        ctx->pc = 0x4AB3B4u;
            // 0x4ab3b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4AB3B8u;
        goto label_4ab3b8;
    }
    ctx->pc = 0x4AB3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB3B0u;
            // 0x4ab3b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AB3B8u;
label_4ab3b8:
    // 0x4ab3b8: 0x0  nop
    ctx->pc = 0x4ab3b8u;
    // NOP
label_4ab3bc:
    // 0x4ab3bc: 0x0  nop
    ctx->pc = 0x4ab3bcu;
    // NOP
label_4ab3c0:
    // 0x4ab3c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ab3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ab3c4:
    // 0x4ab3c4: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4ab3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4ab3c8:
    // 0x4ab3c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4ab3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4ab3cc:
    // 0x4ab3cc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x4ab3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_4ab3d0:
    // 0x4ab3d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ab3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ab3d4:
    // 0x4ab3d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ab3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ab3d8:
    // 0x4ab3d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ab3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ab3dc:
    // 0x4ab3dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ab3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ab3e0:
    // 0x4ab3e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ab3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ab3e4:
    // 0x4ab3e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4ab3e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4ab3e8:
    // 0x4ab3e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ab3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ab3ec:
    // 0x4ab3ec: 0xc475a980  lwc1        $f21, -0x5680($v1)
    ctx->pc = 0x4ab3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294945152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4ab3f0:
    // 0x4ab3f0: 0x8cb08a08  lw          $s0, -0x75F8($a1)
    ctx->pc = 0x4ab3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_4ab3f4:
    // 0x4ab3f4: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x4ab3f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ab3f8:
    // 0x4ab3f8: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4ab3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4ab3fc:
    // 0x4ab3fc: 0x8c66a988  lw          $a2, -0x5678($v1)
    ctx->pc = 0x4ab3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945160)));
label_4ab400:
    // 0x4ab400: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x4ab400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ab404:
    // 0x4ab404: 0x2ce10009  sltiu       $at, $a3, 0x9
    ctx->pc = 0x4ab404u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4ab408:
    // 0x4ab408: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4ab408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4ab40c:
    // 0x4ab40c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ab40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ab410:
    // 0x4ab410: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x4ab410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_4ab414:
    // 0x4ab414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ab414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab418:
    // 0x4ab418: 0x0  nop
    ctx->pc = 0x4ab418u;
    // NOP
label_4ab41c:
    // 0x4ab41c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4ab41cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4ab420:
    // 0x4ab420: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ab420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ab424:
    // 0x4ab424: 0x8c730e80  lw          $s3, 0xE80($v1)
    ctx->pc = 0x4ab424u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4ab428:
    // 0x4ab428: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4ab428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4ab42c:
    // 0x4ab42c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ab42cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4ab430:
    // 0x4ab430: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ab430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ab434:
    // 0x4ab434: 0xc4d40030  lwc1        $f20, 0x30($a2)
    ctx->pc = 0x4ab434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ab438:
    // 0x4ab438: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4ab438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4ab43c:
    // 0x4ab43c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4ab43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4ab440:
    // 0x4ab440: 0x1020012d  beqz        $at, . + 4 + (0x12D << 2)
label_4ab444:
    if (ctx->pc == 0x4AB444u) {
        ctx->pc = 0x4AB444u;
            // 0x4ab444: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB448u;
        goto label_4ab448;
    }
    ctx->pc = 0x4AB440u;
    {
        const bool branch_taken_0x4ab440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB440u;
            // 0x4ab444: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab440) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB448u;
label_4ab448:
    // 0x4ab448: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4ab448u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_4ab44c:
    // 0x4ab44c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4ab44cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4ab450:
    // 0x4ab450: 0x250853f0  addiu       $t0, $t0, 0x53F0
    ctx->pc = 0x4ab450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21488));
label_4ab454:
    // 0x4ab454: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4ab454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4ab458:
    // 0x4ab458: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x4ab458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4ab45c:
    // 0x4ab45c: 0xe00008  jr          $a3
label_4ab460:
    if (ctx->pc == 0x4AB460u) {
        ctx->pc = 0x4AB464u;
        goto label_4ab464;
    }
    ctx->pc = 0x4AB45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4AB464u: goto label_4ab464;
            case 0x4AB474u: goto label_4ab474;
            case 0x4AB50Cu: goto label_4ab50c;
            case 0x4AB5FCu: goto label_4ab5fc;
            case 0x4AB788u: goto label_4ab788;
            case 0x4AB854u: goto label_4ab854;
            case 0x4AB86Cu: goto label_4ab86c;
            case 0x4AB8CCu: goto label_4ab8cc;
            case 0x4AB8E4u: goto label_4ab8e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4AB464u;
label_4ab464:
    // 0x4ab464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab468:
    // 0x4ab468: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ab468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ab46c:
    // 0x4ab46c: 0x320f809  jalr        $t9
label_4ab470:
    if (ctx->pc == 0x4AB470u) {
        ctx->pc = 0x4AB474u;
        goto label_4ab474;
    }
    ctx->pc = 0x4AB46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB474u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB474u; }
            if (ctx->pc != 0x4AB474u) { return; }
        }
        }
    }
    ctx->pc = 0x4AB474u;
label_4ab474:
    // 0x4ab474: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x4ab474u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_4ab478:
    // 0x4ab478: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4ab478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4ab47c:
    // 0x4ab47c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_4ab480:
    if (ctx->pc == 0x4AB480u) {
        ctx->pc = 0x4AB484u;
        goto label_4ab484;
    }
    ctx->pc = 0x4AB47Cu;
    {
        const bool branch_taken_0x4ab47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ab47c) {
            ctx->pc = 0x4AB4A0u;
            goto label_4ab4a0;
        }
    }
    ctx->pc = 0x4AB484u;
label_4ab484:
    // 0x4ab484: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ab484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ab488:
    // 0x4ab488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ab488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ab48c:
    // 0x4ab48c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab490:
    // 0x4ab490: 0x320f809  jalr        $t9
label_4ab494:
    if (ctx->pc == 0x4AB494u) {
        ctx->pc = 0x4AB494u;
            // 0x4ab494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB498u;
        goto label_4ab498;
    }
    ctx->pc = 0x4AB490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB498u);
        ctx->pc = 0x4AB494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB490u;
            // 0x4ab494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB498u; }
            if (ctx->pc != 0x4AB498u) { return; }
        }
        }
    }
    ctx->pc = 0x4AB498u;
label_4ab498:
    // 0x4ab498: 0x10000118  b           . + 4 + (0x118 << 2)
label_4ab49c:
    if (ctx->pc == 0x4AB49Cu) {
        ctx->pc = 0x4AB49Cu;
            // 0x4ab49c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x4AB4A0u;
        goto label_4ab4a0;
    }
    ctx->pc = 0x4AB498u;
    {
        const bool branch_taken_0x4ab498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB498u;
            // 0x4ab49c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab498) {
            ctx->pc = 0x4AB8FCu;
            goto label_4ab8fc;
        }
    }
    ctx->pc = 0x4AB4A0u;
label_4ab4a0:
    // 0x4ab4a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ab4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ab4a4:
    // 0x4ab4a4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ab4a8:
    // 0x4ab4a8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4ab4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4ab4ac:
    // 0x4ab4ac: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x4ab4acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_4ab4b0:
    // 0x4ab4b0: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_4ab4b4:
    if (ctx->pc == 0x4AB4B4u) {
        ctx->pc = 0x4AB4B4u;
            // 0x4ab4b4: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4AB4B8u;
        goto label_4ab4b8;
    }
    ctx->pc = 0x4AB4B0u;
    {
        const bool branch_taken_0x4ab4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab4b0) {
            ctx->pc = 0x4AB4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB4B0u;
            // 0x4ab4b4: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB4D4u;
            goto label_4ab4d4;
        }
    }
    ctx->pc = 0x4AB4B8u;
label_4ab4b8:
    // 0x4ab4b8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ab4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ab4bc:
    // 0x4ab4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ab4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ab4c0:
    // 0x4ab4c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab4c4:
    // 0x4ab4c4: 0x320f809  jalr        $t9
label_4ab4c8:
    if (ctx->pc == 0x4AB4C8u) {
        ctx->pc = 0x4AB4C8u;
            // 0x4ab4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB4CCu;
        goto label_4ab4cc;
    }
    ctx->pc = 0x4AB4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB4CCu);
        ctx->pc = 0x4AB4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB4C4u;
            // 0x4ab4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB4CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB4CCu; }
            if (ctx->pc != 0x4AB4CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4AB4CCu;
label_4ab4cc:
    // 0x4ab4cc: 0x1000010a  b           . + 4 + (0x10A << 2)
label_4ab4d0:
    if (ctx->pc == 0x4AB4D0u) {
        ctx->pc = 0x4AB4D4u;
        goto label_4ab4d4;
    }
    ctx->pc = 0x4AB4CCu;
    {
        const bool branch_taken_0x4ab4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab4cc) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB4D4u;
label_4ab4d4:
    // 0x4ab4d4: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x4ab4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab4d8:
    // 0x4ab4d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ab4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ab4dc:
    // 0x4ab4dc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x4ab4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab4e0:
    // 0x4ab4e0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4ab4e4:
    if (ctx->pc == 0x4AB4E4u) {
        ctx->pc = 0x4AB4E4u;
            // 0x4ab4e4: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->pc = 0x4AB4E8u;
        goto label_4ab4e8;
    }
    ctx->pc = 0x4AB4E0u;
    {
        const bool branch_taken_0x4ab4e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AB4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB4E0u;
            // 0x4ab4e4: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab4e0) {
            ctx->pc = 0x4AB4FCu;
            goto label_4ab4fc;
        }
    }
    ctx->pc = 0x4AB4E8u;
label_4ab4e8:
    // 0x4ab4e8: 0xe6550074  swc1        $f21, 0x74($s2)
    ctx->pc = 0x4ab4e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
label_4ab4ec:
    // 0x4ab4ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ab4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ab4f0:
    // 0x4ab4f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ab4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ab4f4:
    // 0x4ab4f4: 0x320f809  jalr        $t9
label_4ab4f8:
    if (ctx->pc == 0x4AB4F8u) {
        ctx->pc = 0x4AB4F8u;
            // 0x4ab4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB4FCu;
        goto label_4ab4fc;
    }
    ctx->pc = 0x4AB4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB4FCu);
        ctx->pc = 0x4AB4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB4F4u;
            // 0x4ab4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB4FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB4FCu; }
            if (ctx->pc != 0x4AB4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4AB4FCu;
label_4ab4fc:
    // 0x4ab4fc: 0xc11088c  jal         func_442230
label_4ab500:
    if (ctx->pc == 0x4AB500u) {
        ctx->pc = 0x4AB500u;
            // 0x4ab500: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->pc = 0x4AB504u;
        goto label_4ab504;
    }
    ctx->pc = 0x4AB4FCu;
    SET_GPR_U32(ctx, 31, 0x4AB504u);
    ctx->pc = 0x4AB500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB4FCu;
            // 0x4ab500: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB504u; }
        if (ctx->pc != 0x4AB504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB504u; }
        if (ctx->pc != 0x4AB504u) { return; }
    }
    ctx->pc = 0x4AB504u;
label_4ab504:
    // 0x4ab504: 0x100000fc  b           . + 4 + (0xFC << 2)
label_4ab508:
    if (ctx->pc == 0x4AB508u) {
        ctx->pc = 0x4AB50Cu;
        goto label_4ab50c;
    }
    ctx->pc = 0x4AB504u;
    {
        const bool branch_taken_0x4ab504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab504) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB50Cu;
label_4ab50c:
    // 0x4ab50c: 0x8e620cb4  lw          $v0, 0xCB4($s3)
    ctx->pc = 0x4ab50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3252)));
label_4ab510:
    // 0x4ab510: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x4ab510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_4ab514:
    // 0x4ab514: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_4ab518:
    if (ctx->pc == 0x4AB518u) {
        ctx->pc = 0x4AB518u;
            // 0x4ab518: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4AB51Cu;
        goto label_4ab51c;
    }
    ctx->pc = 0x4AB514u;
    {
        const bool branch_taken_0x4ab514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab514) {
            ctx->pc = 0x4AB518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB514u;
            // 0x4ab518: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB534u;
            goto label_4ab534;
        }
    }
    ctx->pc = 0x4AB51Cu;
label_4ab51c:
    // 0x4ab51c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab520:
    // 0x4ab520: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab524:
    // 0x4ab524: 0x320f809  jalr        $t9
label_4ab528:
    if (ctx->pc == 0x4AB528u) {
        ctx->pc = 0x4AB528u;
            // 0x4ab528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB52Cu;
        goto label_4ab52c;
    }
    ctx->pc = 0x4AB524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB52Cu);
        ctx->pc = 0x4AB528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB524u;
            // 0x4ab528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB52Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB52Cu; }
            if (ctx->pc != 0x4AB52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AB52Cu;
label_4ab52c:
    // 0x4ab52c: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_4ab530:
    if (ctx->pc == 0x4AB530u) {
        ctx->pc = 0x4AB534u;
        goto label_4ab534;
    }
    ctx->pc = 0x4AB52Cu;
    {
        const bool branch_taken_0x4ab52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab52c) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB534u;
label_4ab534:
    // 0x4ab534: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ab534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4ab538:
    // 0x4ab538: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x4ab538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4ab53c:
    // 0x4ab53c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x4ab53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab540:
    // 0x4ab540: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x4ab540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab544:
    // 0x4ab544: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ab544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab548:
    // 0x4ab548: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_4ab54c:
    if (ctx->pc == 0x4AB54Cu) {
        ctx->pc = 0x4AB54Cu;
            // 0x4ab54c: 0x8642006a  lh          $v0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->pc = 0x4AB550u;
        goto label_4ab550;
    }
    ctx->pc = 0x4AB548u;
    {
        const bool branch_taken_0x4ab548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ab548) {
            ctx->pc = 0x4AB54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB548u;
            // 0x4ab54c: 0x8642006a  lh          $v0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB558u;
            goto label_4ab558;
        }
    }
    ctx->pc = 0x4AB550u;
label_4ab550:
    // 0x4ab550: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x4ab550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4ab554:
    // 0x4ab554: 0x8642006a  lh          $v0, 0x6A($s2)
    ctx->pc = 0x4ab554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
label_4ab558:
    // 0x4ab558: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x4ab558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_4ab55c:
    // 0x4ab55c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x4ab55cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_4ab560:
    // 0x4ab560: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ab560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4ab564:
    // 0x4ab564: 0xa642006a  sh          $v0, 0x6A($s2)
    ctx->pc = 0x4ab564u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 106), (uint16_t)GPR_U32(ctx, 2));
label_4ab568:
    // 0x4ab568: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4ab568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4ab56c:
    // 0x4ab56c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4ab56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4ab570:
    // 0x4ab570: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ab570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ab574:
    // 0x4ab574: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4ab574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4ab578:
    // 0x4ab578: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4ab57c:
    if (ctx->pc == 0x4AB57Cu) {
        ctx->pc = 0x4AB57Cu;
            // 0x4ab57c: 0x8642006c  lh          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x4AB580u;
        goto label_4ab580;
    }
    ctx->pc = 0x4AB578u;
    {
        const bool branch_taken_0x4ab578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ab578) {
            ctx->pc = 0x4AB57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB578u;
            // 0x4ab57c: 0x8642006c  lh          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB588u;
            goto label_4ab588;
        }
    }
    ctx->pc = 0x4AB580u;
label_4ab580:
    // 0x4ab580: 0xa644006a  sh          $a0, 0x6A($s2)
    ctx->pc = 0x4ab580u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 106), (uint16_t)GPR_U32(ctx, 4));
label_4ab584:
    // 0x4ab584: 0x8642006c  lh          $v0, 0x6C($s2)
    ctx->pc = 0x4ab584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_4ab588:
    // 0x4ab588: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x4ab588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_4ab58c:
    // 0x4ab58c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x4ab58cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_4ab590:
    // 0x4ab590: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ab590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4ab594:
    // 0x4ab594: 0xa642006c  sh          $v0, 0x6C($s2)
    ctx->pc = 0x4ab594u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 2));
label_4ab598:
    // 0x4ab598: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4ab598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4ab59c:
    // 0x4ab59c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4ab59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4ab5a0:
    // 0x4ab5a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ab5a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ab5a4:
    // 0x4ab5a4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4ab5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4ab5a8:
    // 0x4ab5a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4ab5ac:
    if (ctx->pc == 0x4AB5ACu) {
        ctx->pc = 0x4AB5ACu;
            // 0x4ab5ac: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x4AB5B0u;
        goto label_4ab5b0;
    }
    ctx->pc = 0x4AB5A8u;
    {
        const bool branch_taken_0x4ab5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ab5a8) {
            ctx->pc = 0x4AB5ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB5A8u;
            // 0x4ab5ac: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB5B8u;
            goto label_4ab5b8;
        }
    }
    ctx->pc = 0x4AB5B0u;
label_4ab5b0:
    // 0x4ab5b0: 0xa644006c  sh          $a0, 0x6C($s2)
    ctx->pc = 0x4ab5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 4));
label_4ab5b4:
    // 0x4ab5b4: 0x92440068  lbu         $a0, 0x68($s2)
    ctx->pc = 0x4ab5b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_4ab5b8:
    // 0x4ab5b8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x4ab5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ab5bc:
    // 0x4ab5bc: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x4ab5bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_4ab5c0:
    // 0x4ab5c0: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_4ab5c4:
    if (ctx->pc == 0x4AB5C4u) {
        ctx->pc = 0x4AB5C4u;
            // 0x4ab5c4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x4AB5C8u;
        goto label_4ab5c8;
    }
    ctx->pc = 0x4AB5C0u;
    {
        const bool branch_taken_0x4ab5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab5c0) {
            ctx->pc = 0x4AB5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB5C0u;
            // 0x4ab5c4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB5D8u;
            goto label_4ab5d8;
        }
    }
    ctx->pc = 0x4AB5C8u;
label_4ab5c8:
    // 0x4ab5c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4ab5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4ab5cc:
    // 0x4ab5cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4ab5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4ab5d0:
    // 0x4ab5d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ab5d4:
    if (ctx->pc == 0x4AB5D4u) {
        ctx->pc = 0x4AB5D4u;
            // 0x4ab5d4: 0xa2420068  sb          $v0, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4AB5D8u;
        goto label_4ab5d8;
    }
    ctx->pc = 0x4AB5D0u;
    {
        const bool branch_taken_0x4ab5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB5D0u;
            // 0x4ab5d4: 0xa2420068  sb          $v0, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab5d0) {
            ctx->pc = 0x4AB5ECu;
            goto label_4ab5ec;
        }
    }
    ctx->pc = 0x4AB5D8u;
label_4ab5d8:
    // 0x4ab5d8: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x4ab5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_4ab5dc:
    // 0x4ab5dc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ab5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ab5e0:
    // 0x4ab5e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ab5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ab5e4:
    // 0x4ab5e4: 0x320f809  jalr        $t9
label_4ab5e8:
    if (ctx->pc == 0x4AB5E8u) {
        ctx->pc = 0x4AB5E8u;
            // 0x4ab5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB5ECu;
        goto label_4ab5ec;
    }
    ctx->pc = 0x4AB5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB5ECu);
        ctx->pc = 0x4AB5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB5E4u;
            // 0x4ab5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB5ECu; }
            if (ctx->pc != 0x4AB5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4AB5ECu;
label_4ab5ec:
    // 0x4ab5ec: 0xc11088c  jal         func_442230
label_4ab5f0:
    if (ctx->pc == 0x4AB5F0u) {
        ctx->pc = 0x4AB5F0u;
            // 0x4ab5f0: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->pc = 0x4AB5F4u;
        goto label_4ab5f4;
    }
    ctx->pc = 0x4AB5ECu;
    SET_GPR_U32(ctx, 31, 0x4AB5F4u);
    ctx->pc = 0x4AB5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB5ECu;
            // 0x4ab5f0: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB5F4u; }
        if (ctx->pc != 0x4AB5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB5F4u; }
        if (ctx->pc != 0x4AB5F4u) { return; }
    }
    ctx->pc = 0x4AB5F4u;
label_4ab5f4:
    // 0x4ab5f4: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_4ab5f8:
    if (ctx->pc == 0x4AB5F8u) {
        ctx->pc = 0x4AB5FCu;
        goto label_4ab5fc;
    }
    ctx->pc = 0x4AB5F4u;
    {
        const bool branch_taken_0x4ab5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab5f4) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB5FCu;
label_4ab5fc:
    // 0x4ab5fc: 0x8e620cb4  lw          $v0, 0xCB4($s3)
    ctx->pc = 0x4ab5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3252)));
label_4ab600:
    // 0x4ab600: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x4ab600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_4ab604:
    // 0x4ab604: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_4ab608:
    if (ctx->pc == 0x4AB608u) {
        ctx->pc = 0x4AB608u;
            // 0x4ab608: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4AB60Cu;
        goto label_4ab60c;
    }
    ctx->pc = 0x4AB604u;
    {
        const bool branch_taken_0x4ab604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab604) {
            ctx->pc = 0x4AB608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB604u;
            // 0x4ab608: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB624u;
            goto label_4ab624;
        }
    }
    ctx->pc = 0x4AB60Cu;
label_4ab60c:
    // 0x4ab60c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab60cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab610:
    // 0x4ab610: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab614:
    // 0x4ab614: 0x320f809  jalr        $t9
label_4ab618:
    if (ctx->pc == 0x4AB618u) {
        ctx->pc = 0x4AB618u;
            // 0x4ab618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB61Cu;
        goto label_4ab61c;
    }
    ctx->pc = 0x4AB614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB61Cu);
        ctx->pc = 0x4AB618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB614u;
            // 0x4ab618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB61Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB61Cu; }
            if (ctx->pc != 0x4AB61Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AB61Cu;
label_4ab61c:
    // 0x4ab61c: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_4ab620:
    if (ctx->pc == 0x4AB620u) {
        ctx->pc = 0x4AB624u;
        goto label_4ab624;
    }
    ctx->pc = 0x4AB61Cu;
    {
        const bool branch_taken_0x4ab61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab61c) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB624u;
label_4ab624:
    // 0x4ab624: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ab624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4ab628:
    // 0x4ab628: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x4ab628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4ab62c:
    // 0x4ab62c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x4ab62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab630:
    // 0x4ab630: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x4ab630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab634:
    // 0x4ab634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ab634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab638:
    // 0x4ab638: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_4ab63c:
    if (ctx->pc == 0x4AB63Cu) {
        ctx->pc = 0x4AB63Cu;
            // 0x4ab63c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4AB640u;
        goto label_4ab640;
    }
    ctx->pc = 0x4AB638u;
    {
        const bool branch_taken_0x4ab638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ab638) {
            ctx->pc = 0x4AB63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB638u;
            // 0x4ab63c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB648u;
            goto label_4ab648;
        }
    }
    ctx->pc = 0x4AB640u;
label_4ab640:
    // 0x4ab640: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x4ab640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4ab644:
    // 0x4ab644: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x4ab644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab648:
    // 0x4ab648: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x4ab648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab64c:
    // 0x4ab64c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ab64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ab650:
    // 0x4ab650: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x4ab650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_4ab654:
    // 0x4ab654: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x4ab654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab658:
    // 0x4ab658: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x4ab658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ab65c:
    // 0x4ab65c: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x4ab65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab660:
    // 0x4ab660: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x4ab660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4ab664:
    // 0x4ab664: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4ab664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4ab668:
    // 0x4ab668: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ab668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab66c:
    // 0x4ab66c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_4ab670:
    if (ctx->pc == 0x4AB670u) {
        ctx->pc = 0x4AB670u;
            // 0x4ab670: 0xc4c1002c  lwc1        $f1, 0x2C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4AB674u;
        goto label_4ab674;
    }
    ctx->pc = 0x4AB66Cu;
    {
        const bool branch_taken_0x4ab66c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ab66c) {
            ctx->pc = 0x4AB670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB66Cu;
            // 0x4ab670: 0xc4c1002c  lwc1        $f1, 0x2C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB67Cu;
            goto label_4ab67c;
        }
    }
    ctx->pc = 0x4AB674u;
label_4ab674:
    // 0x4ab674: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x4ab674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_4ab678:
    // 0x4ab678: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x4ab678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab67c:
    // 0x4ab67c: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x4ab67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab680:
    // 0x4ab680: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x4ab680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4ab684:
    // 0x4ab684: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ab684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab688:
    // 0x4ab688: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_4ab68c:
    if (ctx->pc == 0x4AB68Cu) {
        ctx->pc = 0x4AB68Cu;
            // 0x4ab68c: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x4AB690u;
        goto label_4ab690;
    }
    ctx->pc = 0x4AB688u;
    {
        const bool branch_taken_0x4ab688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ab688) {
            ctx->pc = 0x4AB68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB688u;
            // 0x4ab68c: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB6F8u;
            goto label_4ab6f8;
        }
    }
    ctx->pc = 0x4AB690u;
label_4ab690:
    // 0x4ab690: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x4ab690u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4ab694:
    // 0x4ab694: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ab694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ab698:
    // 0x4ab698: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x4ab698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab69c:
    // 0x4ab69c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ab69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ab6a0:
    // 0x4ab6a0: 0x0  nop
    ctx->pc = 0x4ab6a0u;
    // NOP
label_4ab6a4:
    // 0x4ab6a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4ab6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ab6a8:
    // 0x4ab6a8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x4ab6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab6ac:
    // 0x4ab6ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_4ab6b0:
    if (ctx->pc == 0x4AB6B0u) {
        ctx->pc = 0x4AB6B0u;
            // 0x4ab6b0: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4AB6B4u;
        goto label_4ab6b4;
    }
    ctx->pc = 0x4AB6ACu;
    {
        const bool branch_taken_0x4ab6ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AB6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB6ACu;
            // 0x4ab6b0: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab6ac) {
            ctx->pc = 0x4AB6D8u;
            goto label_4ab6d8;
        }
    }
    ctx->pc = 0x4AB6B4u;
label_4ab6b4:
    // 0x4ab6b4: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x4ab6b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_4ab6b8:
    // 0x4ab6b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4ab6b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ab6bc:
    // 0x4ab6bc: 0xc4c30030  lwc1        $f3, 0x30($a2)
    ctx->pc = 0x4ab6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ab6c0:
    // 0x4ab6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ab6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab6c4:
    // 0x4ab6c4: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x4ab6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ab6c8:
    // 0x4ab6c8: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x4ab6c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_4ab6cc:
    // 0x4ab6cc: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x4ab6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_4ab6d0:
    // 0x4ab6d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4ab6d4:
    if (ctx->pc == 0x4AB6D4u) {
        ctx->pc = 0x4AB6D4u;
            // 0x4ab6d4: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x4AB6D8u;
        goto label_4ab6d8;
    }
    ctx->pc = 0x4AB6D0u;
    {
        const bool branch_taken_0x4ab6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB6D0u;
            // 0x4ab6d4: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab6d0) {
            ctx->pc = 0x4AB6F4u;
            goto label_4ab6f4;
        }
    }
    ctx->pc = 0x4AB6D8u;
label_4ab6d8:
    // 0x4ab6d8: 0xc4c20030  lwc1        $f2, 0x30($a2)
    ctx->pc = 0x4ab6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ab6dc:
    // 0x4ab6dc: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x4ab6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab6e0:
    // 0x4ab6e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ab6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab6e4:
    // 0x4ab6e4: 0x0  nop
    ctx->pc = 0x4ab6e4u;
    // NOP
label_4ab6e8:
    // 0x4ab6e8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x4ab6e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4ab6ec:
    // 0x4ab6ec: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x4ab6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_4ab6f0:
    // 0x4ab6f0: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x4ab6f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4ab6f4:
    // 0x4ab6f4: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x4ab6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_4ab6f8:
    // 0x4ab6f8: 0xc11088c  jal         func_442230
label_4ab6fc:
    if (ctx->pc == 0x4AB6FCu) {
        ctx->pc = 0x4AB700u;
        goto label_4ab700;
    }
    ctx->pc = 0x4AB6F8u;
    SET_GPR_U32(ctx, 31, 0x4AB700u);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB700u; }
        if (ctx->pc != 0x4AB700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB700u; }
        if (ctx->pc != 0x4AB700u) { return; }
    }
    ctx->pc = 0x4AB700u;
label_4ab700:
    // 0x4ab700: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_4ab704:
    if (ctx->pc == 0x4AB704u) {
        ctx->pc = 0x4AB704u;
            // 0x4ab704: 0x8e450080  lw          $a1, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x4AB708u;
        goto label_4ab708;
    }
    ctx->pc = 0x4AB700u;
    {
        const bool branch_taken_0x4ab700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab700) {
            ctx->pc = 0x4AB704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB700u;
            // 0x4ab704: 0x8e450080  lw          $a1, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB720u;
            goto label_4ab720;
        }
    }
    ctx->pc = 0x4AB708u;
label_4ab708:
    // 0x4ab708: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x4ab708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_4ab70c:
    // 0x4ab70c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4ab70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4ab710:
    // 0x4ab710: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4ab710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4ab714:
    // 0x4ab714: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4ab714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4ab718:
    // 0x4ab718: 0x10000005  b           . + 4 + (0x5 << 2)
label_4ab71c:
    if (ctx->pc == 0x4AB71Cu) {
        ctx->pc = 0x4AB71Cu;
            // 0x4ab71c: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->pc = 0x4AB720u;
        goto label_4ab720;
    }
    ctx->pc = 0x4AB718u;
    {
        const bool branch_taken_0x4ab718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB718u;
            // 0x4ab71c: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab718) {
            ctx->pc = 0x4AB730u;
            goto label_4ab730;
        }
    }
    ctx->pc = 0x4AB720u;
label_4ab720:
    // 0x4ab720: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4ab720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4ab724:
    // 0x4ab724: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x4ab724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4ab728:
    // 0x4ab728: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4ab728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4ab72c:
    // 0x4ab72c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4ab72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4ab730:
    // 0x4ab730: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x4ab730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ab734:
    // 0x4ab734: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x4ab734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab738:
    // 0x4ab738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ab738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ab73c:
    // 0x4ab73c: 0x0  nop
    ctx->pc = 0x4ab73cu;
    // NOP
label_4ab740:
    // 0x4ab740: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4ab740u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4ab744:
    // 0x4ab744: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ab744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab748:
    // 0x4ab748: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
label_4ab74c:
    if (ctx->pc == 0x4AB74Cu) {
        ctx->pc = 0x4AB74Cu;
            // 0x4ab74c: 0xe6410064  swc1        $f1, 0x64($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->pc = 0x4AB750u;
        goto label_4ab750;
    }
    ctx->pc = 0x4AB748u;
    {
        const bool branch_taken_0x4ab748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AB74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB748u;
            // 0x4ab74c: 0xe6410064  swc1        $f1, 0x64($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab748) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB750u;
label_4ab750:
    // 0x4ab750: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x4ab750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_4ab754:
    // 0x4ab754: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x4ab754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_4ab758:
    // 0x4ab758: 0xc11088c  jal         func_442230
label_4ab75c:
    if (ctx->pc == 0x4AB75Cu) {
        ctx->pc = 0x4AB75Cu;
            // 0x4ab75c: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x4AB760u;
        goto label_4ab760;
    }
    ctx->pc = 0x4AB758u;
    SET_GPR_U32(ctx, 31, 0x4AB760u);
    ctx->pc = 0x4AB75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB758u;
            // 0x4ab75c: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB760u; }
        if (ctx->pc != 0x4AB760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB760u; }
        if (ctx->pc != 0x4AB760u) { return; }
    }
    ctx->pc = 0x4AB760u;
label_4ab760:
    // 0x4ab760: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x4ab760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_4ab764:
    // 0x4ab764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ab764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ab768:
    // 0x4ab768: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4ab768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4ab76c:
    // 0x4ab76c: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x4ab76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_4ab770:
    // 0x4ab770: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ab770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ab774:
    // 0x4ab774: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ab774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ab778:
    // 0x4ab778: 0x320f809  jalr        $t9
label_4ab77c:
    if (ctx->pc == 0x4AB77Cu) {
        ctx->pc = 0x4AB77Cu;
            // 0x4ab77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB780u;
        goto label_4ab780;
    }
    ctx->pc = 0x4AB778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB780u);
        ctx->pc = 0x4AB77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB778u;
            // 0x4ab77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB780u; }
            if (ctx->pc != 0x4AB780u) { return; }
        }
        }
    }
    ctx->pc = 0x4AB780u;
label_4ab780:
    // 0x4ab780: 0x1000005d  b           . + 4 + (0x5D << 2)
label_4ab784:
    if (ctx->pc == 0x4AB784u) {
        ctx->pc = 0x4AB788u;
        goto label_4ab788;
    }
    ctx->pc = 0x4AB780u;
    {
        const bool branch_taken_0x4ab780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab780) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB788u;
label_4ab788:
    // 0x4ab788: 0x8e620cb4  lw          $v0, 0xCB4($s3)
    ctx->pc = 0x4ab788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3252)));
label_4ab78c:
    // 0x4ab78c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x4ab78cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_4ab790:
    // 0x4ab790: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_4ab794:
    if (ctx->pc == 0x4AB794u) {
        ctx->pc = 0x4AB794u;
            // 0x4ab794: 0x8644006a  lh          $a0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->pc = 0x4AB798u;
        goto label_4ab798;
    }
    ctx->pc = 0x4AB790u;
    {
        const bool branch_taken_0x4ab790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab790) {
            ctx->pc = 0x4AB794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB790u;
            // 0x4ab794: 0x8644006a  lh          $a0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB7B0u;
            goto label_4ab7b0;
        }
    }
    ctx->pc = 0x4AB798u;
label_4ab798:
    // 0x4ab798: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab79c:
    // 0x4ab79c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab7a0:
    // 0x4ab7a0: 0x320f809  jalr        $t9
label_4ab7a4:
    if (ctx->pc == 0x4AB7A4u) {
        ctx->pc = 0x4AB7A4u;
            // 0x4ab7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB7A8u;
        goto label_4ab7a8;
    }
    ctx->pc = 0x4AB7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB7A8u);
        ctx->pc = 0x4AB7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB7A0u;
            // 0x4ab7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB7A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB7A8u; }
            if (ctx->pc != 0x4AB7A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AB7A8u;
label_4ab7a8:
    // 0x4ab7a8: 0x10000053  b           . + 4 + (0x53 << 2)
label_4ab7ac:
    if (ctx->pc == 0x4AB7ACu) {
        ctx->pc = 0x4AB7B0u;
        goto label_4ab7b0;
    }
    ctx->pc = 0x4AB7A8u;
    {
        const bool branch_taken_0x4ab7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab7a8) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB7B0u;
label_4ab7b0:
    // 0x4ab7b0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4ab7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_4ab7b4:
    // 0x4ab7b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ab7b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ab7b8:
    // 0x4ab7b8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4ab7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4ab7bc:
    // 0x4ab7bc: 0xa642006a  sh          $v0, 0x6A($s2)
    ctx->pc = 0x4ab7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 106), (uint16_t)GPR_U32(ctx, 2));
label_4ab7c0:
    // 0x4ab7c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4ab7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4ab7c4:
    // 0x4ab7c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ab7c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ab7c8:
    // 0x4ab7c8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_4ab7cc:
    if (ctx->pc == 0x4AB7CCu) {
        ctx->pc = 0x4AB7CCu;
            // 0x4ab7cc: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x4AB7D0u;
        goto label_4ab7d0;
    }
    ctx->pc = 0x4AB7C8u;
    {
        const bool branch_taken_0x4ab7c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ab7c8) {
            ctx->pc = 0x4AB7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB7C8u;
            // 0x4ab7cc: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB7D8u;
            goto label_4ab7d8;
        }
    }
    ctx->pc = 0x4AB7D0u;
label_4ab7d0:
    // 0x4ab7d0: 0xa640006a  sh          $zero, 0x6A($s2)
    ctx->pc = 0x4ab7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 106), (uint16_t)GPR_U32(ctx, 0));
label_4ab7d4:
    // 0x4ab7d4: 0x8644006c  lh          $a0, 0x6C($s2)
    ctx->pc = 0x4ab7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_4ab7d8:
    // 0x4ab7d8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4ab7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_4ab7dc:
    // 0x4ab7dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ab7dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ab7e0:
    // 0x4ab7e0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4ab7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4ab7e4:
    // 0x4ab7e4: 0xa642006c  sh          $v0, 0x6C($s2)
    ctx->pc = 0x4ab7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 2));
label_4ab7e8:
    // 0x4ab7e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4ab7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4ab7ec:
    // 0x4ab7ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ab7ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ab7f0:
    // 0x4ab7f0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_4ab7f4:
    if (ctx->pc == 0x4AB7F4u) {
        ctx->pc = 0x4AB7F4u;
            // 0x4ab7f4: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x4AB7F8u;
        goto label_4ab7f8;
    }
    ctx->pc = 0x4AB7F0u;
    {
        const bool branch_taken_0x4ab7f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ab7f0) {
            ctx->pc = 0x4AB7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB7F0u;
            // 0x4ab7f4: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB800u;
            goto label_4ab800;
        }
    }
    ctx->pc = 0x4AB7F8u;
label_4ab7f8:
    // 0x4ab7f8: 0xa640006c  sh          $zero, 0x6C($s2)
    ctx->pc = 0x4ab7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 0));
label_4ab7fc:
    // 0x4ab7fc: 0x92440068  lbu         $a0, 0x68($s2)
    ctx->pc = 0x4ab7fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_4ab800:
    // 0x4ab800: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x4ab800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ab804:
    // 0x4ab804: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ab808:
    if (ctx->pc == 0x4AB808u) {
        ctx->pc = 0x4AB808u;
            // 0x4ab808: 0xa2400068  sb          $zero, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4AB80Cu;
        goto label_4ab80c;
    }
    ctx->pc = 0x4AB804u;
    {
        const bool branch_taken_0x4ab804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ab804) {
            ctx->pc = 0x4AB808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB804u;
            // 0x4ab808: 0xa2400068  sb          $zero, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB818u;
            goto label_4ab818;
        }
    }
    ctx->pc = 0x4AB80Cu;
label_4ab80c:
    // 0x4ab80c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4ab80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4ab810:
    // 0x4ab810: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4ab810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4ab814:
    // 0x4ab814: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x4ab814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_4ab818:
    // 0x4ab818: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x4ab818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab81c:
    // 0x4ab81c: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x4ab81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab820:
    // 0x4ab820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ab820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ab824:
    // 0x4ab824: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x4ab824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab828:
    // 0x4ab828: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4ab82c:
    if (ctx->pc == 0x4AB82Cu) {
        ctx->pc = 0x4AB82Cu;
            // 0x4ab82c: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->pc = 0x4AB830u;
        goto label_4ab830;
    }
    ctx->pc = 0x4AB828u;
    {
        const bool branch_taken_0x4ab828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AB82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB828u;
            // 0x4ab82c: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab828) {
            ctx->pc = 0x4AB844u;
            goto label_4ab844;
        }
    }
    ctx->pc = 0x4AB830u;
label_4ab830:
    // 0x4ab830: 0xe6550074  swc1        $f21, 0x74($s2)
    ctx->pc = 0x4ab830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
label_4ab834:
    // 0x4ab834: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ab834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ab838:
    // 0x4ab838: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ab838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ab83c:
    // 0x4ab83c: 0x320f809  jalr        $t9
label_4ab840:
    if (ctx->pc == 0x4AB840u) {
        ctx->pc = 0x4AB840u;
            // 0x4ab840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB844u;
        goto label_4ab844;
    }
    ctx->pc = 0x4AB83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB844u);
        ctx->pc = 0x4AB840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB83Cu;
            // 0x4ab840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB844u; }
            if (ctx->pc != 0x4AB844u) { return; }
        }
        }
    }
    ctx->pc = 0x4AB844u;
label_4ab844:
    // 0x4ab844: 0xc11088c  jal         func_442230
label_4ab848:
    if (ctx->pc == 0x4AB848u) {
        ctx->pc = 0x4AB848u;
            // 0x4ab848: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->pc = 0x4AB84Cu;
        goto label_4ab84c;
    }
    ctx->pc = 0x4AB844u;
    SET_GPR_U32(ctx, 31, 0x4AB84Cu);
    ctx->pc = 0x4AB848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB844u;
            // 0x4ab848: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB84Cu; }
        if (ctx->pc != 0x4AB84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB84Cu; }
        if (ctx->pc != 0x4AB84Cu) { return; }
    }
    ctx->pc = 0x4AB84Cu;
label_4ab84c:
    // 0x4ab84c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_4ab850:
    if (ctx->pc == 0x4AB850u) {
        ctx->pc = 0x4AB854u;
        goto label_4ab854;
    }
    ctx->pc = 0x4AB84Cu;
    {
        const bool branch_taken_0x4ab84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab84c) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB854u;
label_4ab854:
    // 0x4ab854: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab858:
    // 0x4ab858: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab85c:
    // 0x4ab85c: 0x320f809  jalr        $t9
label_4ab860:
    if (ctx->pc == 0x4AB860u) {
        ctx->pc = 0x4AB860u;
            // 0x4ab860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB864u;
        goto label_4ab864;
    }
    ctx->pc = 0x4AB85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB864u);
        ctx->pc = 0x4AB860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB85Cu;
            // 0x4ab860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB864u; }
            if (ctx->pc != 0x4AB864u) { return; }
        }
        }
    }
    ctx->pc = 0x4AB864u;
label_4ab864:
    // 0x4ab864: 0x10000024  b           . + 4 + (0x24 << 2)
label_4ab868:
    if (ctx->pc == 0x4AB868u) {
        ctx->pc = 0x4AB86Cu;
        goto label_4ab86c;
    }
    ctx->pc = 0x4AB864u;
    {
        const bool branch_taken_0x4ab864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab864) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB86Cu;
label_4ab86c:
    // 0x4ab86c: 0x8e630cb4  lw          $v1, 0xCB4($s3)
    ctx->pc = 0x4ab86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3252)));
label_4ab870:
    // 0x4ab870: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x4ab870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_4ab874:
    // 0x4ab874: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_4ab878:
    if (ctx->pc == 0x4AB878u) {
        ctx->pc = 0x4AB878u;
            // 0x4ab878: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4AB87Cu;
        goto label_4ab87c;
    }
    ctx->pc = 0x4AB874u;
    {
        const bool branch_taken_0x4ab874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab874) {
            ctx->pc = 0x4AB878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB874u;
            // 0x4ab878: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB894u;
            goto label_4ab894;
        }
    }
    ctx->pc = 0x4AB87Cu;
label_4ab87c:
    // 0x4ab87c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab880:
    // 0x4ab880: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab884:
    // 0x4ab884: 0x320f809  jalr        $t9
label_4ab888:
    if (ctx->pc == 0x4AB888u) {
        ctx->pc = 0x4AB888u;
            // 0x4ab888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB88Cu;
        goto label_4ab88c;
    }
    ctx->pc = 0x4AB884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB88Cu);
        ctx->pc = 0x4AB888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB884u;
            // 0x4ab888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB88Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB88Cu; }
            if (ctx->pc != 0x4AB88Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AB88Cu;
label_4ab88c:
    // 0x4ab88c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4ab890:
    if (ctx->pc == 0x4AB890u) {
        ctx->pc = 0x4AB894u;
        goto label_4ab894;
    }
    ctx->pc = 0x4AB88Cu;
    {
        const bool branch_taken_0x4ab88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab88c) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB894u;
label_4ab894:
    // 0x4ab894: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ab894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4ab898:
    // 0x4ab898: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x4ab898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4ab89c:
    // 0x4ab89c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x4ab89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ab8a0:
    // 0x4ab8a0: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x4ab8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ab8a4:
    // 0x4ab8a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ab8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ab8a8:
    // 0x4ab8a8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_4ab8ac:
    if (ctx->pc == 0x4AB8ACu) {
        ctx->pc = 0x4AB8B0u;
        goto label_4ab8b0;
    }
    ctx->pc = 0x4AB8A8u;
    {
        const bool branch_taken_0x4ab8a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ab8a8) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB8B0u;
label_4ab8b0:
    // 0x4ab8b0: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x4ab8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_4ab8b4:
    // 0x4ab8b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab8b8:
    // 0x4ab8b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ab8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ab8bc:
    // 0x4ab8bc: 0x320f809  jalr        $t9
label_4ab8c0:
    if (ctx->pc == 0x4AB8C0u) {
        ctx->pc = 0x4AB8C0u;
            // 0x4ab8c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB8C4u;
        goto label_4ab8c4;
    }
    ctx->pc = 0x4AB8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB8C4u);
        ctx->pc = 0x4AB8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB8BCu;
            // 0x4ab8c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB8C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB8C4u; }
            if (ctx->pc != 0x4AB8C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4AB8C4u;
label_4ab8c4:
    // 0x4ab8c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_4ab8c8:
    if (ctx->pc == 0x4AB8C8u) {
        ctx->pc = 0x4AB8CCu;
        goto label_4ab8cc;
    }
    ctx->pc = 0x4AB8C4u;
    {
        const bool branch_taken_0x4ab8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab8c4) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB8CCu;
label_4ab8cc:
    // 0x4ab8cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ab8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ab8d0:
    // 0x4ab8d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ab8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ab8d4:
    // 0x4ab8d4: 0x320f809  jalr        $t9
label_4ab8d8:
    if (ctx->pc == 0x4AB8D8u) {
        ctx->pc = 0x4AB8DCu;
        goto label_4ab8dc;
    }
    ctx->pc = 0x4AB8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AB8DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AB8DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AB8DCu; }
            if (ctx->pc != 0x4AB8DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4AB8DCu;
label_4ab8dc:
    // 0x4ab8dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ab8e0:
    if (ctx->pc == 0x4AB8E0u) {
        ctx->pc = 0x4AB8E4u;
        goto label_4ab8e4;
    }
    ctx->pc = 0x4AB8DCu;
    {
        const bool branch_taken_0x4ab8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab8dc) {
            ctx->pc = 0x4AB8F8u;
            goto label_4ab8f8;
        }
    }
    ctx->pc = 0x4AB8E4u;
label_4ab8e4:
    // 0x4ab8e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ab8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ab8e8:
    // 0x4ab8e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ab8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ab8ec:
    // 0x4ab8ec: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4ab8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4ab8f0:
    // 0x4ab8f0: 0xc057b7c  jal         func_15EDF0
label_4ab8f4:
    if (ctx->pc == 0x4AB8F4u) {
        ctx->pc = 0x4AB8F4u;
            // 0x4ab8f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4AB8F8u;
        goto label_4ab8f8;
    }
    ctx->pc = 0x4AB8F0u;
    SET_GPR_U32(ctx, 31, 0x4AB8F8u);
    ctx->pc = 0x4AB8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB8F0u;
            // 0x4ab8f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB8F8u; }
        if (ctx->pc != 0x4AB8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB8F8u; }
        if (ctx->pc != 0x4AB8F8u) { return; }
    }
    ctx->pc = 0x4AB8F8u;
label_4ab8f8:
    // 0x4ab8f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ab8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ab8fc:
    // 0x4ab8fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4ab8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4ab900:
    // 0x4ab900: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ab900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ab904:
    // 0x4ab904: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ab904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ab908:
    // 0x4ab908: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ab908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ab90c:
    // 0x4ab90c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ab90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ab910:
    // 0x4ab910: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ab910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ab914:
    // 0x4ab914: 0x3e00008  jr          $ra
label_4ab918:
    if (ctx->pc == 0x4AB918u) {
        ctx->pc = 0x4AB918u;
            // 0x4ab918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4AB91Cu;
        goto label_4ab91c;
    }
    ctx->pc = 0x4AB914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB914u;
            // 0x4ab918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AB91Cu;
label_4ab91c:
    // 0x4ab91c: 0x0  nop
    ctx->pc = 0x4ab91cu;
    // NOP
label_4ab920:
    // 0x4ab920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ab920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ab924:
    // 0x4ab924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ab924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ab928:
    // 0x4ab928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ab928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ab92c:
    // 0x4ab92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ab92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ab930:
    // 0x4ab930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ab930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ab934:
    // 0x4ab934: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4ab938:
    if (ctx->pc == 0x4AB938u) {
        ctx->pc = 0x4AB938u;
            // 0x4ab938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB93Cu;
        goto label_4ab93c;
    }
    ctx->pc = 0x4AB934u;
    {
        const bool branch_taken_0x4ab934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB934u;
            // 0x4ab938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab934) {
            ctx->pc = 0x4AB984u;
            goto label_4ab984;
        }
    }
    ctx->pc = 0x4AB93Cu;
label_4ab93c:
    // 0x4ab93c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ab93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ab940:
    // 0x4ab940: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x4ab940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
label_4ab944:
    // 0x4ab944: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ab944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ab948:
    // 0x4ab948: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4ab948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4ab94c:
    // 0x4ab94c: 0xc1109cc  jal         func_442730
label_4ab950:
    if (ctx->pc == 0x4AB950u) {
        ctx->pc = 0x4AB950u;
            // 0x4ab950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AB954u;
        goto label_4ab954;
    }
    ctx->pc = 0x4AB94Cu;
    SET_GPR_U32(ctx, 31, 0x4AB954u);
    ctx->pc = 0x4AB950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB94Cu;
            // 0x4ab950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB954u; }
        if (ctx->pc != 0x4AB954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB954u; }
        if (ctx->pc != 0x4AB954u) { return; }
    }
    ctx->pc = 0x4AB954u;
label_4ab954:
    // 0x4ab954: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x4ab954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_4ab958:
    // 0x4ab958: 0xc1109cc  jal         func_442730
label_4ab95c:
    if (ctx->pc == 0x4AB95Cu) {
        ctx->pc = 0x4AB95Cu;
            // 0x4ab95c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AB960u;
        goto label_4ab960;
    }
    ctx->pc = 0x4AB958u;
    SET_GPR_U32(ctx, 31, 0x4AB960u);
    ctx->pc = 0x4AB95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB958u;
            // 0x4ab95c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB960u; }
        if (ctx->pc != 0x4AB960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB960u; }
        if (ctx->pc != 0x4AB960u) { return; }
    }
    ctx->pc = 0x4AB960u;
label_4ab960:
    // 0x4ab960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ab960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ab964:
    // 0x4ab964: 0xc0ee744  jal         func_3B9D10
label_4ab968:
    if (ctx->pc == 0x4AB968u) {
        ctx->pc = 0x4AB968u;
            // 0x4ab968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB96Cu;
        goto label_4ab96c;
    }
    ctx->pc = 0x4AB964u;
    SET_GPR_U32(ctx, 31, 0x4AB96Cu);
    ctx->pc = 0x4AB968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB964u;
            // 0x4ab968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB96Cu; }
        if (ctx->pc != 0x4AB96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB96Cu; }
        if (ctx->pc != 0x4AB96Cu) { return; }
    }
    ctx->pc = 0x4AB96Cu;
label_4ab96c:
    // 0x4ab96c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ab96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ab970:
    // 0x4ab970: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ab970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ab974:
    // 0x4ab974: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ab978:
    if (ctx->pc == 0x4AB978u) {
        ctx->pc = 0x4AB978u;
            // 0x4ab978: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB97Cu;
        goto label_4ab97c;
    }
    ctx->pc = 0x4AB974u;
    {
        const bool branch_taken_0x4ab974 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ab974) {
            ctx->pc = 0x4AB978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB974u;
            // 0x4ab978: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AB988u;
            goto label_4ab988;
        }
    }
    ctx->pc = 0x4AB97Cu;
label_4ab97c:
    // 0x4ab97c: 0xc0400a8  jal         func_1002A0
label_4ab980:
    if (ctx->pc == 0x4AB980u) {
        ctx->pc = 0x4AB980u;
            // 0x4ab980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AB984u;
        goto label_4ab984;
    }
    ctx->pc = 0x4AB97Cu;
    SET_GPR_U32(ctx, 31, 0x4AB984u);
    ctx->pc = 0x4AB980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB97Cu;
            // 0x4ab980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB984u; }
        if (ctx->pc != 0x4AB984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB984u; }
        if (ctx->pc != 0x4AB984u) { return; }
    }
    ctx->pc = 0x4AB984u;
label_4ab984:
    // 0x4ab984: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ab984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ab988:
    // 0x4ab988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ab988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ab98c:
    // 0x4ab98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ab98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ab990:
    // 0x4ab990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ab990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ab994:
    // 0x4ab994: 0x3e00008  jr          $ra
label_4ab998:
    if (ctx->pc == 0x4AB998u) {
        ctx->pc = 0x4AB998u;
            // 0x4ab998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AB99Cu;
        goto label_4ab99c;
    }
    ctx->pc = 0x4AB994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB994u;
            // 0x4ab998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AB99Cu;
label_4ab99c:
    // 0x4ab99c: 0x0  nop
    ctx->pc = 0x4ab99cu;
    // NOP
}
